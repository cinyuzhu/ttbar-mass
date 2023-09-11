//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Aug 21 15:06:00 2023 by ROOT version 6.26/04
// from TTree truth/tree
// found on file: ../user.cgarvey.32744802._000002.output.root
//////////////////////////////////////////////////////////

#ifndef mytruth_h
#define mytruth_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"

class mytruth {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         weight_mc;
   ULong64_t       eventNumber;
   UInt_t          runNumber;
   Float_t         mu;
   Float_t         mu_actual;
   Float_t         weight_pileup;
   UInt_t          randomRunNumber;
   UInt_t          mcChannelNumber;
   vector<float>   *PDFinfo_X1;
   vector<float>   *PDFinfo_X2;
   vector<int>     *PDFinfo_PDGID1;
   vector<int>     *PDFinfo_PDGID2;
   vector<float>   *PDFinfo_Q;
   vector<float>   *PDFinfo_XF1;
   vector<float>   *PDFinfo_XF2;
   Int_t           MC_Wdecay2_from_tbar_pdgId;
   Int_t           MC_Wdecay1_from_t_pdgId;
   Int_t           MC_Wdecay2_from_t_pdgId;
   Int_t           MC_Wdecay1_from_tbar_pdgId;
   Float_t         MC_Wdecay2_from_tbar_eta;
   Float_t         MC_Wdecay2_from_tbar_m;
   Float_t         MC_Wdecay2_from_t_phi;
   Float_t         MC_Wdecay2_from_t_eta;
   Float_t         MC_Wdecay2_from_t_m;
   Float_t         MC_Wdecay1_from_tbar_phi;
   Float_t         MC_Wdecay1_from_tbar_eta;
   Float_t         MC_Wdecay1_from_tbar_pt;
   Float_t         MC_Wdecay1_from_t_phi;
   Float_t         MC_Wdecay1_from_t_eta;
   Float_t         MC_b_from_t_phi;
   Float_t         MC_Wdecay1_from_t_pt;
   Float_t         MC_b_from_tbar_pt;
   Float_t         MC_b_from_t_pt;
   Float_t         MC_b_from_t_m;
   Float_t         MC_Wdecay2_from_t_pt;
   Float_t         MC_W_from_tbar_phi;
   Float_t         MC_W_from_tbar_eta;
   Float_t         MC_W_from_tbar_pt;
   Float_t         MC_W_from_t_pt;
   Float_t         MC_t_beforeFSR_eta;
   Float_t         MC_W_from_t_m;
   Float_t         MC_t_beforeFSR_m;
   Float_t         MC_t_beforeFSR_phi;
   Float_t         MC_ttbar_afterFSR_beforeDecay_pt;
   Float_t         MC_Wdecay2_from_tbar_phi;
   Float_t         MC_ttbar_afterFSR_beforeDecay_phi;
   Float_t         MC_Wdecay1_from_t_m;
   Float_t         MC_W_from_t_eta;
   Float_t         MC_tbar_beforeFSR_m;
   Float_t         MC_Wdecay2_from_tbar_pt;
   Float_t         MC_Wdecay1_from_tbar_m;
   Float_t         MC_b_from_tbar_phi;
   Float_t         MC_ttbar_afterFSR_beforeDecay_m;
   Float_t         MC_ttbar_afterFSR_eta;
   Float_t         MC_b_from_tbar_eta;
   Float_t         MC_b_from_t_eta;
   Float_t         MC_ttbar_beforeFSR_pt;
   Float_t         MC_ttbar_beforeFSR_m;
   Float_t         MC_ttbar_beforeFSR_eta;
   Float_t         MC_ttbar_afterFSR_beforeDecay_eta;
   Float_t         MC_t_afterFSR_SC_pt;
   Float_t         MC_ttbar_beforeFSR_phi;
   Float_t         MC_t_beforeFSR_pt;
   Float_t         MC_t_afterFSR_m;
   Float_t         MC_tbar_beforeFSR_pt;
   Float_t         MC_t_afterFSR_pt;
   Float_t         MC_t_afterFSR_phi;
   Float_t         MC_tbar_afterFSR_eta;
   Float_t         MC_t_afterFSR_SC_m;
   Float_t         MC_tbar_afterFSR_phi;
   Float_t         MC_tbar_afterFSR_SC_phi;
   Float_t         MC_t_afterFSR_SC_phi;
   Float_t         MC_b_from_tbar_m;
   Float_t         MC_tbar_beforeFSR_eta;
   Float_t         MC_tbar_beforeFSR_phi;
   Float_t         MC_tbar_afterFSR_m;
   Float_t         MC_ttbar_afterFSR_phi;
   Float_t         MC_ttbar_afterFSR_m;
   Float_t         MC_t_afterFSR_SC_eta;
   Float_t         MC_tbar_afterFSR_pt;
   Float_t         MC_W_from_tbar_m;
   Float_t         MC_ttbar_afterFSR_pt;
   Float_t         MC_tbar_afterFSR_SC_m;
   Float_t         MC_tbar_afterFSR_SC_eta;
   Float_t         MC_W_from_t_phi;
   Float_t         MC_t_afterFSR_eta;
   Float_t         MC_tbar_afterFSR_SC_pt;

   // List of branches
   TBranch        *b_weight_mc;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_mu;   //!
   TBranch        *b_mu_actual;   //!
   TBranch        *b_weight_pileup;   //!
   TBranch        *b_randomRunNumber;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_PDFinfo_X1;   //!
   TBranch        *b_PDFinfo_X2;   //!
   TBranch        *b_PDFinfo_PDGID1;   //!
   TBranch        *b_PDFinfo_PDGID2;   //!
   TBranch        *b_PDFinfo_Q;   //!
   TBranch        *b_PDFinfo_XF1;   //!
   TBranch        *b_PDFinfo_XF2;   //!
   TBranch        *b_MC_Wdecay2_from_tbar_pdgId;   //!
   TBranch        *b_MC_Wdecay1_from_t_pdgId;   //!
   TBranch        *b_MC_Wdecay2_from_t_pdgId;   //!
   TBranch        *b_MC_Wdecay1_from_tbar_pdgId;   //!
   TBranch        *b_MC_Wdecay2_from_tbar_eta;   //!
   TBranch        *b_MC_Wdecay2_from_tbar_m;   //!
   TBranch        *b_MC_Wdecay2_from_t_phi;   //!
   TBranch        *b_MC_Wdecay2_from_t_eta;   //!
   TBranch        *b_MC_Wdecay2_from_t_m;   //!
   TBranch        *b_MC_Wdecay1_from_tbar_phi;   //!
   TBranch        *b_MC_Wdecay1_from_tbar_eta;   //!
   TBranch        *b_MC_Wdecay1_from_tbar_pt;   //!
   TBranch        *b_MC_Wdecay1_from_t_phi;   //!
   TBranch        *b_MC_Wdecay1_from_t_eta;   //!
   TBranch        *b_MC_b_from_t_phi;   //!
   TBranch        *b_MC_Wdecay1_from_t_pt;   //!
   TBranch        *b_MC_b_from_tbar_pt;   //!
   TBranch        *b_MC_b_from_t_pt;   //!
   TBranch        *b_MC_b_from_t_m;   //!
   TBranch        *b_MC_Wdecay2_from_t_pt;   //!
   TBranch        *b_MC_W_from_tbar_phi;   //!
   TBranch        *b_MC_W_from_tbar_eta;   //!
   TBranch        *b_MC_W_from_tbar_pt;   //!
   TBranch        *b_MC_W_from_t_pt;   //!
   TBranch        *b_MC_t_beforeFSR_eta;   //!
   TBranch        *b_MC_W_from_t_m;   //!
   TBranch        *b_MC_t_beforeFSR_m;   //!
   TBranch        *b_MC_t_beforeFSR_phi;   //!
   TBranch        *b_MC_ttbar_afterFSR_beforeDecay_pt;   //!
   TBranch        *b_MC_Wdecay2_from_tbar_phi;   //!
   TBranch        *b_MC_ttbar_afterFSR_beforeDecay_phi;   //!
   TBranch        *b_MC_Wdecay1_from_t_m;   //!
   TBranch        *b_MC_W_from_t_eta;   //!
   TBranch        *b_MC_tbar_beforeFSR_m;   //!
   TBranch        *b_MC_Wdecay2_from_tbar_pt;   //!
   TBranch        *b_MC_Wdecay1_from_tbar_m;   //!
   TBranch        *b_MC_b_from_tbar_phi;   //!
   TBranch        *b_MC_ttbar_afterFSR_beforeDecay_m;   //!
   TBranch        *b_MC_ttbar_afterFSR_eta;   //!
   TBranch        *b_MC_b_from_tbar_eta;   //!
   TBranch        *b_MC_b_from_t_eta;   //!
   TBranch        *b_MC_ttbar_beforeFSR_pt;   //!
   TBranch        *b_MC_ttbar_beforeFSR_m;   //!
   TBranch        *b_MC_ttbar_beforeFSR_eta;   //!
   TBranch        *b_MC_ttbar_afterFSR_beforeDecay_eta;   //!
   TBranch        *b_MC_t_afterFSR_SC_pt;   //!
   TBranch        *b_MC_ttbar_beforeFSR_phi;   //!
   TBranch        *b_MC_t_beforeFSR_pt;   //!
   TBranch        *b_MC_t_afterFSR_m;   //!
   TBranch        *b_MC_tbar_beforeFSR_pt;   //!
   TBranch        *b_MC_t_afterFSR_pt;   //!
   TBranch        *b_MC_t_afterFSR_phi;   //!
   TBranch        *b_MC_tbar_afterFSR_eta;   //!
   TBranch        *b_MC_t_afterFSR_SC_m;   //!
   TBranch        *b_MC_tbar_afterFSR_phi;   //!
   TBranch        *b_MC_tbar_afterFSR_SC_phi;   //!
   TBranch        *b_MC_t_afterFSR_SC_phi;   //!
   TBranch        *b_MC_b_from_tbar_m;   //!
   TBranch        *b_MC_tbar_beforeFSR_eta;   //!
   TBranch        *b_MC_tbar_beforeFSR_phi;   //!
   TBranch        *b_MC_tbar_afterFSR_m;   //!
   TBranch        *b_MC_ttbar_afterFSR_phi;   //!
   TBranch        *b_MC_ttbar_afterFSR_m;   //!
   TBranch        *b_MC_t_afterFSR_SC_eta;   //!
   TBranch        *b_MC_tbar_afterFSR_pt;   //!
   TBranch        *b_MC_W_from_tbar_m;   //!
   TBranch        *b_MC_ttbar_afterFSR_pt;   //!
   TBranch        *b_MC_tbar_afterFSR_SC_m;   //!
   TBranch        *b_MC_tbar_afterFSR_SC_eta;   //!
   TBranch        *b_MC_W_from_t_phi;   //!
   TBranch        *b_MC_t_afterFSR_eta;   //!
   TBranch        *b_MC_tbar_afterFSR_SC_pt;   //!

   mytruth(TTree *tree=0);
   virtual ~mytruth();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef mytruth_cxx
mytruth::mytruth(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../user.cgarvey.32744802._000002.output.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../user.cgarvey.32744802._000002.output.root");
      }
      f->GetObject("truth",tree);

   }
   Init(tree);
}

mytruth::~mytruth()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t mytruth::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t mytruth::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void mytruth::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   PDFinfo_X1 = 0;
   PDFinfo_X2 = 0;
   PDFinfo_PDGID1 = 0;
   PDFinfo_PDGID2 = 0;
   PDFinfo_Q = 0;
   PDFinfo_XF1 = 0;
   PDFinfo_XF2 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("weight_mc", &weight_mc, &b_weight_mc);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("mu", &mu, &b_mu);
   fChain->SetBranchAddress("mu_actual", &mu_actual, &b_mu_actual);
   fChain->SetBranchAddress("weight_pileup", &weight_pileup, &b_weight_pileup);
   fChain->SetBranchAddress("randomRunNumber", &randomRunNumber, &b_randomRunNumber);
   fChain->SetBranchAddress("mcChannelNumber", &mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("PDFinfo_X1", &PDFinfo_X1, &b_PDFinfo_X1);
   fChain->SetBranchAddress("PDFinfo_X2", &PDFinfo_X2, &b_PDFinfo_X2);
   fChain->SetBranchAddress("PDFinfo_PDGID1", &PDFinfo_PDGID1, &b_PDFinfo_PDGID1);
   fChain->SetBranchAddress("PDFinfo_PDGID2", &PDFinfo_PDGID2, &b_PDFinfo_PDGID2);
   fChain->SetBranchAddress("PDFinfo_Q", &PDFinfo_Q, &b_PDFinfo_Q);
   fChain->SetBranchAddress("PDFinfo_XF1", &PDFinfo_XF1, &b_PDFinfo_XF1);
   fChain->SetBranchAddress("PDFinfo_XF2", &PDFinfo_XF2, &b_PDFinfo_XF2);
   fChain->SetBranchAddress("MC_Wdecay2_from_tbar_pdgId", &MC_Wdecay2_from_tbar_pdgId, &b_MC_Wdecay2_from_tbar_pdgId);
   fChain->SetBranchAddress("MC_Wdecay1_from_t_pdgId", &MC_Wdecay1_from_t_pdgId, &b_MC_Wdecay1_from_t_pdgId);
   fChain->SetBranchAddress("MC_Wdecay2_from_t_pdgId", &MC_Wdecay2_from_t_pdgId, &b_MC_Wdecay2_from_t_pdgId);
   fChain->SetBranchAddress("MC_Wdecay1_from_tbar_pdgId", &MC_Wdecay1_from_tbar_pdgId, &b_MC_Wdecay1_from_tbar_pdgId);
   fChain->SetBranchAddress("MC_Wdecay2_from_tbar_eta", &MC_Wdecay2_from_tbar_eta, &b_MC_Wdecay2_from_tbar_eta);
   fChain->SetBranchAddress("MC_Wdecay2_from_tbar_m", &MC_Wdecay2_from_tbar_m, &b_MC_Wdecay2_from_tbar_m);
   fChain->SetBranchAddress("MC_Wdecay2_from_t_phi", &MC_Wdecay2_from_t_phi, &b_MC_Wdecay2_from_t_phi);
   fChain->SetBranchAddress("MC_Wdecay2_from_t_eta", &MC_Wdecay2_from_t_eta, &b_MC_Wdecay2_from_t_eta);
   fChain->SetBranchAddress("MC_Wdecay2_from_t_m", &MC_Wdecay2_from_t_m, &b_MC_Wdecay2_from_t_m);
   fChain->SetBranchAddress("MC_Wdecay1_from_tbar_phi", &MC_Wdecay1_from_tbar_phi, &b_MC_Wdecay1_from_tbar_phi);
   fChain->SetBranchAddress("MC_Wdecay1_from_tbar_eta", &MC_Wdecay1_from_tbar_eta, &b_MC_Wdecay1_from_tbar_eta);
   fChain->SetBranchAddress("MC_Wdecay1_from_tbar_pt", &MC_Wdecay1_from_tbar_pt, &b_MC_Wdecay1_from_tbar_pt);
   fChain->SetBranchAddress("MC_Wdecay1_from_t_phi", &MC_Wdecay1_from_t_phi, &b_MC_Wdecay1_from_t_phi);
   fChain->SetBranchAddress("MC_Wdecay1_from_t_eta", &MC_Wdecay1_from_t_eta, &b_MC_Wdecay1_from_t_eta);
   fChain->SetBranchAddress("MC_b_from_t_phi", &MC_b_from_t_phi, &b_MC_b_from_t_phi);
   fChain->SetBranchAddress("MC_Wdecay1_from_t_pt", &MC_Wdecay1_from_t_pt, &b_MC_Wdecay1_from_t_pt);
   fChain->SetBranchAddress("MC_b_from_tbar_pt", &MC_b_from_tbar_pt, &b_MC_b_from_tbar_pt);
   fChain->SetBranchAddress("MC_b_from_t_pt", &MC_b_from_t_pt, &b_MC_b_from_t_pt);
   fChain->SetBranchAddress("MC_b_from_t_m", &MC_b_from_t_m, &b_MC_b_from_t_m);
   fChain->SetBranchAddress("MC_Wdecay2_from_t_pt", &MC_Wdecay2_from_t_pt, &b_MC_Wdecay2_from_t_pt);
   fChain->SetBranchAddress("MC_W_from_tbar_phi", &MC_W_from_tbar_phi, &b_MC_W_from_tbar_phi);
   fChain->SetBranchAddress("MC_W_from_tbar_eta", &MC_W_from_tbar_eta, &b_MC_W_from_tbar_eta);
   fChain->SetBranchAddress("MC_W_from_tbar_pt", &MC_W_from_tbar_pt, &b_MC_W_from_tbar_pt);
   fChain->SetBranchAddress("MC_W_from_t_pt", &MC_W_from_t_pt, &b_MC_W_from_t_pt);
   fChain->SetBranchAddress("MC_t_beforeFSR_eta", &MC_t_beforeFSR_eta, &b_MC_t_beforeFSR_eta);
   fChain->SetBranchAddress("MC_W_from_t_m", &MC_W_from_t_m, &b_MC_W_from_t_m);
   fChain->SetBranchAddress("MC_t_beforeFSR_m", &MC_t_beforeFSR_m, &b_MC_t_beforeFSR_m);
   fChain->SetBranchAddress("MC_t_beforeFSR_phi", &MC_t_beforeFSR_phi, &b_MC_t_beforeFSR_phi);
   fChain->SetBranchAddress("MC_ttbar_afterFSR_beforeDecay_pt", &MC_ttbar_afterFSR_beforeDecay_pt, &b_MC_ttbar_afterFSR_beforeDecay_pt);
   fChain->SetBranchAddress("MC_Wdecay2_from_tbar_phi", &MC_Wdecay2_from_tbar_phi, &b_MC_Wdecay2_from_tbar_phi);
   fChain->SetBranchAddress("MC_ttbar_afterFSR_beforeDecay_phi", &MC_ttbar_afterFSR_beforeDecay_phi, &b_MC_ttbar_afterFSR_beforeDecay_phi);
   fChain->SetBranchAddress("MC_Wdecay1_from_t_m", &MC_Wdecay1_from_t_m, &b_MC_Wdecay1_from_t_m);
   fChain->SetBranchAddress("MC_W_from_t_eta", &MC_W_from_t_eta, &b_MC_W_from_t_eta);
   fChain->SetBranchAddress("MC_tbar_beforeFSR_m", &MC_tbar_beforeFSR_m, &b_MC_tbar_beforeFSR_m);
   fChain->SetBranchAddress("MC_Wdecay2_from_tbar_pt", &MC_Wdecay2_from_tbar_pt, &b_MC_Wdecay2_from_tbar_pt);
   fChain->SetBranchAddress("MC_Wdecay1_from_tbar_m", &MC_Wdecay1_from_tbar_m, &b_MC_Wdecay1_from_tbar_m);
   fChain->SetBranchAddress("MC_b_from_tbar_phi", &MC_b_from_tbar_phi, &b_MC_b_from_tbar_phi);
   fChain->SetBranchAddress("MC_ttbar_afterFSR_beforeDecay_m", &MC_ttbar_afterFSR_beforeDecay_m, &b_MC_ttbar_afterFSR_beforeDecay_m);
   fChain->SetBranchAddress("MC_ttbar_afterFSR_eta", &MC_ttbar_afterFSR_eta, &b_MC_ttbar_afterFSR_eta);
   fChain->SetBranchAddress("MC_b_from_tbar_eta", &MC_b_from_tbar_eta, &b_MC_b_from_tbar_eta);
   fChain->SetBranchAddress("MC_b_from_t_eta", &MC_b_from_t_eta, &b_MC_b_from_t_eta);
   fChain->SetBranchAddress("MC_ttbar_beforeFSR_pt", &MC_ttbar_beforeFSR_pt, &b_MC_ttbar_beforeFSR_pt);
   fChain->SetBranchAddress("MC_ttbar_beforeFSR_m", &MC_ttbar_beforeFSR_m, &b_MC_ttbar_beforeFSR_m);
   fChain->SetBranchAddress("MC_ttbar_beforeFSR_eta", &MC_ttbar_beforeFSR_eta, &b_MC_ttbar_beforeFSR_eta);
   fChain->SetBranchAddress("MC_ttbar_afterFSR_beforeDecay_eta", &MC_ttbar_afterFSR_beforeDecay_eta, &b_MC_ttbar_afterFSR_beforeDecay_eta);
   fChain->SetBranchAddress("MC_t_afterFSR_SC_pt", &MC_t_afterFSR_SC_pt, &b_MC_t_afterFSR_SC_pt);
   fChain->SetBranchAddress("MC_ttbar_beforeFSR_phi", &MC_ttbar_beforeFSR_phi, &b_MC_ttbar_beforeFSR_phi);
   fChain->SetBranchAddress("MC_t_beforeFSR_pt", &MC_t_beforeFSR_pt, &b_MC_t_beforeFSR_pt);
   fChain->SetBranchAddress("MC_t_afterFSR_m", &MC_t_afterFSR_m, &b_MC_t_afterFSR_m);
   fChain->SetBranchAddress("MC_tbar_beforeFSR_pt", &MC_tbar_beforeFSR_pt, &b_MC_tbar_beforeFSR_pt);
   fChain->SetBranchAddress("MC_t_afterFSR_pt", &MC_t_afterFSR_pt, &b_MC_t_afterFSR_pt);
   fChain->SetBranchAddress("MC_t_afterFSR_phi", &MC_t_afterFSR_phi, &b_MC_t_afterFSR_phi);
   fChain->SetBranchAddress("MC_tbar_afterFSR_eta", &MC_tbar_afterFSR_eta, &b_MC_tbar_afterFSR_eta);
   fChain->SetBranchAddress("MC_t_afterFSR_SC_m", &MC_t_afterFSR_SC_m, &b_MC_t_afterFSR_SC_m);
   fChain->SetBranchAddress("MC_tbar_afterFSR_phi", &MC_tbar_afterFSR_phi, &b_MC_tbar_afterFSR_phi);
   fChain->SetBranchAddress("MC_tbar_afterFSR_SC_phi", &MC_tbar_afterFSR_SC_phi, &b_MC_tbar_afterFSR_SC_phi);
   fChain->SetBranchAddress("MC_t_afterFSR_SC_phi", &MC_t_afterFSR_SC_phi, &b_MC_t_afterFSR_SC_phi);
   fChain->SetBranchAddress("MC_b_from_tbar_m", &MC_b_from_tbar_m, &b_MC_b_from_tbar_m);
   fChain->SetBranchAddress("MC_tbar_beforeFSR_eta", &MC_tbar_beforeFSR_eta, &b_MC_tbar_beforeFSR_eta);
   fChain->SetBranchAddress("MC_tbar_beforeFSR_phi", &MC_tbar_beforeFSR_phi, &b_MC_tbar_beforeFSR_phi);
   fChain->SetBranchAddress("MC_tbar_afterFSR_m", &MC_tbar_afterFSR_m, &b_MC_tbar_afterFSR_m);
   fChain->SetBranchAddress("MC_ttbar_afterFSR_phi", &MC_ttbar_afterFSR_phi, &b_MC_ttbar_afterFSR_phi);
   fChain->SetBranchAddress("MC_ttbar_afterFSR_m", &MC_ttbar_afterFSR_m, &b_MC_ttbar_afterFSR_m);
   fChain->SetBranchAddress("MC_t_afterFSR_SC_eta", &MC_t_afterFSR_SC_eta, &b_MC_t_afterFSR_SC_eta);
   fChain->SetBranchAddress("MC_tbar_afterFSR_pt", &MC_tbar_afterFSR_pt, &b_MC_tbar_afterFSR_pt);
   fChain->SetBranchAddress("MC_W_from_tbar_m", &MC_W_from_tbar_m, &b_MC_W_from_tbar_m);
   fChain->SetBranchAddress("MC_ttbar_afterFSR_pt", &MC_ttbar_afterFSR_pt, &b_MC_ttbar_afterFSR_pt);
   fChain->SetBranchAddress("MC_tbar_afterFSR_SC_m", &MC_tbar_afterFSR_SC_m, &b_MC_tbar_afterFSR_SC_m);
   fChain->SetBranchAddress("MC_tbar_afterFSR_SC_eta", &MC_tbar_afterFSR_SC_eta, &b_MC_tbar_afterFSR_SC_eta);
   fChain->SetBranchAddress("MC_W_from_t_phi", &MC_W_from_t_phi, &b_MC_W_from_t_phi);
   fChain->SetBranchAddress("MC_t_afterFSR_eta", &MC_t_afterFSR_eta, &b_MC_t_afterFSR_eta);
   fChain->SetBranchAddress("MC_tbar_afterFSR_SC_pt", &MC_tbar_afterFSR_SC_pt, &b_MC_tbar_afterFSR_SC_pt);
   Notify();
}

Bool_t mytruth::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void mytruth::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t mytruth::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef mytruth_cxx
