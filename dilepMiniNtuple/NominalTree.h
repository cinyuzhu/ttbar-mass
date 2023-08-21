#ifndef NOMINALTREE_H
#define NOMINALTREE_H

#include <iostream>
#include <fstream>
#include <TFile.h>
#include <TTree.h>

using namespace std;

//Variables for the nominal tree 
Float_t         weight_mc;
Float_t         weight_pileup;
Float_t         weight_leptonSF;
Float_t         weight_oldTriggerSF;
Float_t         weight_globalLeptonTriggerSF;
Float_t         weight_bTagSF_DL1r_77;
Float_t         weight_jvt;
ULong64_t       eventNumber;
UInt_t          runNumber;
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


void NominalTree( TTree *t);


#endif