//
//  Mathematics.h
//  Open C Library
//
//  Created by Abhishek Munie on 19/10/11.
//

#ifndef Open_C_Library_Mathematics_h
#define Open_C_Library_Mathematics_h

__BEGIN_DECLS
struct UniversalConstant {
    
    /**
     * Constant: Value of π
     * Symbol: π
     * Unit: null <tr>
     */
    double Pi;
    /**
     * Constant: Accleration due to gravity/free-fall <tr>
     * Symbol: g <tr>
     * Unit: m s-2 <tr>
     */
    double g;
    /**
     * Constant: Avogadro Constant <tr>
     * Symbol: L or N_A <tr>
     * Unit: mol-1 <tr>
     */
    double L;
    /**
     * Constant: Boltzmann Constant <tr>
     * Symbol: k(=R/L) <tr>
     * Unit: J K-1 <tr>
     */
    double k;
    /**
     * Constant: Electric Constant <tr>
     * Symbol: ε_ο <tr>
     * Unit: F m-1 <tr>
     */
    double e_o;
    /**
     * Constant: Electronic Charge <tr>
     * Symbol: e <tr>
     * Unit: C <tr>
     */
    double e;
    /**
     * Constant: Electronic rest mass <tr>
     * Symbol: m_e <tr>
     * Unit: kg <tr>
     */
    double m_e;
    /**
     * Constant: Faraday Constant <tr>
     * Symbol: F <tr>
     * Unit: C mole-1 <tr>
     */
    double F;
    /**
     * Constant: Gas Constant <tr>
     * Symbol: R <tr>
     * Unit: J K-1 mole-1 <tr>
     */
    double R;
    /**
     * Constant: Gravitatinal Constant <tr>
     * Symbol: G <tr>
     * Unit: m3 kg-1 s-2 <tr>
     */
    double G;
    /**
     * Constant: Loschmidt's Constant <tr>
     * Symbol: N_L <tr>
     * Unit: m-3 <tr>
     */
    double N_L;
    /**
     * Constant: Magnetic Constant or Permeability of Free Space <tr>
     * Symbol: μ_ο <tr>
     * Unit: H m-1 <tr>
     */
    double mu_o;
    /**
     * Constant: Plank constant <tr>
     * Symbol: h <tr>
     * Unit: J s <tr>
     */
    double h;
    /**
     * Constant: neutron rest mass <tr>
     * Symbol: m_n <tr>
     * Unit: kg <tr>
     */
    double m_n;
    /**
     * Constant: proton rest mass <tr>
     * Symbol: m_p <tr>
     * Unit:  <tr>
     */
    double m_p;
    /**
     * Constant: speed of light <tr>
     * Symbol: c <tr>
     * Unit: m s-1 <tr>
     */
    long long c;
    /**
     * Constant: Stefan-Boltzmann constant <tr>
     * Symbol: σ <tr>
     * Unit: W m-2 K-4 <tr>
     */
    double sigma;
    /**
     * Constant: Constant for nuclear radius <tr>
     * Symbol: r_ο <tr>
     * Unit: m <tr>
     */
    double r_o;
};
extern const struct UniversalConstant _UniversalConstants;
#define _UniversalConstants UniversalConstants
int lcm2(int num1,int num2);
int lcm2s(int num1,int num2);
int lcm(int a[],int n);
void printDivide(long dividend, long divisor, long decimalPlace);
char *getDivide(long dividend, long divisor, unsigned long decimalPlace);
int revnum(int n);
int countDigits(long int num);
int HEXtoDEC(int number);
float interestCompound(float c,float r,float n,float time);
float interestContinuous(float c,float r,float time);
__END_DECLS

#endif