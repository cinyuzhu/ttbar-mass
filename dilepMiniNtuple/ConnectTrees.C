#include <iostream>
#include <fstream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>
#include <TH2.h>
#include <vector>
#include <stdlib.h>
//#include "StdArg.hpp"
#include <stdio.h>
#include <string.h>

#include "NewTree.h"
#include "NewTree.C"

int main(int argc, char** argv){

  //StdArg arg(argc,argv);
  std::cout<<"ConnectTrees.C"<<std::endl;
  std::cout<<"Called with"<<std::endl;
  for (int i=1; i< argc; i++)
    puts(argv[i]);
  std::cout<<std::endl;
  
  TString inFile        = argv[1];
  TString outFile       = argv[2];

  //arg.keys << "-inFile"<<"-outFile";
  //arg.Process();
  //if (arg.Key("-inFile") )          inFile            = arg.Get<string>("-inFile");
  //if (arg.Key("-outFile") )         outFile           = arg.Get<string>("-outFile");

  //std::vector<TString> ntuple_files;
  //ntuple_files.push_back(inFile);
  
  std::vector<std::string> trees{"nominal"};//, 
     /* "MET_SoftTrk_ResoPara",
      "MET_SoftTrk_Scale__1down", 
      "CategoryReduction_JET_Pileup_OffsetMu__1up", 
      "CategoryReduction_JET_JER_EffectiveNP_9__1up", 
      "CategoryReduction_JET_JER_EffectiveNP_4__1up", 
      "CategoryReduction_JET_JER_EffectiveNP_8__1up", 
      "CategoryReduction_JET_Flavor_Composition__1down",
      "CategoryReduction_JET_JER_EffectiveNP_7__1up",
      "CategoryReduction_JET_JER_EffectiveNP_7__1down",
      "CategoryReduction_JET_JER_EffectiveNP_5__1up",
      "CategoryReduction_JET_JER_EffectiveNP_3__1down",
      "CategoryReduction_JET_EtaIntercalibration_NonClosure_2018data__1down",
      "CategoryReduction_JET_JER_EffectiveNP_2__1down",
      "CategoryReduction_JET_JER_EffectiveNP_1__1up",
      "CategoryReduction_JET_JER_EffectiveNP_12restTerm__1up",
      "CategoryReduction_JET_JER_EffectiveNP_10__1up",
      "CategoryReduction_JET_JER_DataVsMC_MC16__1down",
      "CategoryReduction_JET_Flavor_Response__1up",
      "CategoryReduction_JET_EffectiveNP_Statistical1__1down",
      "CategoryReduction_JET_EffectiveNP_Statistical2__1down",
      "CategoryReduction_JET_EtaIntercalibration_TotalStat__1down",
      "CategoryReduction_JET_EtaIntercalibration_NonClosure_posEta__1up",
      "CategoryReduction_JET_EffectiveNP_Statistical2__1up",
      "CategoryReduction_JET_JER_DataVsMC_MC16__1up",
      "CategoryReduction_JET_EtaIntercalibration_NonClosure_posEta__1down",
      "CategoryReduction_JET_Pileup_OffsetNPV__1down",
      "CategoryReduction_JET_EffectiveNP_Statistical3__1up",
      "CategoryReduction_JET_BJES_Response__1up",
      "CategoryReduction_JET_EffectiveNP_Statistical4__1down",
      "CategoryReduction_JET_EffectiveNP_Detector1__1up",
      "CategoryReduction_JET_EffectiveNP_Statistical5__1up",
      "CategoryReduction_JET_Pileup_OffsetNPV__1up",
      "CategoryReduction_JET_Pileup_PtTerm__1down",
      "CategoryReduction_JET_Pileup_RhoTopology__1down",
      "CategoryReduction_JET_EffectiveNP_Modelling4__1up",
      "CategoryReduction_JET_EffectiveNP_Statistical5__1down",
      "CategoryReduction_JET_SingleParticle_HighPt__1down",
      "CategoryReduction_JET_SingleParticle_HighPt__1up",
      "CategoryReduction_JET_PunchThrough_MC16__1down",
      "EG_SCALE_ALL__1down",
      "CategoryReduction_JET_EffectiveNP_Mixed3__1up",
      "CategoryReduction_JET_EffectiveNP_Statistical4__1up",
      "MET_SoftTrk_ResoPerp",
      "MUON_SAGITTA_RHO__1down",
      "CategoryReduction_JET_JER_EffectiveNP_6__1up",
      "MUON_MS__1down",
      "MUON_SAGITTA_RESBIAS__1up",
      "CategoryReduction_JET_EffectiveNP_Mixed1__1down",
      "CategoryReduction_JET_JER_EffectiveNP_4__1down",
      "CategoryReduction_JET_JER_EffectiveNP_8__1down",
      "CategoryReduction_JET_JER_EffectiveNP_2__1up",
      "CategoryReduction_JET_Pileup_PtTerm__1up",
      "CategoryReduction_JET_Pileup_OffsetMu__1down",
      "EG_SCALE_ALL__1up",
      "MUON_SCALE__1up",
      "CategoryReduction_JET_EffectiveNP_Detector2__1down",
      "CategoryReduction_JET_Flavor_Composition__1up",
      "MET_SoftTrk_Scale__1up",
      "CategoryReduction_JET_JER_EffectiveNP_3__1up",
      "MUON_SAGITTA_RHO__1up",
      "CategoryReduction_JET_Pileup_RhoTopology__1up",
      "CategoryReduction_JET_EffectiveNP_Modelling2__1down",
      "MUON_ID__1down",
      "CategoryReduction_JET_EffectiveNP_Modelling4__1down",
      "CategoryReduction_JET_JER_EffectiveNP_11__1down",
      "EG_RESOLUTION_ALL__1down",
      "MUON_SAGITTA_RESBIAS__1down",
      "EG_SCALE_AF2__1down",
      "CategoryReduction_JET_EffectiveNP_Mixed1__1up",
      "CategoryReduction_JET_JER_EffectiveNP_10__1down",
      "MUON_SCALE__1down",
      "CategoryReduction_JET_EtaIntercalibration_NonClosure_negEta__1down",
      "MUON_ID__1up",
      "EG_RESOLUTION_ALL__1up",
      "CategoryReduction_JET_EffectiveNP_Statistical6__1up",
      "CategoryReduction_JET_EffectiveNP_Mixed2__1up",
      "MUON_MS__1up",
      "CategoryReduction_JET_EtaIntercalibration_NonClosure_negEta__1up",
      "CategoryReduction_JET_EffectiveNP_Modelling2__1up",
      "EG_SCALE_AF2__1up",
      "CategoryReduction_JET_EffectiveNP_Modelling3__1up",
      "CategoryReduction_JET_EffectiveNP_Modelling3__1down",
      "CategoryReduction_JET_JER_EffectiveNP_1__1down",
      "CategoryReduction_JET_EtaIntercalibration_Modelling__1up",
      "CategoryReduction_JET_EffectiveNP_Detector1__1down",
      "CategoryReduction_JET_PunchThrough_MC16__1up",
      "CategoryReduction_JET_Flavor_Response__1down",
      "CategoryReduction_JET_EffectiveNP_Mixed3__1down",
      "CategoryReduction_JET_EffectiveNP_Modelling1__1down",
      "CategoryReduction_JET_BJES_Response__1down",
      "CategoryReduction_JET_EffectiveNP_Detector2__1up",
      "CategoryReduction_JET_JER_EffectiveNP_11__1up",
      "CategoryReduction_JET_EffectiveNP_Statistical6__1down",
      "CategoryReduction_JET_EffectiveNP_Statistical3__1down",
      "CategoryReduction_JET_EffectiveNP_Statistical1__1up",
      "CategoryReduction_JET_EtaIntercalibration_NonClosure_2018data__1up",
      "CategoryReduction_JET_JER_EffectiveNP_9__1down",
      "CategoryReduction_JET_EffectiveNP_Mixed2__1down",
      "CategoryReduction_JET_JER_EffectiveNP_12restTerm__1down",
      "CategoryReduction_JET_EffectiveNP_Modelling1__1up",
      "CategoryReduction_JET_EtaIntercalibration_Modelling__1down",
      "CategoryReduction_JET_EtaIntercalibration_TotalStat__1up",
      "CategoryReduction_JET_JER_EffectiveNP_5__1down",
      "CategoryReduction_JET_JER_EffectiveNP_6__1down",
      "CategoryReduction_JET_EtaIntercalibration_NonClosure_highE__1down",
      "CategoryReduction_JET_EtaIntercalibration_NonClosure_highE__1up"};*/
					   
  TFile* out_file = TFile :: Open( outFile, "RECREATE");
  cout<<"File opened:\n";
  
  for (auto &tree_name : trees)
    NewTree (tree_name, inFile ,out_file);
  out_file->Close();
  cout<<"File closed.\n";
  return 0;

}
