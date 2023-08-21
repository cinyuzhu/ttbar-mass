
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


using namespace std;
void SetBranches(TTree *out_tree){

  out_tree->Branch("t_weight_mc", &t_weight_mc, "t_weight_mc/F");
  out_tree->Branch("t_weight_pileup", &t_weight_pileup, "t_weight_pileup/F");
  out_tree->Branch("t_weight_leptonSF", &t_weight_leptonSF, "t_weight_leptonSF/F");
  out_tree->Branch("t_weight_globalLeptonTriggerSF", &t_weight_globalLeptonTriggerSF, "t_weight_globalLeptonTriggerSF/F");
  out_tree->Branch("t_weight_oldTriggerSF", &t_weight_oldTriggerSF, "t_weight_oldTriggerSF/F");
  out_tree->Branch("t_weight_bTagSF_DL1r_77", &t_weight_bTagSF_DL1r_77, "t_weight_bTagSF_DL1r_77/F");
  out_tree->Branch("t_weight_jvt", &t_weight_jvt, "t_weight_jvt/F");
  out_tree->Branch("t_eventNumber", &t_eventNumber, "t_eventNumber/l");
  out_tree->Branch("t_runNumber", &t_runNumber, "t_runNumber/i");

  if (std::string(out_tree->GetName())=="nominal" ) {
    // out_tree->Branch("truth_mc_pow_pt", &truth_mc_pow_pt);
    // out_tree->Branch("truth_mc_pow_eta", &truth_mc_pow_eta);
    // out_tree->Branch("truth_mc_pow_phi", &truth_mc_pow_phi);
    // out_tree->Branch("truth_mc_pow_e", &truth_mc_pow_e);
    // out_tree->Branch("truth_mc_pow_pdgId", &truth_mc_pow_pdgId);
    // out_tree->Branch("truth_mc_pow_status", &truth_mc_pow_status);
  }
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

  if (treename == "nominal") {
    // std::vector<float>   *mc_pow_pt;
    // std::vector<float>   *mc_pow_eta;
    // std::vector<float>   *mc_pow_phi;
    // std::vector<float>   *mc_pow_e;
    // std::vector<int>     *mc_pow_pdgId;
    // std::vector<int>     *mc_pow_status;  

    ULong64_t eventNumber = 0;
    // mc_pow_pt             = 0;
    // mc_pow_eta            = 0;
    // mc_pow_phi            = 0;
    // mc_pow_e              = 0;
    // mc_pow_pdgId          = 0;
    // mc_pow_status         = 0;

    t2->SetBranchAddress("eventNumber", &eventNumber);
    // t2->SetBranchAddress("mc_pow_pt", &mc_pow_pt);
    // t2->SetBranchAddress("mc_pow_eta", &mc_pow_eta);
    // t2->SetBranchAddress("mc_pow_phi", &mc_pow_phi);
    // t2->SetBranchAddress("mc_pow_e", &mc_pow_e);
    // t2->SetBranchAddress("mc_pow_pdgId", &mc_pow_pdgId);
    // t2->SetBranchAddress("mc_pow_status", &mc_pow_status);
    
  
    for (UInt_t iEvent = 0; ; ++iEvent) { //truth event loop starts
	    Long64_t ientry = t2->LoadTree(iEvent);
	    if (ientry < 0) {
        break;
      }
    	t2->GetEntry(iEvent);
      truth_evt_num.push_back(eventNumber);
      //cout << " eventNumber "<< eventNumber << endl; //this works

      std::vector<float> temp_tr_eventNumber;
      std::vector<float> temp_tr_pt;
	    std::vector<float> temp_tr_eta;
	    std::vector<float> temp_tr_phi;
	    std::vector<float> temp_tr_e;
	    std::vector<int>   temp_tr_pdgId;
	    std::vector<int>   temp_tr_status;

      // for(UInt_t in=0; in< mc_pow_pt->size(); in++){
	    //   temp_tr_pt.push_back( mc_pow_pt->at(in));
	    //   temp_tr_eta.push_back( mc_pow_eta->at(in));
	    //   temp_tr_phi.push_back( mc_pow_phi->at(in));
	    //   temp_tr_e.push_back( mc_pow_e->at(in));
      //   //cout << "mc_pow_e->at(in)" << mc_pow_e->at(in)<< endl;
	    //   temp_tr_pdgId.push_back( mc_pow_pdgId->at(in));
	    //   temp_tr_status.push_back( mc_pow_status->at(in)); 
      // }
      // tr_pt.push_back( temp_tr_pt);
	    // tr_eta.push_back( temp_tr_eta);
	    // tr_phi.push_back( temp_tr_phi);
	    // tr_e.push_back( temp_tr_e);
	    // tr_pdgId.push_back( temp_tr_pdgId);
	    // tr_status.push_back( temp_tr_status);
    } //truth event loop ends
    //cout << truth_evt_num.at(1) << endl;
  {
    MCfile->cd();
    NominalTree(t1);
    t1->SetBranchAddress("eventNumber", &eventNumber);
    Long64_t num=0;
    for (UInt_t iEven = 0;  ; ++iEven) {
      Long64_t ient = t1->LoadTree(iEven);
      if (ient < 0) {
	      break;
      }
      t1->GetEntry(iEven);
      num++;
    }
    cout<<"Nominal: nevents= "<< num <<endl;
    for (UInt_t iEvt = 0; ; ++iEvt) { //nominal event loop starts
      //cout<<"\niEvt = " << iEvt;
      Long64_t ient = t1->LoadTree(iEvt);
      if (ient < 0) {
	      break;
      }
      t1->GetEntry(iEvt);
						
      Long64_t truth_sequence_num ;
      if(treename == "nominal"){
	      //Long64_t truth_sequence_num;
	      //Find the truth entries for the same event as in nominal
	      bool flag = false;
	      //cout<<"Before comparing with truth\n";
	      for( UInt_t evt=0; evt< truth_evt_num.size(); evt++){
	        if( eventNumber == truth_evt_num[evt] ){
	          flag = true;
	          truth_sequence_num = evt;
	        }
	      }      
	      if( !flag)      continue;
        //cout <<"ch pt 1" <<endl;
		    t_weight_mc             = weight_mc;// eventWeight
		    t_weight_pileup         = weight_pileup;
		    t_weight_leptonSF       = weight_leptonSF;
		    t_weight_oldTriggerSF     = weight_oldTriggerSF;
		    t_weight_globalLeptonTriggerSF = weight_globalLeptonTriggerSF;
		    t_weight_bTagSF_DL1r_77 = weight_bTagSF_DL1r_77;
		    t_weight_jvt            = weight_jvt;
        t_eventNumber           = eventNumber;
        t_runNumber             = runNumber;

        if (!(iEvt % 1000)){
          cout<< " t_eventNumber " << t_eventNumber<< endl;
        }
        //if ( treename=="nominal") {
          
		      //for( int in=0; in<tr_pt[truth_sequence_num].size(); in++){
            // truth_mc_pow_pt     = tr_pt [truth_sequence_num];
		        // truth_mc_pow_eta    = tr_eta [truth_sequence_num];
		        // truth_mc_pow_phi    = tr_phi [truth_sequence_num];
		        // truth_mc_pow_e      = tr_e [truth_sequence_num];
            // //cout << "energy 2: " << tr_e [truth_sequence_num] .at(1);
		        // truth_mc_pow_pdgId  = tr_pdgId [truth_sequence_num];
		        // truth_mc_pow_status = tr_status [truth_sequence_num];
            out_tree->Fill();
            //cout << "checkpoint 2" << endl;
          //}
        //}
      }
      //out_tree->Fill();
    } // nominal event loop ends
  }
  //out_tree->Fill();
  //MCfile->cd();
  // cout<<"check point 3" << endl;
  
  t1->SetName(treename.c_str());
  //out_tree->AddFriend(t1);
  out_tree->Write(NN_tree.c_str());
}
}



