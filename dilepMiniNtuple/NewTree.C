
#include "NewTree.h"
#include "NominalTree.h"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TTree.h"
#include <TLorentzVector.h>
#include <TH2.h>
#include <TStyle.h>
#include <Math/Vector3D.h>
#include <Math/Vector4D.h>
#include <Math/Boost.h>
#include <Math/GenVector/Boost.h>
#include <math.h>
#include <time.h>

using namespace std;

void SetBranches(TTree *out_tree){
  out_tree->Branch("t_weight_mc", &t_weight_mc, "weight_mc/F");
  out_tree->Branch("t_weight_pileup", &t_weight_pileup, "weight_pileup/F");
  out_tree->Branch("t_weight_leptonSF", &t_weight_leptonSF, "weight_leptonSF/F");
  out_tree->Branch("t_weight_globalLeptonTriggerSF", &t_weight_globalLeptonTriggerSF, "weight_globalLeptonTriggerSF/F");
  out_tree->Branch("t_weight_oldTriggerSF", &t_weight_oldTriggerSF, "weight_oldTriggerSF/F");
  out_tree->Branch("t_weight_bTagSF_DL1r_77", &t_weight_bTagSF_DL1r_77, "weight_bTagSF_DL1r_77/F");
  out_tree->Branch("t_weight_jvt", &t_weight_jvt, "weight_jvt/F");
  out_tree->Branch("t_eventNumber", &t_eventNumber, "eventNumber/l");
  out_tree->Branch("t_runNumber", &t_runNumber, "runNumber/i");
  // out_tree->Branch("t_MC_W_from_t_phi", &t_MC_W_from_t_phi, "MC_W_from_t_phi/F");
  // out_tree->Branch("t_met_phi", &t_met_phi,"met_phi/F");

// truth 
out_tree->Branch("MC_Wdecay2_from_tbar_pdgId", &t_MC_Wdecay2_from_tbar_pdgId, "MC_Wdecay2_from_tbar_pdgId/I");
out_tree->Branch("MC_Wdecay2_from_tbar_eta", &t_MC_Wdecay2_from_tbar_eta, "MC_Wdecay2_from_tbar_eta/F");
out_tree->Branch("MC_Wdecay2_from_tbar_m", &t_MC_Wdecay2_from_tbar_m, "MC_Wdecay2_from_tbar_m/F");
out_tree->Branch("MC_Wdecay2_from_tbar_phi", &t_MC_Wdecay2_from_tbar_phi, "MC_Wdecay2_from_tbar_phi/F");
out_tree->Branch("MC_Wdecay2_from_tbar_pt", &t_MC_Wdecay2_from_tbar_pt, "MC_Wdecay2_from_tbar_pt/F");
out_tree->Branch("MC_Wdecay1_from_t_pdgId", &t_MC_Wdecay1_from_t_pdgId, "MC_Wdecay1_from_t_pdgId/I");
out_tree->Branch("MC_Wdecay1_from_t_m", &t_MC_Wdecay1_from_t_m, "MC_Wdecay1_from_t_m/F");
out_tree->Branch("MC_Wdecay1_from_t_phi", &t_MC_Wdecay1_from_t_phi, "MC_Wdecay1_from_t_phi/F");
out_tree->Branch("MC_Wdecay1_from_t_eta", &t_MC_Wdecay1_from_t_eta, "MC_Wdecay1_from_t_eta/F");
out_tree->Branch("MC_Wdecay1_from_t_pt", &t_MC_Wdecay1_from_t_pt, "MC_Wdecay1_from_t_pt/F");
out_tree->Branch("MC_Wdecay2_from_t_pdgId", &t_MC_Wdecay2_from_t_pdgId, "MC_Wdecay2_from_t_pdgId/I");
out_tree->Branch("MC_Wdecay2_from_t_phi", &t_MC_Wdecay2_from_t_phi, "MC_Wdecay2_from_t_phi/F");
out_tree->Branch("MC_Wdecay2_from_t_eta", &t_MC_Wdecay2_from_t_eta, "MC_Wdecay2_from_t_eta/F");
out_tree->Branch("MC_Wdecay2_from_t_m", &t_MC_Wdecay2_from_t_m, "MC_Wdecay2_from_t_m/F");
out_tree->Branch("MC_Wdecay2_from_t_pt", &t_MC_Wdecay2_from_t_pt, "MC_Wdecay2_from_t_pt/F");
out_tree->Branch("MC_Wdecay1_from_tbar_pdgId", &t_MC_Wdecay1_from_tbar_pdgId, "MC_Wdecay1_from_tbar_pdgId/I");
out_tree->Branch("MC_Wdecay1_from_tbar_phi", &t_MC_Wdecay1_from_tbar_phi, "MC_Wdecay1_from_tbar_phi/F");
out_tree->Branch("MC_Wdecay1_from_tbar_eta", &t_MC_Wdecay1_from_tbar_eta, "MC_Wdecay1_from_tbar_eta/F");
out_tree->Branch("MC_Wdecay1_from_tbar_pt", &t_MC_Wdecay1_from_tbar_pt, "MC_Wdecay1_from_tbar_pt/F");
out_tree->Branch("MC_Wdecay1_from_tbar_m", &t_MC_Wdecay1_from_tbar_m, "MC_Wdecay1_from_tbar_m/F");
out_tree->Branch("MC_b_from_t_phi", &t_MC_b_from_t_phi, "MC_b_from_t_phi/F");
out_tree->Branch("MC_b_from_t_pt", &t_MC_b_from_t_pt, "MC_b_from_t_pt/F");
out_tree->Branch("MC_b_from_t_m", &t_MC_b_from_t_m, "MC_b_from_t_m/F");
out_tree->Branch("MC_b_from_t_eta", &t_MC_b_from_t_eta, "MC_b_from_t_eta/F");
out_tree->Branch("MC_W_from_t_pt", &t_MC_W_from_t_pt, "MC_W_from_t_pt/F");
out_tree->Branch("MC_W_from_t_m", &t_MC_W_from_t_m, "MC_W_from_t_m/F");
out_tree->Branch("MC_W_from_t_eta", &t_MC_W_from_t_eta, "MC_W_from_t_eta/F");
out_tree->Branch("MC_W_from_t_phi", &t_MC_W_from_t_phi, "MC_W_from_t_phi/F");
out_tree->Branch("MC_b_from_tbar_pt", &t_MC_b_from_tbar_pt, "MC_b_from_tbar_pt/F");
out_tree->Branch("MC_b_from_tbar_phi", &t_MC_b_from_tbar_phi, "MC_b_from_tbar_phi/F");
out_tree->Branch("MC_b_from_tbar_eta", &t_MC_b_from_tbar_eta, "MC_b_from_tbar_eta/F");
out_tree->Branch("MC_b_from_tbar_m", &t_MC_b_from_tbar_m, "MC_b_from_tbar_m/F");
out_tree->Branch("MC_W_from_tbar_phi", &t_MC_W_from_tbar_phi, "MC_W_from_tbar_phi/F");
out_tree->Branch("MC_W_from_tbar_eta", &t_MC_W_from_tbar_eta, "MC_W_from_tbar_eta/F");
out_tree->Branch("MC_W_from_tbar_pt", &t_MC_W_from_tbar_pt, "MC_W_from_tbar_pt/F");
out_tree->Branch("MC_W_from_tbar_m", &t_MC_W_from_tbar_m, "MC_W_from_tbar_m/F");
out_tree->Branch("MC_ttbar_beforeFSR_pt", &t_MC_ttbar_beforeFSR_pt, "MC_ttbar_beforeFSR_pt/F");
out_tree->Branch("MC_ttbar_beforeFSR_m", &t_MC_ttbar_beforeFSR_m, "MC_ttbar_beforeFSR_m/F");
out_tree->Branch("MC_ttbar_beforeFSR_eta", &t_MC_ttbar_beforeFSR_eta, "MC_ttbar_beforeFSR_eta/F");
out_tree->Branch("MC_ttbar_beforeFSR_phi", &t_MC_ttbar_beforeFSR_phi, "MC_ttbar_beforeFSR_phi/F");
out_tree->Branch("MC_t_beforeFSR_eta", &t_MC_t_beforeFSR_eta, "MC_t_beforeFSR_eta/F");
out_tree->Branch("MC_t_beforeFSR_m", &t_MC_t_beforeFSR_m, "MC_t_beforeFSR_m/F");
out_tree->Branch("MC_t_beforeFSR_phi", &t_MC_t_beforeFSR_phi, "MC_t_beforeFSR_phi/F");
out_tree->Branch("MC_t_beforeFSR_pt", &t_MC_t_beforeFSR_pt, "MC_t_beforeFSR_pt/F");
out_tree->Branch("MC_tbar_beforeFSR_m", &t_MC_tbar_beforeFSR_m, "MC_tbar_beforeFSR_m/F");
out_tree->Branch("MC_tbar_beforeFSR_pt", &t_MC_tbar_beforeFSR_pt, "MC_tbar_beforeFSR_pt/F");
out_tree->Branch("MC_tbar_beforeFSR_eta", &t_MC_tbar_beforeFSR_eta, "MC_tbar_beforeFSR_eta/F");
out_tree->Branch("MC_tbar_beforeFSR_phi", &t_MC_tbar_beforeFSR_phi, "MC_tbar_beforeFSR_phi/F");

// nominal branches
out_tree->Branch("el_pt", &t_el_pt);
out_tree->Branch("el_eta", &t_el_eta);
out_tree->Branch("el_phi", &t_el_phi);
out_tree->Branch("el_e", &t_el_e);
out_tree->Branch("el_charge", &t_el_charge);
out_tree->Branch("el_d0sig", &t_el_d0sig);
out_tree->Branch("el_delta_z0_sintheta", &t_el_delta_z0_sintheta);
out_tree->Branch("mu_pt", &t_mu_pt);
out_tree->Branch("mu_eta", &t_mu_eta);
out_tree->Branch("mu_phi", &t_mu_phi);
out_tree->Branch("mu_e", &t_mu_e);
out_tree->Branch("mu_charge", &t_mu_charge);
out_tree->Branch("mu_d0sig", &t_mu_d0sig);
out_tree->Branch("mu_delta_z0_sintheta", &t_mu_delta_z0_sintheta);
out_tree->Branch("jet_pt", &t_jet_pt);
out_tree->Branch("jet_eta", &t_jet_eta);
out_tree->Branch("jet_phi", &t_jet_phi);
out_tree->Branch("jet_e", &t_jet_e);
out_tree->Branch("jet_jvt", &t_jet_jvt);
out_tree->Branch("jet_isbtagged_DL1r_77", &t_jet_isbtagged_DL1r_77);
out_tree->Branch("jet_DL1r", &t_jet_DL1r);
out_tree->Branch("met_met", &t_met_met,"met_met/F");
out_tree->Branch("met_phi", &t_met_phi,"met_phi/F");
}
void NominalTree( TTree *t1) {
  t1->SetBranchAddress("weight_mc",  &weight_mc);
  t1->SetBranchAddress("weight_pileup",  &weight_pileup);
  t1->SetBranchAddress("weight_leptonSF",  &weight_leptonSF);
  t1->SetBranchAddress("weight_oldTriggerSF", &weight_oldTriggerSF);
  t1->SetBranchAddress("weight_globalLeptonTriggerSF",  &weight_globalLeptonTriggerSF);
  t1->SetBranchAddress("weight_bTagSF_DL1r_77",  &weight_bTagSF_DL1r_77);
  t1->SetBranchAddress("weight_jvt",  &weight_jvt);
  t1->SetBranchAddress("eventNumber",  &eventNumber);
  t1->SetBranchAddress("runNumber", &runNumber);
  t1->SetBranchAddress("el_pt", &el_pt);
  t1->SetBranchAddress("el_eta", &el_eta);
  t1->SetBranchAddress("el_phi", &el_phi);
  t1->SetBranchAddress("el_e", &el_e);
  t1->SetBranchAddress("el_charge", &el_charge);
  t1->SetBranchAddress("el_d0sig", &el_d0sig);
  t1->SetBranchAddress("el_delta_z0_sintheta", &el_delta_z0_sintheta);
  t1->SetBranchAddress("mu_pt", &mu_pt);
  t1->SetBranchAddress("mu_eta", &mu_eta);
  t1->SetBranchAddress("mu_phi", &mu_phi);
  t1->SetBranchAddress("mu_e", &mu_e);
  t1->SetBranchAddress("mu_charge", &mu_charge);
  t1->SetBranchAddress("mu_d0sig", &mu_d0sig);
  t1->SetBranchAddress("mu_delta_z0_sintheta", &mu_delta_z0_sintheta);
  t1->SetBranchAddress("jet_pt", &jet_pt);
  t1->SetBranchAddress("jet_eta", &jet_eta);
  t1->SetBranchAddress("jet_phi", &jet_phi);
  t1->SetBranchAddress("jet_e", &jet_e);
  t1->SetBranchAddress("jet_jvt", &jet_jvt);
  t1->SetBranchAddress("jet_isbtagged_DL1r_77", &jet_isbtagged_DL1r_77);
  t1->SetBranchAddress("jet_DL1r", &jet_DL1r);
  t1->SetBranchAddress("met_met", &met_met);
  t1->SetBranchAddress("met_phi", &met_phi);
}

void NewTree(std::string treename, const TString &File, TFile *MCfile){
  MCfile->cd();
  TTree *t1 = new TTree("t1", "");
  TTree *t2 = new TTree("t2", "");
  TTree *t3 = new TTree("t3", "");

  std::string NN_tree = (treename).c_str();

  auto input_file = new TFile(File);
  t1 = dynamic_cast<TTree*> (input_file->Get(treename.c_str()));
  if(treename == "nominal"){
    t2 = dynamic_cast<TTree*> (input_file->Get("truth"));
    t3 = dynamic_cast<TTree*> (input_file->Get("sumWeights"));
  }
  MCfile->cd(); //again why?
  auto out_tree = new TTree(NN_tree.c_str(), "");
  SetBranches(out_tree);

  std::vector<ULong64_t> truth_evt_num;
  std::vector<std::vector<float>>   tr_pt;
  std::vector<std::vector<float>>   tr_eta;
  std::vector<std::vector<float>>   tr_phi;
  std::vector<std::vector<float>>   tr_e;
  std::vector<std::vector<int>>     tr_pdgId;
  std::vector<std::vector<int>>     tr_status;
  // std::vector<float> temp_MC_W_from_t_phi;

  //truth variables
  Int_t           MC_Wdecay2_from_tbar_pdgId;
  Float_t         MC_Wdecay2_from_tbar_pt;
  Float_t         MC_Wdecay2_from_tbar_eta;
  Float_t         MC_Wdecay2_from_tbar_phi;
  Float_t         MC_Wdecay2_from_tbar_m;
  Int_t           MC_Wdecay1_from_t_pdgId;
  Float_t         MC_Wdecay1_from_t_pt;
  Float_t         MC_Wdecay1_from_t_eta;
  Float_t         MC_Wdecay1_from_t_phi;
  Float_t         MC_Wdecay1_from_t_m;
  Int_t           MC_Wdecay2_from_t_pdgId;
  Float_t         MC_Wdecay2_from_t_pt;
  Float_t         MC_Wdecay2_from_t_eta;
  Float_t         MC_Wdecay2_from_t_phi;
  Float_t         MC_Wdecay2_from_t_m;
  Int_t           MC_Wdecay1_from_tbar_pdgId;
  Float_t         MC_Wdecay1_from_tbar_pt;
  Float_t         MC_Wdecay1_from_tbar_eta;
  Float_t         MC_Wdecay1_from_tbar_phi;
  Float_t         MC_Wdecay1_from_tbar_m;
  Float_t         MC_b_from_t_pt;
  Float_t         MC_b_from_t_eta;
  Float_t         MC_b_from_t_phi;
  Float_t         MC_b_from_t_m;
  Float_t         MC_W_from_t_pt;
  Float_t         MC_W_from_t_eta;
  Float_t         MC_W_from_t_phi;
  Float_t         MC_W_from_t_m;
  Float_t         MC_b_from_tbar_pt;
  Float_t         MC_b_from_tbar_eta;
  Float_t         MC_b_from_tbar_phi;
  Float_t         MC_b_from_tbar_m;
  Float_t         MC_W_from_tbar_pt;
  Float_t         MC_W_from_tbar_eta;
  Float_t         MC_W_from_tbar_phi;
  Float_t         MC_W_from_tbar_m;
  Float_t         MC_ttbar_beforeFSR_pt;
  Float_t         MC_ttbar_beforeFSR_eta;
  Float_t         MC_ttbar_beforeFSR_phi;
  Float_t         MC_ttbar_beforeFSR_m;
  Float_t         MC_t_beforeFSR_pt;
  Float_t         MC_t_beforeFSR_eta;
  Float_t         MC_t_beforeFSR_phi;
  Float_t         MC_t_beforeFSR_m;
  Float_t         MC_tbar_beforeFSR_pt;
  Float_t         MC_tbar_beforeFSR_eta;
  Float_t         MC_tbar_beforeFSR_phi;
  Float_t         MC_tbar_beforeFSR_m;


  ULong64_t eventNumber = 0;
  MC_Wdecay2_from_tbar_pdgId = 0;
  MC_Wdecay2_from_tbar_pt = 0;
  MC_Wdecay2_from_tbar_eta = 0;
  MC_Wdecay2_from_tbar_phi = 0;
  MC_Wdecay2_from_tbar_m = 0;
  MC_Wdecay1_from_t_pdgId = 0;
  MC_Wdecay1_from_t_pt = 0;
  MC_Wdecay1_from_t_eta = 0;
  MC_Wdecay1_from_t_phi = 0;
  MC_Wdecay1_from_t_m = 0;
  MC_Wdecay2_from_t_pdgId = 0;
  MC_Wdecay2_from_t_pt = 0;
  MC_Wdecay2_from_t_eta = 0;
  MC_Wdecay2_from_t_phi = 0;
  MC_Wdecay2_from_t_m = 0;
  MC_Wdecay1_from_tbar_pdgId = 0;
  MC_Wdecay1_from_tbar_pt = 0;
  MC_Wdecay1_from_tbar_eta = 0;
  MC_Wdecay1_from_tbar_phi = 0;
  MC_Wdecay1_from_tbar_m = 0;
  MC_b_from_t_pt = 0;
  MC_b_from_t_eta = 0;
  MC_b_from_t_phi = 0;
  MC_b_from_t_m = 0;
  MC_W_from_t_pt = 0;
  MC_W_from_t_eta = 0;
  MC_W_from_t_phi = 0;
  MC_W_from_t_m = 0;
  MC_b_from_tbar_pt = 0;
  MC_b_from_tbar_eta = 0;
  MC_b_from_tbar_phi = 0;
  MC_b_from_tbar_m = 0;
  MC_W_from_tbar_pt = 0;
  MC_W_from_tbar_eta = 0;
  MC_W_from_tbar_phi = 0;
  MC_W_from_tbar_m = 0;
  MC_ttbar_beforeFSR_pt = 0;
  MC_ttbar_beforeFSR_eta = 0;
  MC_ttbar_beforeFSR_phi = 0;
  MC_ttbar_beforeFSR_m = 0;
  MC_t_beforeFSR_pt = 0;
  MC_t_beforeFSR_eta = 0;
  MC_t_beforeFSR_phi = 0;
  MC_t_beforeFSR_m = 0;
  MC_tbar_beforeFSR_pt = 0;
  MC_tbar_beforeFSR_eta = 0;
  MC_tbar_beforeFSR_phi = 0;
  MC_tbar_beforeFSR_m = 0;
  
  
  // nominal variable
  el_pt = 0;
  el_eta = 0;
  el_phi = 0;
  el_e = 0;
  el_charge = 0;
  el_d0sig = 0;
  el_delta_z0_sintheta = 0;
  mu_pt = 0;
  mu_eta = 0;
  mu_phi = 0;
  mu_e = 0;
  mu_charge = 0;
  mu_d0sig = 0;
  mu_delta_z0_sintheta = 0;
  jet_pt = 0;
  jet_eta = 0;
  jet_phi = 0;
  jet_e = 0;
  jet_jvt = 0;
  jet_isbtagged_DL1r_77 = 0;
  jet_DL1r = 0;
  met_met = 0;
  met_phi = 0;
    

    t2->SetBranchAddress("eventNumber", &eventNumber);
    // t2->SetBranchAddress("MC_W_from_t_phi", &MC_W_from_t_phi);
    t2->SetBranchAddress("MC_Wdecay2_from_tbar_pdgId", &MC_Wdecay2_from_tbar_pdgId);
    t2->SetBranchAddress("MC_Wdecay2_from_tbar_eta", &MC_Wdecay2_from_tbar_eta);
    t2->SetBranchAddress("MC_Wdecay2_from_tbar_m", &MC_Wdecay2_from_tbar_m);
    t2->SetBranchAddress("MC_Wdecay2_from_tbar_phi", &MC_Wdecay2_from_tbar_phi);
    t2->SetBranchAddress("MC_Wdecay2_from_tbar_pt", &MC_Wdecay2_from_tbar_pt);
    t2->SetBranchAddress("MC_Wdecay1_from_t_pdgId", &MC_Wdecay1_from_t_pdgId);
    t2->SetBranchAddress("MC_Wdecay1_from_t_m", &MC_Wdecay1_from_t_m);
    t2->SetBranchAddress("MC_Wdecay1_from_t_phi", &MC_Wdecay1_from_t_phi);
    t2->SetBranchAddress("MC_Wdecay1_from_t_eta", &MC_Wdecay1_from_t_eta);
    t2->SetBranchAddress("MC_Wdecay1_from_t_pt", &MC_Wdecay1_from_t_pt);
    t2->SetBranchAddress("MC_Wdecay2_from_t_pdgId", &MC_Wdecay2_from_t_pdgId);
    t2->SetBranchAddress("MC_Wdecay2_from_t_phi", &MC_Wdecay2_from_t_phi);
    t2->SetBranchAddress("MC_Wdecay2_from_t_eta", &MC_Wdecay2_from_t_eta);
    t2->SetBranchAddress("MC_Wdecay2_from_t_m", &MC_Wdecay2_from_t_m);
    t2->SetBranchAddress("MC_Wdecay2_from_t_pt", &MC_Wdecay2_from_t_pt);
    t2->SetBranchAddress("MC_Wdecay1_from_tbar_pdgId", &MC_Wdecay1_from_tbar_pdgId);
    t2->SetBranchAddress("MC_Wdecay1_from_tbar_phi", &MC_Wdecay1_from_tbar_phi);
    t2->SetBranchAddress("MC_Wdecay1_from_tbar_eta", &MC_Wdecay1_from_tbar_eta);
    t2->SetBranchAddress("MC_Wdecay1_from_tbar_pt", &MC_Wdecay1_from_tbar_pt);
    t2->SetBranchAddress("MC_Wdecay1_from_tbar_m", &MC_Wdecay1_from_tbar_m);
    t2->SetBranchAddress("MC_b_from_t_phi", &MC_b_from_t_phi);
    t2->SetBranchAddress("MC_b_from_t_pt", &MC_b_from_t_pt);
    t2->SetBranchAddress("MC_b_from_t_m", &MC_b_from_t_m);
    t2->SetBranchAddress("MC_b_from_t_eta", &MC_b_from_t_eta);
    t2->SetBranchAddress("MC_W_from_t_pt", &MC_W_from_t_pt);
    t2->SetBranchAddress("MC_W_from_t_m", &MC_W_from_t_m);
    t2->SetBranchAddress("MC_W_from_t_eta", &MC_W_from_t_eta);
    t2->SetBranchAddress("MC_W_from_t_phi", &MC_W_from_t_phi);
    t2->SetBranchAddress("MC_b_from_tbar_pt", &MC_b_from_tbar_pt);
    t2->SetBranchAddress("MC_b_from_tbar_phi", &MC_b_from_tbar_phi);
    t2->SetBranchAddress("MC_b_from_tbar_eta", &MC_b_from_tbar_eta);
    t2->SetBranchAddress("MC_b_from_tbar_m", &MC_b_from_tbar_m);
    t2->SetBranchAddress("MC_W_from_tbar_phi", &MC_W_from_tbar_phi);
    t2->SetBranchAddress("MC_W_from_tbar_eta", &MC_W_from_tbar_eta);
    t2->SetBranchAddress("MC_W_from_tbar_pt", &MC_W_from_tbar_pt);
    t2->SetBranchAddress("MC_W_from_tbar_m", &MC_W_from_tbar_m);
    t2->SetBranchAddress("MC_ttbar_beforeFSR_pt", &MC_ttbar_beforeFSR_pt);
    t2->SetBranchAddress("MC_ttbar_beforeFSR_m", &MC_ttbar_beforeFSR_m);
    t2->SetBranchAddress("MC_ttbar_beforeFSR_eta", &MC_ttbar_beforeFSR_eta);
    t2->SetBranchAddress("MC_ttbar_beforeFSR_phi", &MC_ttbar_beforeFSR_phi);
    t2->SetBranchAddress("MC_t_beforeFSR_eta", &MC_t_beforeFSR_eta);
    t2->SetBranchAddress("MC_t_beforeFSR_m", &MC_t_beforeFSR_m);
    t2->SetBranchAddress("MC_t_beforeFSR_phi", &MC_t_beforeFSR_phi);
    t2->SetBranchAddress("MC_t_beforeFSR_pt", &MC_t_beforeFSR_pt);
    t2->SetBranchAddress("MC_tbar_beforeFSR_m", &MC_tbar_beforeFSR_m);
    t2->SetBranchAddress("MC_tbar_beforeFSR_pt", &MC_tbar_beforeFSR_pt);
    t2->SetBranchAddress("MC_tbar_beforeFSR_eta", &MC_tbar_beforeFSR_eta);
    t2->SetBranchAddress("MC_tbar_beforeFSR_phi", &MC_tbar_beforeFSR_phi);

    for (UInt_t iEvent = 0; ; ++iEvent) { //truth event loop starts
      Long64_t ientry = t2->LoadTree(iEvent);
      if (ientry < 0) {
        break;
      }
      t2->GetEntry(iEvent);
      truth_evt_num.push_back(eventNumber);
      
    } //truth event loop ends
  {
    MCfile->cd();
    NominalTree(t1);
    t1->SetBranchAddress("eventNumber", &eventNumber);

    Long64_t lastevent = 0;
    for (UInt_t iEvt = 0; ; ++iEvt) { //nominal event loop starts
      Long64_t ient = t1->LoadTree(iEvt);
      if (ient < 0) {
        break;
      }
      t1->GetEntry(iEvt);
    
      Long64_t truth_sequence_num ;
      if(treename == "nominal"){
        
        //event number match
        bool flag = false;
        //cout<<"Before comparing with truth\n";
        for( UInt_t evt = lastevent ; evt< truth_evt_num.size(); evt++){
          if( eventNumber == truth_evt_num[evt] ){
            flag = true;
            truth_sequence_num = evt;
            lastevent = truth_sequence_num;
          }
        }      
        if( !flag)      continue;
        //cout <<"ch pt 1" <<endl;

        // write variables in nominal tree 
        t_weight_mc             = weight_mc;// eventWeight
        t_weight_pileup         = weight_pileup;
        t_weight_leptonSF       = weight_leptonSF;
        t_weight_oldTriggerSF     = weight_oldTriggerSF;
        t_weight_globalLeptonTriggerSF = weight_globalLeptonTriggerSF;
        t_weight_bTagSF_DL1r_77 = weight_bTagSF_DL1r_77;
        t_weight_jvt            = weight_jvt;
        t_eventNumber           = eventNumber;
        t_runNumber             = runNumber;
        // t_met_phi =met_phi;
        // t_el_pt = el_pt;

        // write variables in truth tree 
        t2->GetEntry(truth_sequence_num);
        // truth
        // t_MC_W_from_t_phi = MC_W_from_t_phi;
        t_MC_Wdecay2_from_tbar_pdgId =  MC_Wdecay2_from_tbar_pdgId;               
        t_MC_Wdecay2_from_tbar_pt    =  MC_Wdecay2_from_tbar_pt   ;                
        t_MC_Wdecay2_from_tbar_eta   =  MC_Wdecay2_from_tbar_eta  ;                
        t_MC_Wdecay2_from_tbar_phi   =  MC_Wdecay2_from_tbar_phi  ;                
        t_MC_Wdecay2_from_tbar_m     =  MC_Wdecay2_from_tbar_m    ;                
        t_MC_Wdecay1_from_t_pdgId    =  MC_Wdecay1_from_t_pdgId   ;                
        t_MC_Wdecay1_from_t_pt       =  MC_Wdecay1_from_t_pt      ;                 
        t_MC_Wdecay1_from_t_eta      =  MC_Wdecay1_from_t_eta     ;                 
        t_MC_Wdecay1_from_t_phi      =  MC_Wdecay1_from_t_phi     ;                 
        t_MC_Wdecay1_from_t_m        = MC_Wdecay1_from_t_m        ;   
        t_MC_Wdecay2_from_t_pdgId    = MC_Wdecay2_from_t_pdgId    ;   
        t_MC_Wdecay2_from_t_pt       = MC_Wdecay2_from_t_pt       ;   
        t_MC_Wdecay2_from_t_eta      = MC_Wdecay2_from_t_eta      ;   
        t_MC_Wdecay2_from_t_phi      = MC_Wdecay2_from_t_phi      ;   
        t_MC_Wdecay2_from_t_m        = MC_Wdecay2_from_t_m        ;   
        t_MC_Wdecay1_from_tbar_pdgId = MC_Wdecay1_from_tbar_pdgId ;   
        t_MC_Wdecay1_from_tbar_pt    = MC_Wdecay1_from_tbar_pt    ;   
        t_MC_Wdecay1_from_tbar_eta   = MC_Wdecay1_from_tbar_eta   ;   
        t_MC_Wdecay1_from_tbar_phi   = MC_Wdecay1_from_tbar_phi   ;   
        t_MC_Wdecay1_from_tbar_m     = MC_Wdecay1_from_tbar_m     ;   
        t_MC_b_from_t_pt         =  MC_b_from_t_pt      ;  
        t_MC_b_from_t_eta        =  MC_b_from_t_eta     ;  
        t_MC_b_from_t_phi        =  MC_b_from_t_phi     ;  
        t_MC_b_from_t_m          =  MC_b_from_t_m       ;  
        t_MC_W_from_t_pt         =  MC_W_from_t_pt      ;  
        t_MC_W_from_t_eta        =  MC_W_from_t_eta     ;  
        t_MC_W_from_t_phi        =  MC_W_from_t_phi     ;  
        t_MC_W_from_t_m          =  MC_W_from_t_m       ;  
        t_MC_b_from_tbar_pt      =  MC_b_from_tbar_pt   ;  
        t_MC_b_from_tbar_eta     =  MC_b_from_tbar_eta  ;  
        t_MC_b_from_tbar_phi     =  MC_b_from_tbar_phi  ;  
        t_MC_b_from_tbar_m       =  MC_b_from_tbar_m      ;  
        t_MC_W_from_tbar_pt      =  MC_W_from_tbar_pt     ;  
        t_MC_W_from_tbar_eta     =  MC_W_from_tbar_eta     ;   
        t_MC_W_from_tbar_phi     =  MC_W_from_tbar_phi     ;   
        t_MC_W_from_tbar_m       =  MC_W_from_tbar_m       ;  
        t_MC_ttbar_beforeFSR_pt  =  MC_ttbar_beforeFSR_pt  ;     
        t_MC_ttbar_beforeFSR_eta =  MC_ttbar_beforeFSR_eta ;       
        t_MC_ttbar_beforeFSR_phi =  MC_ttbar_beforeFSR_phi ;       
        t_MC_ttbar_beforeFSR_m   =  MC_ttbar_beforeFSR_m   ;     
        t_MC_t_beforeFSR_pt      =  MC_t_beforeFSR_pt     ;  
        t_MC_t_beforeFSR_eta     =  MC_t_beforeFSR_eta     ;   
        t_MC_t_beforeFSR_phi     =  MC_t_beforeFSR_phi     ;   
        t_MC_t_beforeFSR_m       =  MC_t_beforeFSR_m      ;  
        t_MC_tbar_beforeFSR_pt   =  MC_tbar_beforeFSR_pt   ;     
        t_MC_tbar_beforeFSR_eta  =  MC_tbar_beforeFSR_eta  ;     
        t_MC_tbar_beforeFSR_phi  =  MC_tbar_beforeFSR_phi  ;     
        t_MC_tbar_beforeFSR_m    =  MC_tbar_beforeFSR_m    ;   
        // write varibles in nominal tree
        t_el_pt       =    el_pt        ;
        t_el_eta      =    el_eta       ;
        t_el_phi      =    el_phi       ;
        t_el_e        =    el_e         ;
        t_el_charge   =    el_charge    ;
        t_el_d0sig    =    el_d0sig     ;
        t_mu_pt       =    mu_pt        ;
        t_mu_eta      =    mu_eta       ;
        t_mu_phi      =    mu_phi       ;
        t_mu_e        =    mu_e         ;
        t_mu_charge   =    mu_charge    ;
        t_mu_d0sig    =    mu_d0sig     ;
        t_jet_pt      =    jet_pt       ;
        t_jet_eta     =    jet_eta      ;
        t_jet_phi     =    jet_phi      ;
        t_jet_e       =    jet_e        ;
        t_jet_jvt     =    jet_jvt      ;
        t_jet_DL1r    =    jet_DL1r     ;
        t_met_met     =    met_met      ;
        t_met_phi     =    met_phi      ;
        t_el_delta_z0_sintheta = el_delta_z0_sintheta     ;
        t_mu_delta_z0_sintheta =  mu_delta_z0_sintheta    ;
        t_jet_isbtagged_DL1r_77 = jet_isbtagged_DL1r_77   ; 


        if (!(iEvt % 1000)){
          cout<< " iEvt " << iEvt<< endl;
          cout<<"time = "<< double(clock() - 0) / CLOCKS_PER_SEC <<endl;
        }
       
        out_tree->Fill();

      }
      
    } // nominal event loop ends
  }
 
  
  t1->SetName(treename.c_str());
  out_tree->Write(NN_tree.c_str());

}




