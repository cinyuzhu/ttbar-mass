
#ifndef NEWTREE_H
#define NEWTREE_H

#include <iostream>
#include <fstream>
#include <TFile.h>
#include <TROOT.h>
#include <TH2.h>
#include <TMath.h>
#include <TROOT.h>
#include <TLorentzVector.h>




Float_t         t_weight_mc;
Float_t         t_weight_pileup;
Float_t         t_weight_leptonSF;
Float_t         t_weight_oldTriggerSF;
Float_t         t_weight_globalLeptonTriggerSF;
Float_t         t_weight_bTagSF_DL1r_77;
Float_t         t_weight_jvt;

ULong64_t       t_eventNumber;
UInt_t          t_runNumber;


Int_t           t_MC_Wdecay2_from_tbar_pdgId;
Float_t         t_MC_Wdecay2_from_tbar_pt;
Float_t         t_MC_Wdecay2_from_tbar_eta;
Float_t         t_MC_Wdecay2_from_tbar_phi;
Float_t         t_MC_Wdecay2_from_tbar_m;
Int_t           t_MC_Wdecay1_from_t_pdgId;
Float_t         t_MC_Wdecay1_from_t_pt;
Float_t         t_MC_Wdecay1_from_t_eta;
Float_t         t_MC_Wdecay1_from_t_phi;
Float_t         t_MC_Wdecay1_from_t_m;
Int_t           t_MC_Wdecay2_from_t_pdgId;
Float_t         t_MC_Wdecay2_from_t_pt;
Float_t         t_MC_Wdecay2_from_t_eta;
Float_t         t_MC_Wdecay2_from_t_phi;
Float_t         t_MC_Wdecay2_from_t_m;
Int_t           t_MC_Wdecay1_from_tbar_pdgId;
Float_t         t_MC_Wdecay1_from_tbar_pt;
Float_t         t_MC_Wdecay1_from_tbar_eta;
Float_t         t_MC_Wdecay1_from_tbar_phi;
Float_t         t_MC_Wdecay1_from_tbar_m;
Float_t         t_MC_b_from_t_pt;
Float_t         t_MC_b_from_t_eta;
Float_t         t_MC_b_from_t_phi;
Float_t         t_MC_b_from_t_m;
Float_t         t_MC_W_from_t_pt;
Float_t         t_MC_W_from_t_eta;
Float_t         t_MC_W_from_t_phi;
Float_t         t_MC_W_from_t_m;
Float_t         t_MC_b_from_tbar_pt;
Float_t         t_MC_b_from_tbar_eta;
Float_t         t_MC_b_from_tbar_phi;
Float_t         t_MC_b_from_tbar_m;
Float_t         t_MC_W_from_tbar_pt;
Float_t         t_MC_W_from_tbar_eta;
Float_t         t_MC_W_from_tbar_phi;
Float_t         t_MC_W_from_tbar_m;
Float_t         t_MC_ttbar_beforeFSR_pt;
Float_t         t_MC_ttbar_beforeFSR_eta;
Float_t         t_MC_ttbar_beforeFSR_phi;
Float_t         t_MC_ttbar_beforeFSR_m;
Float_t         t_MC_t_beforeFSR_pt;
Float_t         t_MC_t_beforeFSR_eta;
Float_t         t_MC_t_beforeFSR_phi;
Float_t         t_MC_t_beforeFSR_m;
Float_t         t_MC_tbar_beforeFSR_pt;
Float_t         t_MC_tbar_beforeFSR_eta;
Float_t         t_MC_tbar_beforeFSR_phi;
Float_t         t_MC_tbar_beforeFSR_m;
int             t_parton1;
int             t_parton2;
Float_t         t_yt_reweight0;
Float_t         t_yt_reweight1;
Float_t         t_yt_reweight2;
Float_t         t_yt_reweight3;
Float_t         t_yt_reweight4;
int             is_gg;


std::vector<float>   *t_el_pt;
std::vector<float>   *t_el_eta;
std::vector<float>   *t_el_phi;
std::vector<float>   *t_el_e;
std::vector<float>   *t_el_charge;
std::vector<float>   *t_el_d0sig;
std::vector<float>   *t_el_delta_z0_sintheta;

std::vector<float>   *t_mu_pt;
std::vector<float>   *t_mu_eta;
std::vector<float>   *t_mu_phi;
std::vector<float>   *t_mu_e;
std::vector<float>   *t_mu_charge;
std::vector<float>   *t_mu_d0sig;
std::vector<float>   *t_mu_delta_z0_sintheta;

std::vector<float>   *t_jet_pt;
std::vector<float>   *t_jet_eta;
std::vector<float>   *t_jet_phi;
std::vector<float>   *t_jet_e;
std::vector<float>   *t_jet_jvt;
std::vector<char>    *t_jet_isbtagged_DL1r_77;
std::vector<float>   *t_jet_DL1r;
Float_t         t_met_met;
Float_t         t_met_phi;

void NewTree(std::string treename, const TString &Files, TFile *t_MCfile);
void SetBranches( TTree *t);
Float_t get_xsec_feff_kfac( Int_t dsid);

#endif
