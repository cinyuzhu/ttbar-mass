
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

// std::vector<float>   truth_mc_pow_pt;
// std::vector<float>   truth_mc_pow_eta;
// std::vector<float>   truth_mc_pow_phi;
// std::vector<float>   truth_mc_pow_e;
// std::vector<int>     truth_mc_pow_pdgId;
// std::vector<int>     truth_mc_pow_status;

void NewTree(std::string treename, const TString &Files, TFile *MCfile);
void SetBranches( TTree *t);
Float_t get_xsec_feff_kfac( Int_t dsid);

#endif
