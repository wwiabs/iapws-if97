#ifndef IAPWS_IF97_H_INCLUDED
#define IAPWS_IF97_H_INCLUDED

// 单位:Mpa,K  =m3/kg
double v_pT(const double& p, const double& T,int region = 0);

// 单位:Mpa,K   =kJ/kgK
double s_pT(const double& p, const double& T, int region = 0);

// 单位:Mpa,K   =kJ/kg
double h_pT(const double& p, const double& T, int region = 0);

// 单位:Mpa,kJ/kg   =K
double T_ph(const double& p, const double& h);

// 单位:Mpa,kJ/kgK   =K
double T_ps(const double& p, const double& s);

// 单位:Mpa  =K
double Ts_p(const double& p);

// 单位:K =Mpa
double ps_T(const double& T);

//dynamic viscosity 单位: m3/kg, K   =Pa s
double eta_vT(const double& v,const double& T);

//单位:Mpa
double B23_T_p(const double& p);

// 单位:kJ/kg   =Mpa
double B34_ps_h_eq(const double& h);

// 单位:kJ/kgK   =Mpa
double B34_ps_s_eq(const double& s);

//单位:Mpa
double R2_Bbc_h_p(const double& p);

#endif // IAPWS_IF97_H_INCLUDED
