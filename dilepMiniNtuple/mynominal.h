//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Aug 21 15:14:38 2023 by ROOT version 6.26/04
// from TTree nominal/tree
// found on file: ../user.cgarvey.32744802._000002.output.root
//////////////////////////////////////////////////////////

#ifndef mynominal_h
#define mynominal_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"

class mynominal {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   vector<float>   *mc_generator_weights;
   Float_t         weight_mc;
   Float_t         weight_pileup;
   Float_t         weight_leptonSF;
   Float_t         weight_globalLeptonTriggerSF;
   Float_t         weight_oldTriggerSF;
   Float_t         weight_bTagSF_DL1r_77;
   Float_t         weight_bTagSF_DL1r_Continuous;
   Float_t         weight_jvt;
   Float_t         weight_pileup_UP;
   Float_t         weight_pileup_DOWN;
   Float_t         weight_leptonSF_EL_SF_Trigger_UP;
   Float_t         weight_leptonSF_EL_SF_Trigger_DOWN;
   Float_t         weight_leptonSF_EL_SF_Reco_UP;
   Float_t         weight_leptonSF_EL_SF_Reco_DOWN;
   Float_t         weight_leptonSF_EL_SF_ID_UP;
   Float_t         weight_leptonSF_EL_SF_ID_DOWN;
   Float_t         weight_leptonSF_EL_SF_Isol_UP;
   Float_t         weight_leptonSF_EL_SF_Isol_DOWN;
   Float_t         weight_leptonSF_MU_SF_Trigger_STAT_UP;
   Float_t         weight_leptonSF_MU_SF_Trigger_STAT_DOWN;
   Float_t         weight_leptonSF_MU_SF_Trigger_SYST_UP;
   Float_t         weight_leptonSF_MU_SF_Trigger_SYST_DOWN;
   Float_t         weight_leptonSF_MU_SF_ID_STAT_UP;
   Float_t         weight_leptonSF_MU_SF_ID_STAT_DOWN;
   Float_t         weight_leptonSF_MU_SF_ID_STAT_LOWPT_UP;
   Float_t         weight_leptonSF_MU_SF_ID_STAT_LOWPT_DOWN;
   Float_t         weight_leptonSF_MU_SF_ID_SYST_LOWPT_UP;
   Float_t         weight_leptonSF_MU_SF_ID_SYST_LOWPT_DOWN;
   Float_t         weight_leptonSF_MU_SF_ID_SYST_UP;
   Float_t         weight_leptonSF_MU_SF_ID_SYST_DOWN;
   Float_t         weight_leptonSF_MU_SF_Isol_STAT_UP;
   Float_t         weight_leptonSF_MU_SF_Isol_STAT_DOWN;
   Float_t         weight_leptonSF_MU_SF_Isol_SYST_UP;
   Float_t         weight_leptonSF_MU_SF_Isol_SYST_DOWN;
   Float_t         weight_leptonSF_MU_SF_TTVA_STAT_UP;
   Float_t         weight_leptonSF_MU_SF_TTVA_STAT_DOWN;
   Float_t         weight_leptonSF_MU_SF_TTVA_SYST_UP;
   Float_t         weight_leptonSF_MU_SF_TTVA_SYST_DOWN;
   Float_t         weight_globalLeptonTriggerSF_EL_Trigger_UP;
   Float_t         weight_globalLeptonTriggerSF_EL_Trigger_DOWN;
   Float_t         weight_globalLeptonTriggerSF_MU_Trigger_STAT_UP;
   Float_t         weight_globalLeptonTriggerSF_MU_Trigger_STAT_DOWN;
   Float_t         weight_globalLeptonTriggerSF_MU_Trigger_SYST_UP;
   Float_t         weight_globalLeptonTriggerSF_MU_Trigger_SYST_DOWN;
   Float_t         weight_oldTriggerSF_EL_Trigger_UP;
   Float_t         weight_oldTriggerSF_EL_Trigger_DOWN;
   Float_t         weight_oldTriggerSF_MU_Trigger_STAT_UP;
   Float_t         weight_oldTriggerSF_MU_Trigger_STAT_DOWN;
   Float_t         weight_oldTriggerSF_MU_Trigger_SYST_UP;
   Float_t         weight_oldTriggerSF_MU_Trigger_SYST_DOWN;
   Float_t         weight_indiv_SF_EL_Reco;
   Float_t         weight_indiv_SF_EL_Reco_UP;
   Float_t         weight_indiv_SF_EL_Reco_DOWN;
   Float_t         weight_indiv_SF_EL_ID;
   Float_t         weight_indiv_SF_EL_ID_UP;
   Float_t         weight_indiv_SF_EL_ID_DOWN;
   Float_t         weight_indiv_SF_EL_Isol;
   Float_t         weight_indiv_SF_EL_Isol_UP;
   Float_t         weight_indiv_SF_EL_Isol_DOWN;
   Float_t         weight_indiv_SF_EL_ChargeID;
   Float_t         weight_indiv_SF_EL_ChargeID_UP;
   Float_t         weight_indiv_SF_EL_ChargeID_DOWN;
   Float_t         weight_indiv_SF_EL_ChargeMisID;
   Float_t         weight_indiv_SF_EL_ChargeMisID_STAT_UP;
   Float_t         weight_indiv_SF_EL_ChargeMisID_STAT_DOWN;
   Float_t         weight_indiv_SF_EL_ChargeMisID_SYST_UP;
   Float_t         weight_indiv_SF_EL_ChargeMisID_SYST_DOWN;
   Float_t         weight_indiv_SF_MU_ID;
   Float_t         weight_indiv_SF_MU_ID_STAT_UP;
   Float_t         weight_indiv_SF_MU_ID_STAT_DOWN;
   Float_t         weight_indiv_SF_MU_ID_SYST_UP;
   Float_t         weight_indiv_SF_MU_ID_SYST_DOWN;
   Float_t         weight_indiv_SF_MU_ID_STAT_LOWPT_UP;
   Float_t         weight_indiv_SF_MU_ID_STAT_LOWPT_DOWN;
   Float_t         weight_indiv_SF_MU_ID_SYST_LOWPT_UP;
   Float_t         weight_indiv_SF_MU_ID_SYST_LOWPT_DOWN;
   Float_t         weight_indiv_SF_MU_Isol;
   Float_t         weight_indiv_SF_MU_Isol_STAT_UP;
   Float_t         weight_indiv_SF_MU_Isol_STAT_DOWN;
   Float_t         weight_indiv_SF_MU_Isol_SYST_UP;
   Float_t         weight_indiv_SF_MU_Isol_SYST_DOWN;
   Float_t         weight_indiv_SF_MU_TTVA;
   Float_t         weight_indiv_SF_MU_TTVA_STAT_UP;
   Float_t         weight_indiv_SF_MU_TTVA_STAT_DOWN;
   Float_t         weight_indiv_SF_MU_TTVA_SYST_UP;
   Float_t         weight_indiv_SF_MU_TTVA_SYST_DOWN;
   Float_t         weight_jvt_UP;
   Float_t         weight_jvt_DOWN;
   vector<float>   *weight_bTagSF_DL1r_77_eigenvars_B_up;
   vector<float>   *weight_bTagSF_DL1r_77_eigenvars_C_up;
   vector<float>   *weight_bTagSF_DL1r_77_eigenvars_Light_up;
   vector<float>   *weight_bTagSF_DL1r_77_eigenvars_B_down;
   vector<float>   *weight_bTagSF_DL1r_77_eigenvars_C_down;
   vector<float>   *weight_bTagSF_DL1r_77_eigenvars_Light_down;
   Float_t         weight_bTagSF_DL1r_77_extrapolation_up;
   Float_t         weight_bTagSF_DL1r_77_extrapolation_down;
   Float_t         weight_bTagSF_DL1r_77_extrapolation_from_charm_up;
   Float_t         weight_bTagSF_DL1r_77_extrapolation_from_charm_down;
   vector<float>   *weight_bTagSF_DL1r_Continuous_eigenvars_B_up;
   vector<float>   *weight_bTagSF_DL1r_Continuous_eigenvars_C_up;
   vector<float>   *weight_bTagSF_DL1r_Continuous_eigenvars_Light_up;
   vector<float>   *weight_bTagSF_DL1r_Continuous_eigenvars_B_down;
   vector<float>   *weight_bTagSF_DL1r_Continuous_eigenvars_C_down;
   vector<float>   *weight_bTagSF_DL1r_Continuous_eigenvars_Light_down;
   ULong64_t       eventNumber;
   UInt_t          runNumber;
   UInt_t          randomRunNumber;
   UInt_t          mcChannelNumber;
   Float_t         mu;
   Float_t         mu_actual;
   UInt_t          backgroundFlags;
   UInt_t          hasBadMuon;
   vector<float>   *el_pt;
   vector<float>   *el_eta;
   vector<float>   *el_cl_eta;
   vector<float>   *el_phi;
   vector<float>   *el_e;
   vector<float>   *el_charge;
   vector<float>   *el_topoetcone20;
   vector<float>   *el_ptvarcone20;
   vector<char>    *el_CF;
   vector<float>   *el_d0sig;
   vector<float>   *el_delta_z0_sintheta;
   vector<int>     *el_true_type;
   vector<int>     *el_true_origin;
   vector<int>     *el_true_firstEgMotherTruthType;
   vector<int>     *el_true_firstEgMotherTruthOrigin;
   vector<int>     *el_true_firstEgMotherPdgId;
   vector<int>     *el_true_IFFclass;
   vector<char>    *el_true_isPrompt;
   vector<char>    *el_true_isChargeFl;
   vector<float>   *mu_pt;
   vector<float>   *mu_eta;
   vector<float>   *mu_phi;
   vector<float>   *mu_e;
   vector<float>   *mu_charge;
   vector<float>   *mu_topoetcone20;
   vector<float>   *mu_ptvarcone30;
   vector<float>   *mu_d0sig;
   vector<float>   *mu_delta_z0_sintheta;
   vector<int>     *mu_true_type;
   vector<int>     *mu_true_origin;
   vector<int>     *mu_true_IFFclass;
   vector<char>    *mu_true_isPrompt;
   vector<float>   *jet_pt;
   vector<float>   *jet_eta;
   vector<float>   *jet_phi;
   vector<float>   *jet_e;
   vector<float>   *jet_jvt;
   vector<int>     *jet_truthflav;
   vector<int>     *jet_truthPartonLabel;
   vector<char>    *jet_isTrueHS;
   vector<int>     *jet_truthflavExtended;
   vector<char>    *jet_isbtagged_DL1r_77;
   vector<int>     *jet_tagWeightBin_DL1r_Continuous;
   vector<float>   *jet_DL1r;
   vector<float>   *jet_DL1r_pb;
   vector<float>   *jet_DL1r_pc;
   vector<float>   *jet_DL1r_pu;
   Float_t         met_met;
   Float_t         met_phi;
   Int_t           emu_2015;
   Int_t           emu_2016;
   Int_t           emu_2017;
   Int_t           emu_2018;
   Int_t           ee_2015;
   Int_t           ee_2016;
   Int_t           ee_2017;
   Int_t           ee_2018;
   Int_t           mumu_2015;
   Int_t           mumu_2016;
   Int_t           mumu_2017;
   Int_t           mumu_2018;
   Char_t          HLT_mu26_ivarmedium;
   Char_t          HLT_e140_lhloose_nod0;
   Char_t          HLT_mu50;
   Char_t          HLT_e17_lhloose_nod0_mu14;
   Char_t          HLT_e26_lhtight_nod0_ivarloose;
   Char_t          HLT_2e24_lhvloose_nod0;
   Char_t          HLT_e60_lhmedium_nod0;
   Char_t          HLT_mu22_mu8noL1;
   vector<char>    *el_trigMatch_HLT_e60_lhmedium_nod0;
   vector<char>    *el_trigMatch_HLT_e26_lhtight_nod0_ivarloose;
   vector<char>    *el_trigMatch_HLT_e140_lhloose_nod0;
   vector<char>    *el_trigMatch_HLT_e17_lhloose_nod0_mu14;
   vector<char>    *mu_trigMatch_HLT_mu50;
   vector<char>    *mu_trigMatch_HLT_mu22_mu8noL1;
   vector<char>    *mu_trigMatch_HLT_mu26_ivarmedium;

   // List of branches
   TBranch        *b_mc_generator_weights;   //!
   TBranch        *b_weight_mc;   //!
   TBranch        *b_weight_pileup;   //!
   TBranch        *b_weight_leptonSF;   //!
   TBranch        *b_weight_globalLeptonTriggerSF;   //!
   TBranch        *b_weight_oldTriggerSF;   //!
   TBranch        *b_weight_bTagSF_DL1r_77;   //!
   TBranch        *b_weight_bTagSF_DL1r_Continuous;   //!
   TBranch        *b_weight_jvt;   //!
   TBranch        *b_weight_pileup_UP;   //!
   TBranch        *b_weight_pileup_DOWN;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Trigger_UP;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Trigger_DOWN;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Reco_UP;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Reco_DOWN;   //!
   TBranch        *b_weight_leptonSF_EL_SF_ID_UP;   //!
   TBranch        *b_weight_leptonSF_EL_SF_ID_DOWN;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Isol_UP;   //!
   TBranch        *b_weight_leptonSF_EL_SF_Isol_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Trigger_STAT_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Trigger_STAT_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Trigger_SYST_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Trigger_SYST_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_STAT_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_STAT_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_STAT_LOWPT_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_STAT_LOWPT_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_SYST_LOWPT_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_SYST_LOWPT_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_SYST_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_ID_SYST_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Isol_STAT_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Isol_STAT_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Isol_SYST_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_Isol_SYST_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_TTVA_STAT_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_TTVA_STAT_DOWN;   //!
   TBranch        *b_weight_leptonSF_MU_SF_TTVA_SYST_UP;   //!
   TBranch        *b_weight_leptonSF_MU_SF_TTVA_SYST_DOWN;   //!
   TBranch        *b_weight_globalLeptonTriggerSF_EL_Trigger_UP;   //!
   TBranch        *b_weight_globalLeptonTriggerSF_EL_Trigger_DOWN;   //!
   TBranch        *b_weight_globalLeptonTriggerSF_MU_Trigger_STAT_UP;   //!
   TBranch        *b_weight_globalLeptonTriggerSF_MU_Trigger_STAT_DOWN;   //!
   TBranch        *b_weight_globalLeptonTriggerSF_MU_Trigger_SYST_UP;   //!
   TBranch        *b_weight_globalLeptonTriggerSF_MU_Trigger_SYST_DOWN;   //!
   TBranch        *b_weight_oldTriggerSF_EL_Trigger_UP;   //!
   TBranch        *b_weight_oldTriggerSF_EL_Trigger_DOWN;   //!
   TBranch        *b_weight_oldTriggerSF_MU_Trigger_STAT_UP;   //!
   TBranch        *b_weight_oldTriggerSF_MU_Trigger_STAT_DOWN;   //!
   TBranch        *b_weight_oldTriggerSF_MU_Trigger_SYST_UP;   //!
   TBranch        *b_weight_oldTriggerSF_MU_Trigger_SYST_DOWN;   //!
   TBranch        *b_weight_indiv_SF_EL_Reco;   //!
   TBranch        *b_weight_indiv_SF_EL_Reco_UP;   //!
   TBranch        *b_weight_indiv_SF_EL_Reco_DOWN;   //!
   TBranch        *b_weight_indiv_SF_EL_ID;   //!
   TBranch        *b_weight_indiv_SF_EL_ID_UP;   //!
   TBranch        *b_weight_indiv_SF_EL_ID_DOWN;   //!
   TBranch        *b_weight_indiv_SF_EL_Isol;   //!
   TBranch        *b_weight_indiv_SF_EL_Isol_UP;   //!
   TBranch        *b_weight_indiv_SF_EL_Isol_DOWN;   //!
   TBranch        *b_weight_indiv_SF_EL_ChargeID;   //!
   TBranch        *b_weight_indiv_SF_EL_ChargeID_UP;   //!
   TBranch        *b_weight_indiv_SF_EL_ChargeID_DOWN;   //!
   TBranch        *b_weight_indiv_SF_EL_ChargeMisID;   //!
   TBranch        *b_weight_indiv_SF_EL_ChargeMisID_STAT_UP;   //!
   TBranch        *b_weight_indiv_SF_EL_ChargeMisID_STAT_DOWN;   //!
   TBranch        *b_weight_indiv_SF_EL_ChargeMisID_SYST_UP;   //!
   TBranch        *b_weight_indiv_SF_EL_ChargeMisID_SYST_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_ID;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_STAT_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_STAT_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_SYST_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_SYST_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_STAT_LOWPT_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_STAT_LOWPT_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_SYST_LOWPT_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_ID_SYST_LOWPT_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_Isol;   //!
   TBranch        *b_weight_indiv_SF_MU_Isol_STAT_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_Isol_STAT_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_Isol_SYST_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_Isol_SYST_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_TTVA;   //!
   TBranch        *b_weight_indiv_SF_MU_TTVA_STAT_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_TTVA_STAT_DOWN;   //!
   TBranch        *b_weight_indiv_SF_MU_TTVA_SYST_UP;   //!
   TBranch        *b_weight_indiv_SF_MU_TTVA_SYST_DOWN;   //!
   TBranch        *b_weight_jvt_UP;   //!
   TBranch        *b_weight_jvt_DOWN;   //!
   TBranch        *b_weight_bTagSF_DL1r_77_eigenvars_B_up;   //!
   TBranch        *b_weight_bTagSF_DL1r_77_eigenvars_C_up;   //!
   TBranch        *b_weight_bTagSF_DL1r_77_eigenvars_Light_up;   //!
   TBranch        *b_weight_bTagSF_DL1r_77_eigenvars_B_down;   //!
   TBranch        *b_weight_bTagSF_DL1r_77_eigenvars_C_down;   //!
   TBranch        *b_weight_bTagSF_DL1r_77_eigenvars_Light_down;   //!
   TBranch        *b_weight_bTagSF_DL1r_77_extrapolation_up;   //!
   TBranch        *b_weight_bTagSF_DL1r_77_extrapolation_down;   //!
   TBranch        *b_weight_bTagSF_DL1r_77_extrapolation_from_charm_up;   //!
   TBranch        *b_weight_bTagSF_DL1r_77_extrapolation_from_charm_down;   //!
   TBranch        *b_weight_bTagSF_DL1r_Continuous_eigenvars_B_up;   //!
   TBranch        *b_weight_bTagSF_DL1r_Continuous_eigenvars_C_up;   //!
   TBranch        *b_weight_bTagSF_DL1r_Continuous_eigenvars_Light_up;   //!
   TBranch        *b_weight_bTagSF_DL1r_Continuous_eigenvars_B_down;   //!
   TBranch        *b_weight_bTagSF_DL1r_Continuous_eigenvars_C_down;   //!
   TBranch        *b_weight_bTagSF_DL1r_Continuous_eigenvars_Light_down;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_randomRunNumber;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_mu;   //!
   TBranch        *b_mu_actual;   //!
   TBranch        *b_backgroundFlags;   //!
   TBranch        *b_hasBadMuon;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_cl_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_e;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_topoetcone20;   //!
   TBranch        *b_el_ptvarcone20;   //!
   TBranch        *b_el_CF;   //!
   TBranch        *b_el_d0sig;   //!
   TBranch        *b_el_delta_z0_sintheta;   //!
   TBranch        *b_el_true_type;   //!
   TBranch        *b_el_true_origin;   //!
   TBranch        *b_el_true_firstEgMotherTruthType;   //!
   TBranch        *b_el_true_firstEgMotherTruthOrigin;   //!
   TBranch        *b_el_true_firstEgMotherPdgId;   //!
   TBranch        *b_el_true_IFFclass;   //!
   TBranch        *b_el_true_isPrompt;   //!
   TBranch        *b_el_true_isChargeFl;   //!
   TBranch        *b_mu_pt;   //!
   TBranch        *b_mu_eta;   //!
   TBranch        *b_mu_phi;   //!
   TBranch        *b_mu_e;   //!
   TBranch        *b_mu_charge;   //!
   TBranch        *b_mu_topoetcone20;   //!
   TBranch        *b_mu_ptvarcone30;   //!
   TBranch        *b_mu_d0sig;   //!
   TBranch        *b_mu_delta_z0_sintheta;   //!
   TBranch        *b_mu_true_type;   //!
   TBranch        *b_mu_true_origin;   //!
   TBranch        *b_mu_true_IFFclass;   //!
   TBranch        *b_mu_true_isPrompt;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_jet_e;   //!
   TBranch        *b_jet_jvt;   //!
   TBranch        *b_jet_truthflav;   //!
   TBranch        *b_jet_truthPartonLabel;   //!
   TBranch        *b_jet_isTrueHS;   //!
   TBranch        *b_jet_truthflavExtended;   //!
   TBranch        *b_jet_isbtagged_DL1r_77;   //!
   TBranch        *b_jet_tagWeightBin_DL1r_Continuous;   //!
   TBranch        *b_jet_DL1r;   //!
   TBranch        *b_jet_DL1r_pb;   //!
   TBranch        *b_jet_DL1r_pc;   //!
   TBranch        *b_jet_DL1r_pu;   //!
   TBranch        *b_met_met;   //!
   TBranch        *b_met_phi;   //!
   TBranch        *b_emu_2015;   //!
   TBranch        *b_emu_2016;   //!
   TBranch        *b_emu_2017;   //!
   TBranch        *b_emu_2018;   //!
   TBranch        *b_ee_2015;   //!
   TBranch        *b_ee_2016;   //!
   TBranch        *b_ee_2017;   //!
   TBranch        *b_ee_2018;   //!
   TBranch        *b_mumu_2015;   //!
   TBranch        *b_mumu_2016;   //!
   TBranch        *b_mumu_2017;   //!
   TBranch        *b_mumu_2018;   //!
   TBranch        *b_HLT_mu26_ivarmedium;   //!
   TBranch        *b_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_HLT_mu50;   //!
   TBranch        *b_HLT_e17_lhloose_nod0_mu14;   //!
   TBranch        *b_HLT_e26_lhtight_nod0_ivarloose;   //!
   TBranch        *b_HLT_2e24_lhvloose_nod0;   //!
   TBranch        *b_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_HLT_mu22_mu8noL1;   //!
   TBranch        *b_el_trigMatch_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_el_trigMatch_HLT_e26_lhtight_nod0_ivarloose;   //!
   TBranch        *b_el_trigMatch_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_el_trigMatch_HLT_e17_lhloose_nod0_mu14;   //!
   TBranch        *b_mu_trigMatch_HLT_mu50;   //!
   TBranch        *b_mu_trigMatch_HLT_mu22_mu8noL1;   //!
   TBranch        *b_mu_trigMatch_HLT_mu26_ivarmedium;   //!

   mynominal(TTree *tree=0);
   virtual ~mynominal();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef mynominal_cxx
mynominal::mynominal(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../user.cgarvey.32744802._000002.output.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../user.cgarvey.32744802._000002.output.root");
      }
      f->GetObject("nominal",tree);

   }
   Init(tree);
}

mynominal::~mynominal()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t mynominal::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t mynominal::LoadTree(Long64_t entry)
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

void mynominal::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   mc_generator_weights = 0;
   weight_bTagSF_DL1r_77_eigenvars_B_up = 0;
   weight_bTagSF_DL1r_77_eigenvars_C_up = 0;
   weight_bTagSF_DL1r_77_eigenvars_Light_up = 0;
   weight_bTagSF_DL1r_77_eigenvars_B_down = 0;
   weight_bTagSF_DL1r_77_eigenvars_C_down = 0;
   weight_bTagSF_DL1r_77_eigenvars_Light_down = 0;
   weight_bTagSF_DL1r_Continuous_eigenvars_B_up = 0;
   weight_bTagSF_DL1r_Continuous_eigenvars_C_up = 0;
   weight_bTagSF_DL1r_Continuous_eigenvars_Light_up = 0;
   weight_bTagSF_DL1r_Continuous_eigenvars_B_down = 0;
   weight_bTagSF_DL1r_Continuous_eigenvars_C_down = 0;
   weight_bTagSF_DL1r_Continuous_eigenvars_Light_down = 0;
   el_pt = 0;
   el_eta = 0;
   el_cl_eta = 0;
   el_phi = 0;
   el_e = 0;
   el_charge = 0;
   el_topoetcone20 = 0;
   el_ptvarcone20 = 0;
   el_CF = 0;
   el_d0sig = 0;
   el_delta_z0_sintheta = 0;
   el_true_type = 0;
   el_true_origin = 0;
   el_true_firstEgMotherTruthType = 0;
   el_true_firstEgMotherTruthOrigin = 0;
   el_true_firstEgMotherPdgId = 0;
   el_true_IFFclass = 0;
   el_true_isPrompt = 0;
   el_true_isChargeFl = 0;
   mu_pt = 0;
   mu_eta = 0;
   mu_phi = 0;
   mu_e = 0;
   mu_charge = 0;
   mu_topoetcone20 = 0;
   mu_ptvarcone30 = 0;
   mu_d0sig = 0;
   mu_delta_z0_sintheta = 0;
   mu_true_type = 0;
   mu_true_origin = 0;
   mu_true_IFFclass = 0;
   mu_true_isPrompt = 0;
   jet_pt = 0;
   jet_eta = 0;
   jet_phi = 0;
   jet_e = 0;
   jet_jvt = 0;
   jet_truthflav = 0;
   jet_truthPartonLabel = 0;
   jet_isTrueHS = 0;
   jet_truthflavExtended = 0;
   jet_isbtagged_DL1r_77 = 0;
   jet_tagWeightBin_DL1r_Continuous = 0;
   jet_DL1r = 0;
   jet_DL1r_pb = 0;
   jet_DL1r_pc = 0;
   jet_DL1r_pu = 0;
   el_trigMatch_HLT_e60_lhmedium_nod0 = 0;
   el_trigMatch_HLT_e26_lhtight_nod0_ivarloose = 0;
   el_trigMatch_HLT_e140_lhloose_nod0 = 0;
   el_trigMatch_HLT_e17_lhloose_nod0_mu14 = 0;
   mu_trigMatch_HLT_mu50 = 0;
   mu_trigMatch_HLT_mu22_mu8noL1 = 0;
   mu_trigMatch_HLT_mu26_ivarmedium = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("mc_generator_weights", &mc_generator_weights, &b_mc_generator_weights);
   fChain->SetBranchAddress("weight_mc", &weight_mc, &b_weight_mc);
   fChain->SetBranchAddress("weight_pileup", &weight_pileup, &b_weight_pileup);
   fChain->SetBranchAddress("weight_leptonSF", &weight_leptonSF, &b_weight_leptonSF);
   fChain->SetBranchAddress("weight_globalLeptonTriggerSF", &weight_globalLeptonTriggerSF, &b_weight_globalLeptonTriggerSF);
   fChain->SetBranchAddress("weight_oldTriggerSF", &weight_oldTriggerSF, &b_weight_oldTriggerSF);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77", &weight_bTagSF_DL1r_77, &b_weight_bTagSF_DL1r_77);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_Continuous", &weight_bTagSF_DL1r_Continuous, &b_weight_bTagSF_DL1r_Continuous);
   fChain->SetBranchAddress("weight_jvt", &weight_jvt, &b_weight_jvt);
   fChain->SetBranchAddress("weight_pileup_UP", &weight_pileup_UP, &b_weight_pileup_UP);
   fChain->SetBranchAddress("weight_pileup_DOWN", &weight_pileup_DOWN, &b_weight_pileup_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_EL_SF_Trigger_UP", &weight_leptonSF_EL_SF_Trigger_UP, &b_weight_leptonSF_EL_SF_Trigger_UP);
   fChain->SetBranchAddress("weight_leptonSF_EL_SF_Trigger_DOWN", &weight_leptonSF_EL_SF_Trigger_DOWN, &b_weight_leptonSF_EL_SF_Trigger_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_EL_SF_Reco_UP", &weight_leptonSF_EL_SF_Reco_UP, &b_weight_leptonSF_EL_SF_Reco_UP);
   fChain->SetBranchAddress("weight_leptonSF_EL_SF_Reco_DOWN", &weight_leptonSF_EL_SF_Reco_DOWN, &b_weight_leptonSF_EL_SF_Reco_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_EL_SF_ID_UP", &weight_leptonSF_EL_SF_ID_UP, &b_weight_leptonSF_EL_SF_ID_UP);
   fChain->SetBranchAddress("weight_leptonSF_EL_SF_ID_DOWN", &weight_leptonSF_EL_SF_ID_DOWN, &b_weight_leptonSF_EL_SF_ID_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_EL_SF_Isol_UP", &weight_leptonSF_EL_SF_Isol_UP, &b_weight_leptonSF_EL_SF_Isol_UP);
   fChain->SetBranchAddress("weight_leptonSF_EL_SF_Isol_DOWN", &weight_leptonSF_EL_SF_Isol_DOWN, &b_weight_leptonSF_EL_SF_Isol_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_Trigger_STAT_UP", &weight_leptonSF_MU_SF_Trigger_STAT_UP, &b_weight_leptonSF_MU_SF_Trigger_STAT_UP);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_Trigger_STAT_DOWN", &weight_leptonSF_MU_SF_Trigger_STAT_DOWN, &b_weight_leptonSF_MU_SF_Trigger_STAT_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_Trigger_SYST_UP", &weight_leptonSF_MU_SF_Trigger_SYST_UP, &b_weight_leptonSF_MU_SF_Trigger_SYST_UP);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_Trigger_SYST_DOWN", &weight_leptonSF_MU_SF_Trigger_SYST_DOWN, &b_weight_leptonSF_MU_SF_Trigger_SYST_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_ID_STAT_UP", &weight_leptonSF_MU_SF_ID_STAT_UP, &b_weight_leptonSF_MU_SF_ID_STAT_UP);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_ID_STAT_DOWN", &weight_leptonSF_MU_SF_ID_STAT_DOWN, &b_weight_leptonSF_MU_SF_ID_STAT_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_ID_STAT_LOWPT_UP", &weight_leptonSF_MU_SF_ID_STAT_LOWPT_UP, &b_weight_leptonSF_MU_SF_ID_STAT_LOWPT_UP);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_ID_STAT_LOWPT_DOWN", &weight_leptonSF_MU_SF_ID_STAT_LOWPT_DOWN, &b_weight_leptonSF_MU_SF_ID_STAT_LOWPT_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_ID_SYST_LOWPT_UP", &weight_leptonSF_MU_SF_ID_SYST_LOWPT_UP, &b_weight_leptonSF_MU_SF_ID_SYST_LOWPT_UP);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_ID_SYST_LOWPT_DOWN", &weight_leptonSF_MU_SF_ID_SYST_LOWPT_DOWN, &b_weight_leptonSF_MU_SF_ID_SYST_LOWPT_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_ID_SYST_UP", &weight_leptonSF_MU_SF_ID_SYST_UP, &b_weight_leptonSF_MU_SF_ID_SYST_UP);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_ID_SYST_DOWN", &weight_leptonSF_MU_SF_ID_SYST_DOWN, &b_weight_leptonSF_MU_SF_ID_SYST_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_Isol_STAT_UP", &weight_leptonSF_MU_SF_Isol_STAT_UP, &b_weight_leptonSF_MU_SF_Isol_STAT_UP);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_Isol_STAT_DOWN", &weight_leptonSF_MU_SF_Isol_STAT_DOWN, &b_weight_leptonSF_MU_SF_Isol_STAT_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_Isol_SYST_UP", &weight_leptonSF_MU_SF_Isol_SYST_UP, &b_weight_leptonSF_MU_SF_Isol_SYST_UP);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_Isol_SYST_DOWN", &weight_leptonSF_MU_SF_Isol_SYST_DOWN, &b_weight_leptonSF_MU_SF_Isol_SYST_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_TTVA_STAT_UP", &weight_leptonSF_MU_SF_TTVA_STAT_UP, &b_weight_leptonSF_MU_SF_TTVA_STAT_UP);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_TTVA_STAT_DOWN", &weight_leptonSF_MU_SF_TTVA_STAT_DOWN, &b_weight_leptonSF_MU_SF_TTVA_STAT_DOWN);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_TTVA_SYST_UP", &weight_leptonSF_MU_SF_TTVA_SYST_UP, &b_weight_leptonSF_MU_SF_TTVA_SYST_UP);
   fChain->SetBranchAddress("weight_leptonSF_MU_SF_TTVA_SYST_DOWN", &weight_leptonSF_MU_SF_TTVA_SYST_DOWN, &b_weight_leptonSF_MU_SF_TTVA_SYST_DOWN);
   fChain->SetBranchAddress("weight_globalLeptonTriggerSF_EL_Trigger_UP", &weight_globalLeptonTriggerSF_EL_Trigger_UP, &b_weight_globalLeptonTriggerSF_EL_Trigger_UP);
   fChain->SetBranchAddress("weight_globalLeptonTriggerSF_EL_Trigger_DOWN", &weight_globalLeptonTriggerSF_EL_Trigger_DOWN, &b_weight_globalLeptonTriggerSF_EL_Trigger_DOWN);
   fChain->SetBranchAddress("weight_globalLeptonTriggerSF_MU_Trigger_STAT_UP", &weight_globalLeptonTriggerSF_MU_Trigger_STAT_UP, &b_weight_globalLeptonTriggerSF_MU_Trigger_STAT_UP);
   fChain->SetBranchAddress("weight_globalLeptonTriggerSF_MU_Trigger_STAT_DOWN", &weight_globalLeptonTriggerSF_MU_Trigger_STAT_DOWN, &b_weight_globalLeptonTriggerSF_MU_Trigger_STAT_DOWN);
   fChain->SetBranchAddress("weight_globalLeptonTriggerSF_MU_Trigger_SYST_UP", &weight_globalLeptonTriggerSF_MU_Trigger_SYST_UP, &b_weight_globalLeptonTriggerSF_MU_Trigger_SYST_UP);
   fChain->SetBranchAddress("weight_globalLeptonTriggerSF_MU_Trigger_SYST_DOWN", &weight_globalLeptonTriggerSF_MU_Trigger_SYST_DOWN, &b_weight_globalLeptonTriggerSF_MU_Trigger_SYST_DOWN);
   fChain->SetBranchAddress("weight_oldTriggerSF_EL_Trigger_UP", &weight_oldTriggerSF_EL_Trigger_UP, &b_weight_oldTriggerSF_EL_Trigger_UP);
   fChain->SetBranchAddress("weight_oldTriggerSF_EL_Trigger_DOWN", &weight_oldTriggerSF_EL_Trigger_DOWN, &b_weight_oldTriggerSF_EL_Trigger_DOWN);
   fChain->SetBranchAddress("weight_oldTriggerSF_MU_Trigger_STAT_UP", &weight_oldTriggerSF_MU_Trigger_STAT_UP, &b_weight_oldTriggerSF_MU_Trigger_STAT_UP);
   fChain->SetBranchAddress("weight_oldTriggerSF_MU_Trigger_STAT_DOWN", &weight_oldTriggerSF_MU_Trigger_STAT_DOWN, &b_weight_oldTriggerSF_MU_Trigger_STAT_DOWN);
   fChain->SetBranchAddress("weight_oldTriggerSF_MU_Trigger_SYST_UP", &weight_oldTriggerSF_MU_Trigger_SYST_UP, &b_weight_oldTriggerSF_MU_Trigger_SYST_UP);
   fChain->SetBranchAddress("weight_oldTriggerSF_MU_Trigger_SYST_DOWN", &weight_oldTriggerSF_MU_Trigger_SYST_DOWN, &b_weight_oldTriggerSF_MU_Trigger_SYST_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_EL_Reco", &weight_indiv_SF_EL_Reco, &b_weight_indiv_SF_EL_Reco);
   fChain->SetBranchAddress("weight_indiv_SF_EL_Reco_UP", &weight_indiv_SF_EL_Reco_UP, &b_weight_indiv_SF_EL_Reco_UP);
   fChain->SetBranchAddress("weight_indiv_SF_EL_Reco_DOWN", &weight_indiv_SF_EL_Reco_DOWN, &b_weight_indiv_SF_EL_Reco_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ID", &weight_indiv_SF_EL_ID, &b_weight_indiv_SF_EL_ID);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ID_UP", &weight_indiv_SF_EL_ID_UP, &b_weight_indiv_SF_EL_ID_UP);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ID_DOWN", &weight_indiv_SF_EL_ID_DOWN, &b_weight_indiv_SF_EL_ID_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_EL_Isol", &weight_indiv_SF_EL_Isol, &b_weight_indiv_SF_EL_Isol);
   fChain->SetBranchAddress("weight_indiv_SF_EL_Isol_UP", &weight_indiv_SF_EL_Isol_UP, &b_weight_indiv_SF_EL_Isol_UP);
   fChain->SetBranchAddress("weight_indiv_SF_EL_Isol_DOWN", &weight_indiv_SF_EL_Isol_DOWN, &b_weight_indiv_SF_EL_Isol_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ChargeID", &weight_indiv_SF_EL_ChargeID, &b_weight_indiv_SF_EL_ChargeID);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ChargeID_UP", &weight_indiv_SF_EL_ChargeID_UP, &b_weight_indiv_SF_EL_ChargeID_UP);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ChargeID_DOWN", &weight_indiv_SF_EL_ChargeID_DOWN, &b_weight_indiv_SF_EL_ChargeID_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ChargeMisID", &weight_indiv_SF_EL_ChargeMisID, &b_weight_indiv_SF_EL_ChargeMisID);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ChargeMisID_STAT_UP", &weight_indiv_SF_EL_ChargeMisID_STAT_UP, &b_weight_indiv_SF_EL_ChargeMisID_STAT_UP);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ChargeMisID_STAT_DOWN", &weight_indiv_SF_EL_ChargeMisID_STAT_DOWN, &b_weight_indiv_SF_EL_ChargeMisID_STAT_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ChargeMisID_SYST_UP", &weight_indiv_SF_EL_ChargeMisID_SYST_UP, &b_weight_indiv_SF_EL_ChargeMisID_SYST_UP);
   fChain->SetBranchAddress("weight_indiv_SF_EL_ChargeMisID_SYST_DOWN", &weight_indiv_SF_EL_ChargeMisID_SYST_DOWN, &b_weight_indiv_SF_EL_ChargeMisID_SYST_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_MU_ID", &weight_indiv_SF_MU_ID, &b_weight_indiv_SF_MU_ID);
   fChain->SetBranchAddress("weight_indiv_SF_MU_ID_STAT_UP", &weight_indiv_SF_MU_ID_STAT_UP, &b_weight_indiv_SF_MU_ID_STAT_UP);
   fChain->SetBranchAddress("weight_indiv_SF_MU_ID_STAT_DOWN", &weight_indiv_SF_MU_ID_STAT_DOWN, &b_weight_indiv_SF_MU_ID_STAT_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_MU_ID_SYST_UP", &weight_indiv_SF_MU_ID_SYST_UP, &b_weight_indiv_SF_MU_ID_SYST_UP);
   fChain->SetBranchAddress("weight_indiv_SF_MU_ID_SYST_DOWN", &weight_indiv_SF_MU_ID_SYST_DOWN, &b_weight_indiv_SF_MU_ID_SYST_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_MU_ID_STAT_LOWPT_UP", &weight_indiv_SF_MU_ID_STAT_LOWPT_UP, &b_weight_indiv_SF_MU_ID_STAT_LOWPT_UP);
   fChain->SetBranchAddress("weight_indiv_SF_MU_ID_STAT_LOWPT_DOWN", &weight_indiv_SF_MU_ID_STAT_LOWPT_DOWN, &b_weight_indiv_SF_MU_ID_STAT_LOWPT_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_MU_ID_SYST_LOWPT_UP", &weight_indiv_SF_MU_ID_SYST_LOWPT_UP, &b_weight_indiv_SF_MU_ID_SYST_LOWPT_UP);
   fChain->SetBranchAddress("weight_indiv_SF_MU_ID_SYST_LOWPT_DOWN", &weight_indiv_SF_MU_ID_SYST_LOWPT_DOWN, &b_weight_indiv_SF_MU_ID_SYST_LOWPT_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_MU_Isol", &weight_indiv_SF_MU_Isol, &b_weight_indiv_SF_MU_Isol);
   fChain->SetBranchAddress("weight_indiv_SF_MU_Isol_STAT_UP", &weight_indiv_SF_MU_Isol_STAT_UP, &b_weight_indiv_SF_MU_Isol_STAT_UP);
   fChain->SetBranchAddress("weight_indiv_SF_MU_Isol_STAT_DOWN", &weight_indiv_SF_MU_Isol_STAT_DOWN, &b_weight_indiv_SF_MU_Isol_STAT_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_MU_Isol_SYST_UP", &weight_indiv_SF_MU_Isol_SYST_UP, &b_weight_indiv_SF_MU_Isol_SYST_UP);
   fChain->SetBranchAddress("weight_indiv_SF_MU_Isol_SYST_DOWN", &weight_indiv_SF_MU_Isol_SYST_DOWN, &b_weight_indiv_SF_MU_Isol_SYST_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_MU_TTVA", &weight_indiv_SF_MU_TTVA, &b_weight_indiv_SF_MU_TTVA);
   fChain->SetBranchAddress("weight_indiv_SF_MU_TTVA_STAT_UP", &weight_indiv_SF_MU_TTVA_STAT_UP, &b_weight_indiv_SF_MU_TTVA_STAT_UP);
   fChain->SetBranchAddress("weight_indiv_SF_MU_TTVA_STAT_DOWN", &weight_indiv_SF_MU_TTVA_STAT_DOWN, &b_weight_indiv_SF_MU_TTVA_STAT_DOWN);
   fChain->SetBranchAddress("weight_indiv_SF_MU_TTVA_SYST_UP", &weight_indiv_SF_MU_TTVA_SYST_UP, &b_weight_indiv_SF_MU_TTVA_SYST_UP);
   fChain->SetBranchAddress("weight_indiv_SF_MU_TTVA_SYST_DOWN", &weight_indiv_SF_MU_TTVA_SYST_DOWN, &b_weight_indiv_SF_MU_TTVA_SYST_DOWN);
   fChain->SetBranchAddress("weight_jvt_UP", &weight_jvt_UP, &b_weight_jvt_UP);
   fChain->SetBranchAddress("weight_jvt_DOWN", &weight_jvt_DOWN, &b_weight_jvt_DOWN);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77_eigenvars_B_up", &weight_bTagSF_DL1r_77_eigenvars_B_up, &b_weight_bTagSF_DL1r_77_eigenvars_B_up);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77_eigenvars_C_up", &weight_bTagSF_DL1r_77_eigenvars_C_up, &b_weight_bTagSF_DL1r_77_eigenvars_C_up);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77_eigenvars_Light_up", &weight_bTagSF_DL1r_77_eigenvars_Light_up, &b_weight_bTagSF_DL1r_77_eigenvars_Light_up);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77_eigenvars_B_down", &weight_bTagSF_DL1r_77_eigenvars_B_down, &b_weight_bTagSF_DL1r_77_eigenvars_B_down);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77_eigenvars_C_down", &weight_bTagSF_DL1r_77_eigenvars_C_down, &b_weight_bTagSF_DL1r_77_eigenvars_C_down);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77_eigenvars_Light_down", &weight_bTagSF_DL1r_77_eigenvars_Light_down, &b_weight_bTagSF_DL1r_77_eigenvars_Light_down);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77_extrapolation_up", &weight_bTagSF_DL1r_77_extrapolation_up, &b_weight_bTagSF_DL1r_77_extrapolation_up);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77_extrapolation_down", &weight_bTagSF_DL1r_77_extrapolation_down, &b_weight_bTagSF_DL1r_77_extrapolation_down);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77_extrapolation_from_charm_up", &weight_bTagSF_DL1r_77_extrapolation_from_charm_up, &b_weight_bTagSF_DL1r_77_extrapolation_from_charm_up);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_77_extrapolation_from_charm_down", &weight_bTagSF_DL1r_77_extrapolation_from_charm_down, &b_weight_bTagSF_DL1r_77_extrapolation_from_charm_down);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_Continuous_eigenvars_B_up", &weight_bTagSF_DL1r_Continuous_eigenvars_B_up, &b_weight_bTagSF_DL1r_Continuous_eigenvars_B_up);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_Continuous_eigenvars_C_up", &weight_bTagSF_DL1r_Continuous_eigenvars_C_up, &b_weight_bTagSF_DL1r_Continuous_eigenvars_C_up);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_Continuous_eigenvars_Light_up", &weight_bTagSF_DL1r_Continuous_eigenvars_Light_up, &b_weight_bTagSF_DL1r_Continuous_eigenvars_Light_up);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_Continuous_eigenvars_B_down", &weight_bTagSF_DL1r_Continuous_eigenvars_B_down, &b_weight_bTagSF_DL1r_Continuous_eigenvars_B_down);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_Continuous_eigenvars_C_down", &weight_bTagSF_DL1r_Continuous_eigenvars_C_down, &b_weight_bTagSF_DL1r_Continuous_eigenvars_C_down);
   fChain->SetBranchAddress("weight_bTagSF_DL1r_Continuous_eigenvars_Light_down", &weight_bTagSF_DL1r_Continuous_eigenvars_Light_down, &b_weight_bTagSF_DL1r_Continuous_eigenvars_Light_down);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("randomRunNumber", &randomRunNumber, &b_randomRunNumber);
   fChain->SetBranchAddress("mcChannelNumber", &mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("mu", &mu, &b_mu);
   fChain->SetBranchAddress("mu_actual", &mu_actual, &b_mu_actual);
   fChain->SetBranchAddress("backgroundFlags", &backgroundFlags, &b_backgroundFlags);
   fChain->SetBranchAddress("hasBadMuon", &hasBadMuon, &b_hasBadMuon);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_cl_eta", &el_cl_eta, &b_el_cl_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_e", &el_e, &b_el_e);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_topoetcone20", &el_topoetcone20, &b_el_topoetcone20);
   fChain->SetBranchAddress("el_ptvarcone20", &el_ptvarcone20, &b_el_ptvarcone20);
   fChain->SetBranchAddress("el_CF", &el_CF, &b_el_CF);
   fChain->SetBranchAddress("el_d0sig", &el_d0sig, &b_el_d0sig);
   fChain->SetBranchAddress("el_delta_z0_sintheta", &el_delta_z0_sintheta, &b_el_delta_z0_sintheta);
   fChain->SetBranchAddress("el_true_type", &el_true_type, &b_el_true_type);
   fChain->SetBranchAddress("el_true_origin", &el_true_origin, &b_el_true_origin);
   fChain->SetBranchAddress("el_true_firstEgMotherTruthType", &el_true_firstEgMotherTruthType, &b_el_true_firstEgMotherTruthType);
   fChain->SetBranchAddress("el_true_firstEgMotherTruthOrigin", &el_true_firstEgMotherTruthOrigin, &b_el_true_firstEgMotherTruthOrigin);
   fChain->SetBranchAddress("el_true_firstEgMotherPdgId", &el_true_firstEgMotherPdgId, &b_el_true_firstEgMotherPdgId);
   fChain->SetBranchAddress("el_true_IFFclass", &el_true_IFFclass, &b_el_true_IFFclass);
   fChain->SetBranchAddress("el_true_isPrompt", &el_true_isPrompt, &b_el_true_isPrompt);
   fChain->SetBranchAddress("el_true_isChargeFl", &el_true_isChargeFl, &b_el_true_isChargeFl);
   fChain->SetBranchAddress("mu_pt", &mu_pt, &b_mu_pt);
   fChain->SetBranchAddress("mu_eta", &mu_eta, &b_mu_eta);
   fChain->SetBranchAddress("mu_phi", &mu_phi, &b_mu_phi);
   fChain->SetBranchAddress("mu_e", &mu_e, &b_mu_e);
   fChain->SetBranchAddress("mu_charge", &mu_charge, &b_mu_charge);
   fChain->SetBranchAddress("mu_topoetcone20", &mu_topoetcone20, &b_mu_topoetcone20);
   fChain->SetBranchAddress("mu_ptvarcone30", &mu_ptvarcone30, &b_mu_ptvarcone30);
   fChain->SetBranchAddress("mu_d0sig", &mu_d0sig, &b_mu_d0sig);
   fChain->SetBranchAddress("mu_delta_z0_sintheta", &mu_delta_z0_sintheta, &b_mu_delta_z0_sintheta);
   fChain->SetBranchAddress("mu_true_type", &mu_true_type, &b_mu_true_type);
   fChain->SetBranchAddress("mu_true_origin", &mu_true_origin, &b_mu_true_origin);
   fChain->SetBranchAddress("mu_true_IFFclass", &mu_true_IFFclass, &b_mu_true_IFFclass);
   fChain->SetBranchAddress("mu_true_isPrompt", &mu_true_isPrompt, &b_mu_true_isPrompt);
   fChain->SetBranchAddress("jet_pt", &jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("jet_eta", &jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_phi", &jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("jet_e", &jet_e, &b_jet_e);
   fChain->SetBranchAddress("jet_jvt", &jet_jvt, &b_jet_jvt);
   fChain->SetBranchAddress("jet_truthflav", &jet_truthflav, &b_jet_truthflav);
   fChain->SetBranchAddress("jet_truthPartonLabel", &jet_truthPartonLabel, &b_jet_truthPartonLabel);
   fChain->SetBranchAddress("jet_isTrueHS", &jet_isTrueHS, &b_jet_isTrueHS);
   fChain->SetBranchAddress("jet_truthflavExtended", &jet_truthflavExtended, &b_jet_truthflavExtended);
   fChain->SetBranchAddress("jet_isbtagged_DL1r_77", &jet_isbtagged_DL1r_77, &b_jet_isbtagged_DL1r_77);
   fChain->SetBranchAddress("jet_tagWeightBin_DL1r_Continuous", &jet_tagWeightBin_DL1r_Continuous, &b_jet_tagWeightBin_DL1r_Continuous);
   fChain->SetBranchAddress("jet_DL1r", &jet_DL1r, &b_jet_DL1r);
   fChain->SetBranchAddress("jet_DL1r_pb", &jet_DL1r_pb, &b_jet_DL1r_pb);
   fChain->SetBranchAddress("jet_DL1r_pc", &jet_DL1r_pc, &b_jet_DL1r_pc);
   fChain->SetBranchAddress("jet_DL1r_pu", &jet_DL1r_pu, &b_jet_DL1r_pu);
   fChain->SetBranchAddress("met_met", &met_met, &b_met_met);
   fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);
   fChain->SetBranchAddress("emu_2015", &emu_2015, &b_emu_2015);
   fChain->SetBranchAddress("emu_2016", &emu_2016, &b_emu_2016);
   fChain->SetBranchAddress("emu_2017", &emu_2017, &b_emu_2017);
   fChain->SetBranchAddress("emu_2018", &emu_2018, &b_emu_2018);
   fChain->SetBranchAddress("ee_2015", &ee_2015, &b_ee_2015);
   fChain->SetBranchAddress("ee_2016", &ee_2016, &b_ee_2016);
   fChain->SetBranchAddress("ee_2017", &ee_2017, &b_ee_2017);
   fChain->SetBranchAddress("ee_2018", &ee_2018, &b_ee_2018);
   fChain->SetBranchAddress("mumu_2015", &mumu_2015, &b_mumu_2015);
   fChain->SetBranchAddress("mumu_2016", &mumu_2016, &b_mumu_2016);
   fChain->SetBranchAddress("mumu_2017", &mumu_2017, &b_mumu_2017);
   fChain->SetBranchAddress("mumu_2018", &mumu_2018, &b_mumu_2018);
   fChain->SetBranchAddress("HLT_mu26_ivarmedium", &HLT_mu26_ivarmedium, &b_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("HLT_e140_lhloose_nod0", &HLT_e140_lhloose_nod0, &b_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("HLT_mu50", &HLT_mu50, &b_HLT_mu50);
   fChain->SetBranchAddress("HLT_e17_lhloose_nod0_mu14", &HLT_e17_lhloose_nod0_mu14, &b_HLT_e17_lhloose_nod0_mu14);
   fChain->SetBranchAddress("HLT_e26_lhtight_nod0_ivarloose", &HLT_e26_lhtight_nod0_ivarloose, &b_HLT_e26_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("HLT_2e24_lhvloose_nod0", &HLT_2e24_lhvloose_nod0, &b_HLT_2e24_lhvloose_nod0);
   fChain->SetBranchAddress("HLT_e60_lhmedium_nod0", &HLT_e60_lhmedium_nod0, &b_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("HLT_mu22_mu8noL1", &HLT_mu22_mu8noL1, &b_HLT_mu22_mu8noL1);
   fChain->SetBranchAddress("el_trigMatch_HLT_e60_lhmedium_nod0", &el_trigMatch_HLT_e60_lhmedium_nod0, &b_el_trigMatch_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("el_trigMatch_HLT_e26_lhtight_nod0_ivarloose", &el_trigMatch_HLT_e26_lhtight_nod0_ivarloose, &b_el_trigMatch_HLT_e26_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("el_trigMatch_HLT_e140_lhloose_nod0", &el_trigMatch_HLT_e140_lhloose_nod0, &b_el_trigMatch_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("el_trigMatch_HLT_e17_lhloose_nod0_mu14", &el_trigMatch_HLT_e17_lhloose_nod0_mu14, &b_el_trigMatch_HLT_e17_lhloose_nod0_mu14);
   fChain->SetBranchAddress("mu_trigMatch_HLT_mu50", &mu_trigMatch_HLT_mu50, &b_mu_trigMatch_HLT_mu50);
   fChain->SetBranchAddress("mu_trigMatch_HLT_mu22_mu8noL1", &mu_trigMatch_HLT_mu22_mu8noL1, &b_mu_trigMatch_HLT_mu22_mu8noL1);
   fChain->SetBranchAddress("mu_trigMatch_HLT_mu26_ivarmedium", &mu_trigMatch_HLT_mu26_ivarmedium, &b_mu_trigMatch_HLT_mu26_ivarmedium);
   Notify();
}

Bool_t mynominal::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void mynominal::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t mynominal::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef mynominal_cxx
