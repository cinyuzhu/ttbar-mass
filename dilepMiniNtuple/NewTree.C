
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

  out_tree->Branch("t_weight_mc", &t_weight_mc, "weight_mc/F");
  out_tree->Branch("t_weight_pileup", &t_weight_pileup, "weight_pileup/F");
  out_tree->Branch("t_weight_leptonSF", &t_weight_leptonSF, "weight_leptonSF/F");
  out_tree->Branch("t_weight_globalLeptonTriggerSF", &t_weight_globalLeptonTriggerSF, "weight_globalLeptonTriggerSF/F");
  out_tree->Branch("t_weight_oldTriggerSF", &t_weight_oldTriggerSF, "weight_oldTriggerSF/F");
  out_tree->Branch("t_weight_bTagSF_DL1r_77", &t_weight_bTagSF_DL1r_77, "weight_bTagSF_DL1r_77/F");
  out_tree->Branch("t_weight_jvt", &t_weight_jvt, "weight_jvt/F");
  out_tree->Branch("t_eventNumber", &t_eventNumber, "eventNumber/l");
  out_tree->Branch("t_runNumber", &t_runNumber, "runNumber/i");
  out_tree->Branch("t_MC_W_from_t_phi", &t_MC_W_from_t_phi, "MC_W_from_t_phi/F");
  out_tree->Branch("t_met_phi", &t_met_phi,"met_phi/F");
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
  std::vector<float> temp_MC_W_from_t_phi;

  Float_t         MC_W_from_t_phi;  

    ULong64_t eventNumber = 0;
    MC_W_from_t_phi = 0;
    

    t2->SetBranchAddress("eventNumber", &eventNumber);
    t2->SetBranchAddress("MC_W_from_t_phi", &MC_W_from_t_phi);

    
    for (UInt_t iEvent = 0; iEvent < 170000; ++iEvent) { //truth event loop starts
	    Long64_t ientry = t2->LoadTree(iEvent);
	    if (ientry < 0) {
        break;
      }
    	t2->GetEntry(iEvent);
      truth_evt_num.push_back(eventNumber);
      //cout << " eventNumber "<< eventNumber << endl; //this works


      temp_MC_W_from_t_phi.push_back(MC_W_from_t_phi);

    } //truth event loop ends
    cout << temp_MC_W_from_t_phi.at(0) << endl;
  {
    MCfile->cd();
    NominalTree(t1);
    t1->SetBranchAddress("eventNumber", &eventNumber);

    Long64_t lastevent = 0;
    for (UInt_t iEvt = 0;iEvt < 1200 ; ++iEvt) { //nominal event loop starts
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
	      for( UInt_t evt = lastevent ; evt< truth_evt_num.size(); evt++){
	        if( eventNumber == truth_evt_num[evt] ){
	          flag = true;
	          truth_sequence_num = evt;
            lastevent = truth_sequence_num;
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
        t_MC_W_from_t_phi = temp_MC_W_from_t_phi[truth_sequence_num];
        t_met_phi =met_phi;

        if (!(iEvt % 1000)){
          cout<< " t_eventNumber " << t_eventNumber<< endl;
        }
       
        out_tree->Fill();

      }
      
    } // nominal event loop ends
  }
 
  
  t1->SetName(treename.c_str());
  out_tree->Write(NN_tree.c_str());

}



