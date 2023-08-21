# miniNtupleMaker

This framework takes in the TOPQ1 ntuples and creates mini-ntuples from it keeping only the essential information for top-Yukawa coupling analysis

## Setting up
```
git clone https://gitlab.cern.ch/atlasphys-top/xs/yt/codebase/minintuplemaker.git
```

## Compilation
The Makefile still needs to be modified a bit to get it working more efficiently. For the meantime, for any changes made in any of the ".C" or ".h" files, do the following before `make`:
```
touch ConnectTrees.C
```

```
make
```


## Running locally
```
./ConnectTrees <input_Ntuplefile> <output_miniNtuplefile>
```

## Running on BIRD (Batch Infrastruktur Resource at DESY)
 ```
 mkdir outputs
 cd outputs
 mkdir diboson  singletop  ttbar  Wenu  Wmunu  Wt  Wtaunu  Zee  Zmumu  Ztautau
 ```
 The file `create_batch_submission.py` creates the argument list and condor submission instructions. You need to modify this file to include the path to your working directory. Depending upon which dsid you want to process, modify this file at the said places. `initialdir` is your home directory. `sample` takes one of these initializations: `diboson/singletop/Wenu/Wmunu/Wt/Wtaunu/Zee/Zmumu/Ztautau/data`. `sampleID` is the name of the dsid directory where the symbolic links to the ntuples are made (inside `/afs/desy.de/user/s/ssinha/dust/AthenaAna_git/scripts/Filelists_mcTOPQ1_periodA_v2/<sample>/`). For example, `sampleID` can be `mc16_13TeV.410470.PhPy8EG_A14_ttbar_hdamp258p75_nonallhad.deriv.DAOD_TOPQ1.e6337_s3126_r9364_p4514_2022_07_12` when the `sample` is `ttbar`. To create files for batch submission, execute:
 ```
 python create_batch_submission.py
 ```
 To submit jobs, you just have to execute the `condor_submit` command to your created submission file. For the above example, you would execute:
 ```
 condor_submit CondSubDir_ttbar/mc16_13TeV.410470.PhPy8EG_A14_ttbar_hdamp258p75_nonallhad.deriv.DAOD_TOPQ1.e6337_s3126_r9364_p4514_2022_07_12/submit_condor_ttbar
 ```
 More information on DESY batch system can be found [here](https://confluence.desy.de/display/IS/BIRD).
