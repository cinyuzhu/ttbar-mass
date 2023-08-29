#include <Math/Vector3D.h>
#include <Math/Vector4D.h>
#include <Math/Boost.h>
#include <Math/GenVector/Boost.h>
#include <math.h> 

#include "Math/GenVector/LorentzVector.h"

#include "Math/GenVector/BoostX.h"
#include "Math/GenVector/BoostY.h"
#include "Math/GenVector/BoostZ.h"
#include <TLorentzVector.h>

double yt_do_reweight(double xmass, double costh, int parton, double yt=1.){

  const double mt=172.5;
  const int nzf=4;
  const int nyf=2;
  const int nef=8;
  
  double ggweight[nzf][nyf][nef]=
    {-6.67908e-02,  3.86052e-01, -1.34693e+00,  3.03302e+00, -3.75460e+00,  2.37272e+00, -5.95133e-01,  4.51560e-02,
     6.38987e-02, -5.93249e-01,  2.39915e+00, -5.27119e+00,  6.30844e+00, -3.85562e+00,  9.41978e-01,  1.45821e-02,
     -3.31928e-04,  4.05408e-02, -2.18537e-01,  3.56203e-01, -3.19433e-01,  1.53653e-01, -3.30028e-02, -1.75199e-02,
     1.15255e-04, -4.42851e-02,  3.70175e-01, -7.81470e-01,  7.67564e-01, -3.68700e-01,  6.89847e-02, -5.83453e-03,
     1.18725e-04, -2.02470e-02,  1.27439e-01, -4.26324e-01,  6.53428e-01, -4.81808e-01,  1.36340e-01, -3.45160e-02,
     -8.28994e-05,  2.93686e-02, -2.11907e-01,  3.86285e-01, -2.75813e-01,  5.83409e-02,  9.01867e-03, -9.35966e-03,
     -1.02026e-04,  1.44440e-02, -2.30352e-01,  3.44677e-01, -2.85032e-01,  1.10318e-01, -1.63836e-02, -5.81166e-02,
     9.75732e-06, -1.09588e-03, -1.77877e-02,  1.14335e-03,  6.47433e-02, -8.12827e-02,  2.87462e-02, -1.68529e-02};

  double uuweight[nzf][nyf][nef]=
    {-9.24294e-03, -7.96971e-02,  2.01692e-01, -5.02063e-01,  6.10436e-01, -3.75349e-01,  9.19462e-02, -1.54185e-02,
     6.16912e-02, -4.32590e-01,  1.39914e+00, -2.84252e+00,  3.32887e+00, -2.03405e+00,  5.00788e-01,  2.76745e-03,
     1.28549e-04,  1.53305e-02, -9.69884e-02,  2.09841e-01, -2.31494e-01,  1.30085e-01, -2.92735e-02,  1.20344e-03,
     -6.54151e-05, -2.43856e-02,  1.21371e-01, -2.21482e-01,  2.05156e-01, -9.61786e-02,  1.77897e-02, -1.12473e-03,
     7.73907e-08, -8.39461e-04, -2.60938e-03,  3.13562e-02, -5.89150e-02,  4.47759e-02, -1.25860e-02, -9.32505e-04,
     -1.87050e-06,  8.01822e-04,  1.20346e-02, -6.74174e-02,  1.12993e-01, -8.17629e-02,  2.22532e-02,  8.92921e-04,
     -3.69616e-06,  2.83933e-04, -4.60998e-03,  1.92035e-02, -2.89815e-02,  1.98528e-02, -5.26506e-03, -4.87275e-04,
     6.24915e-06, -5.36607e-04,  8.11443e-03, -2.98328e-02,  4.30680e-02, -2.87306e-02,  7.46463e-03,  4.73872e-04};

  double ddweight[nzf][nyf][nef]=

    {-9.27248e-03, -8.03316e-02,  2.01079e-01, -5.01776e-01,  6.09793e-01, -3.74793e-01,  9.17735e-02, -1.60379e-02,
     6.16915e-02, -4.32589e-01,  1.39914e+00, -2.84256e+00,  3.32898e+00, -2.03417e+00,  5.00829e-01,  2.76576e-03,
     1.28798e-04,  1.53289e-02, -9.69873e-02,  2.09856e-01, -2.31538e-01,  1.30131e-01, -2.92894e-02,  1.20488e-03,
     -6.55303e-05, -2.43851e-02,  1.21369e-01, -2.21475e-01,  2.05141e-01, -9.61638e-02,  1.77845e-02, -1.12427e-03,
     3.06088e-07, -8.45776e-04, -2.52784e-03,  3.09989e-02, -5.82440e-02,  4.42115e-02, -1.24108e-02, -9.37067e-04,
     -1.95431e-06,  8.00645e-04,  1.20335e-02, -6.73760e-02,  1.12879e-01, -8.16496e-02,  2.22145e-02,  8.94080e-04,
     -3.16584e-06,  2.77157e-04, -4.53516e-03,  1.88790e-02, -2.83732e-02,  1.93428e-02, -5.10756e-03, -4.90059e-04,
     5.98178e-06, -5.37754e-04,  8.11725e-03, -2.98023e-02,  4.29641e-02, -2.86187e-02,  7.42472e-03,  4.75568e-04};
	
  double (*pw)[nzf][nyf][nef];
  double pwe[nzf][nyf];
  double pwy[nzf];
  double weight = 1.;
  double mass=xmass;
  
  if (mass>20000.) mass=mass/1000.;
  mass = fmax(2.*mt+1.,mass);
  if (parton==21){
    pw=&ggweight;
  }else if (abs(parton)==1 || abs(parton)==3){
    pw=&ddweight;
  }else if (abs(parton)==2 || abs(parton)==4){
    pw=&uuweight;
  }else{
    std::cout << "Parton  " << parton << " not implemented \n";
    return weight;
  }

  for (int ic=0; ic<nzf; ic++){
    for (int iy=0; iy<nyf; iy++){
      if (mass<1000.){
	double x=log(mass/(2.*mt));
	double xp=1.;
	pwe[ic][iy]=0.;
	for (int ip=0; ip<7; ip++){
	  pwe[ic][iy]+=(*pw)[ic][iy][ip]*xp;
	  xp=xp*x;
	}
      }else{
	double x=log(1000./(2.*mt));
	double xp=1.;
	double xst = 0.;
	double xsl = 0.;
	for (int ip=0; ip<7; ip++){
	  xst+=(*pw)[ic][iy][ip]*xp;
	  if (ip<6) xsl+=(ip+1.)*(*pw)[ic][iy][ip+1]*xp;
	  xp=xp*x;
	}
	double xd=log(mass/(2.*mt))-x;
	pwe[ic][iy]=xst+xsl*xd+(*pw)[ic][iy][7]*xd*xd;
      }
    }
  }
  for (int ic=0; ic<nzf; ic++){
    pwy[ic]=pwe[ic][0]+pwe[ic][1]*yt*yt;
  }
  double ct2=fmin(costh*costh,1.);
  weight = pwy[0]+pwy[1]*ct2+pwy[2]*ct2*ct2+pwy[3]*sqrt(1.-ct2);
  weight = weight+1.;
  return weight;
}


template <class T, class U>
double yt_reweight(T tveci, U tbveci, int parton, double yt=1.){
  // t p4, tbar, PDFinfo_PDGID1 PDFinfo_PDGID2 (gg, qg = gg; qq = qq), Yy = 0,1,2,3,4)

  const double mt=172500.;
  ROOT::Math::PtEtaPhiMVector tvec;
  ROOT::Math::PtEtaPhiMVector tbvec;
  tvec += tveci;
  tbvec += tbveci;

  tvec.SetM(mt);
  tbvec.SetM(mt);
  
  double weight = 1.;
  
  TLorentzVector top, topbar, ttbar;
  top. SetPtEtaPhiE( tvec.Pt(), tvec.Eta(), tvec.Phi(), tvec.E());
  topbar. SetPtEtaPhiE( tbvec.Pt(), tbvec.Eta(), tbvec.Phi(), tbvec.E());
  ttbar = top + topbar;
  double mass = ttbar.M();
  
  TVector3 b = ttbar.BoostVector();
  TLorentzVector top_rest = top;
  top_rest.Boost(-b);

  double theta=2.*atan(exp(-top_rest.Eta()));
  double costh=abs(cos(theta));

  weight= yt_do_reweight(mass, costh, parton, yt);
   
  return weight;
}
