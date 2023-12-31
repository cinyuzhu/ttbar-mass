from ROOT import TCanvas, TLegend, TFile, TPaveLabel, TPaveText, TTree, TLorentzVector, TH1D, TVectorT, gStyle, THStack, gPad
import ROOT
import numpy as np



def is_bjet(tag):
    if tag ==  '\x01': return True
    elif tag == '\x00': return False
    else: 
        print("warning: this tag is neither 0 nor 1")
        return False
    

def GetLorenzP4List(tree, obj):
    """
    returns a list of LorenzP4 of a certain object (el, mu, bjet) for each event
    """
    p4s, __pts, __etas, __phis, __es = [], [], [], [], []
    # read from the entry
    
    if obj == 'mu' or obj == 'el':
        __pts = getattr(tree, obj + "_pt")
        __etas = getattr(tree, obj + "_eta")
        __phis = getattr(tree, obj + "_phi")
        __es = getattr(tree, obj + "_e")

    elif obj == 'bjet':
        __tags = ROOT.vector('string')()
        __tags = getattr(tree, "jet_isbtagged_DL1r_77")
        __pts_all = getattr(tree, "jet_pt")
        __etas_all = getattr(tree, "jet_eta")
        __phis_all = getattr(tree, "jet_phi")
        __es_all = getattr(tree, "jet_e")
       
        for i in range(len(__tags)):
            if is_bjet(__tags[i]):
            # if True: 
                __pts.append(__pts_all[i])
                __etas.append(__etas_all[i])
                __phis.append(__phis_all[i])
                __es.append(__es_all[i])
    elif obj == 'lep':
        # strictly for dilep final state
        p4s_el = GetLorenzP4List(tree,'el')
        p4s_mu = GetLorenzP4List(tree,'mu')
        p4s = getp4s_lep(p4s_el, p4s_mu)
        return p4s
    else:
        print("this object is not defined in the function !")
        return []
    
    # construct p4 and append it to list
    for n in range(len(__pts)):
        p4 = TLorentzVector()
        p4.SetPtEtaPhiE(float(__pts[n]) ,float(__etas[n]) , float(__phis[n]) , float(__es[n]))
        p4s.append(p4)
    return p4s


def W_to_which(p4s_el, p4s_mu):
    """
    returns the type of W decay 
    (elel = 1, elmu = 2, mumu = 3, invalid event = 0)
    """
    # only select events with exactly 2 bjets
    if len(p4s_el) == 2 and len(p4s_mu) == 0: return 1
    elif len(p4s_el) == 1 and len(p4s_mu) == 1: return 2
    elif len(p4s_el) == 0 and len(p4s_mu) == 2: return 3
    else: return 0


def getp4s_lep(p4s_el, p4s_mu):
    """
    merge muon/electron p4 together, dilep event only
    """
    p4s_lep = []
    if W_to_which(p4s_el, p4s_mu): # is dilep event
        p4s_lep.extend(p4s_el)
        p4s_lep.extend(p4s_mu)
        # print(len(p4s_lep))
        if len(p4s_lep) != 2: print("error: not 2 leptons")
    return p4s_lep

# def minimax(p4s_a, p4s_b):
#     """
#     get the index of minimax pair b+l, return index_a, index_b
#     a is the particle fixed for max a1b? in first step
#     b is the particle searched for max a1b? in first step
    
#     """
#     masses = np.empty((2,2))
#     for i, p4_a in enumerate(p4s_a):
#         for j, p4_b in enumerate(p4s_b):
#             # get the max m_b?li, save the idx
#             masses[i,j] = (p4_a + p4_b).M()/1000
#     # use minimax method to get the pair:

#     # the indices of b with first and second lep (max(bl)):
#     indices = np.array([masses[0].argmax(),masses[1].argmax()])
#     # the index of l with minimum max
#     index2 = np.array([masses[0,indices[0]], masses[1,indices[1]]]).argmin()
#     # return the found index of 1st obj, 2nd obj
#     return index2, indices[index2] 

def minimax_cross(p4s_a, p4s_b):
    """
    get the index of minimax cross pair b+l, return index_a, index_b
    $m_{bl}^{minimax}  = min(max(m_{b1l1},m_{b2l2}), max(m_{b1l2},m_{b2l1}))$
    
    """
    # in this algorithms, particle a and b are symmetrical
    masses = np.empty((2,2))
    for i, p4_a in enumerate(p4s_a):
        for j, p4_b in enumerate(p4s_b):
            # get the max m_b?li, save the idx
            masses[i,j] = (p4_a + p4_b).M()/1000
    # print("mass:")
    # print(masses)
    
    # sorry, i know it looks stupid
    idx0 = np.array([masses[0,0],masses[1,1]]).argmax() # -> max = masses[idx0, idx0]
    idx1 = np.array([masses[0,1],masses[1,0]]).argmax() # -> max = masses[idx1, 1-idx1]
    idx = np.array([masses[idx0, idx0], masses[idx1, 1-idx1]]).argmin()

    if idx == 0: return idx0, idx0
    if idx == 1: return idx1, 1-idx1

    
def p4_from_pt_eta_phi_m(tree, prefix):
    __pt = getattr(tree, prefix+"_pt")
    __eta = getattr(tree, prefix+"_eta")
    __phi = getattr(tree, prefix+"_phi")
    __m = getattr(tree, prefix+"_m")
    p4 = TLorentzVector()
    p4.SetPtEtaPhiM(__pt,__eta,__phi, __m)
    return p4


def get_leptons_from_truth(prefixes, tree, withtau = False):
    """
    return el/mu p4 in the order of [lep from t, lep from tbar]
    """
    p4s_truth_lep = [] # first element from t, second element from tbar
    lepton_id = [11, 13]
    if withtau: lepton_id.append(15)
    for j, prefix in enumerate(prefixes):
        id = getattr(tree, prefix + "_pdgId")   
        if abs(id) in lepton_id:
                p4s_truth_lep.append(p4_from_pt_eta_phi_m(tree, prefix))
    
    return p4s_truth_lep

def deltaR_match(p4s_truth, p4s_nom, maxdR = 0.4):
    """
    input: [truth_from_t,truth_from_tbat];nominal p4
    output:[nominal_from_t, nominal_from_tbar]; 
    (output: matched second variable with the first variable)
    unique match
    """
    if len(p4s_truth) != 2 or len(p4s_nom) != 2: return []
    p4s_match = []
    indices = [] # [indices match with t, with tbar]
    for p4_truth in p4s_truth:
        dRs = []
        for p4_nom in p4s_nom:
            dR = ROOT.Math.VectorUtil.DeltaR(p4_truth, p4_nom)
            dRs.append(dR)
        idx = np.array(dRs).argmin()

        if dRs[idx] > maxdR: return []
        indices.append(idx)
        p4s_match.append(p4s_nom[idx])
    
    if indices[0] == indices[1]: return []
    return p4s_match

def get_yts(tree):
    return [getattr(tree, "t_yt_reweight0"), getattr(tree, "t_yt_reweight1"), getattr(tree, "t_yt_reweight2") , getattr(tree, "t_yt_reweight3"), getattr(tree, "t_yt_reweight4")]

def ratio_beautify(ratio):
    ratio.SetStats(False)
    ratio.SetTitle("")
    ratio.GetXaxis().SetLabelOffset(0.005)
    ratio.GetXaxis().SetLabelSize(0.18)
    # ratio.GetXaxis().SetTitleOffset(1.1)
    ratio.GetXaxis().SetTitleSize(0.18)
    ratio.GetYaxis().SetLabelSize(0.16)
    ratio.GetYaxis().SetTitleSize(0.16)
    ratio.GetYaxis().SetTitleOffset(0.3)
    ratio.GetYaxis().SetNdivisions(506)

    return ratio