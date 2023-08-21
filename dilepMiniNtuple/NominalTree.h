#ifndef NOMINALTREE_H
#define NOMINALTREE_H

#include <iostream>
#include <fstream>
#include <TFile.h>
#include <TTree.h>


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

void NominalTree( TTree *t);


#endif