//
//  Mathematics.c
//  Open C Library
//
//  Created by Abhishek Munie on 23/09/11.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "Mathematics.h"

const struct UniversalConstant _UniversalConstants = {
    /*Pi =*/ 3.1415926535897932384626433832795,
    /*g =*/ 9.80665,
    /*L =*/ 6.02214199e23,
    /*k =*/ 1.3806503e-23,
    /*e_o =*/ 8.85418781762e-12,
    /*e =*/ 1.602176462e-19,
    /*m_e =*/ 9.10938188e-31,
    /*F =*/ 9.6485309e4,
    /*R =*/ 8.314472,
    /*G =*/ 6.67259e-11,
    /*N_L =*/ 2.686763e25,
    /*mu_o =*/ 4*3.1415926535897932384626433832795e-7,
    /*h =*/ 6.6260755e-34,
    /*m_n =*/ 1.6749286e-27,
    /*m_p =*/ 1.6726231e-27,
    /*c =*/ 229792458,
    /*sigma =*/ 5.67051e-8,
    /*r_o =*/ 1.414e-15,
};

int lcm2(int num1,int num2) {
    int lcm = 1, i=2;
    while (num1!=1||num2!=1) {
        if (num1%i==0||num2%i==0) {
            lcm *=i;
            if (num1%i==0)
                num1 /= i;
            if (num2%i==0)
                num2 /= i;
            
        }
        if (num1%i&&num2%i)
            i++;
    }
    
    return lcm;
}

int lcm2s(int num1,int num2) {
    int lcm=0,i=1;
    while (!lcm){
        if (num1*i%num2==0){
            lcm=num1*i;
            break;
        }
        i++;
    }
    return lcm;
}


int lcm(int a[],int n){
    int lcm = a[0];
    int i;
    for(i=1;i<n;i++)
        lcm = lcm2(lcm, a[i]);
    return lcm;
}


int countDigits(long int n) {
    int digit = 0;
    while(n){
        digit++;
        n/=10;
    }
    return digit;
}

void printDivide(long dividend, long divisor, long decimalPlace) {
    long a,b,c,d;
    bool h=false;
    bool r=false;
    long f=1;
    while (dividend < divisor) {
        if (!r) {
            printf("0.");
            h = r = true;
        } else {
            printf("0");
            dividend = dividend * 10;
            f++;
        }
    }    a = dividend / divisor;
    if (!h)
        printf("%ld.",a);
    else {
        printf("%ld",a);
        f++;
    }
    b = dividend % divisor;
    while (f <= decimalPlace) {
        c = b * 10;
        while((c < divisor) && (f < decimalPlace)) {
            c = c * 10;
            printf("0");
            f++;
        }
        d = c / divisor;
        printf("%ld",d);
        b = c % divisor;
        f++;
    }
}

char *getDivide(long dividend, long divisor, unsigned long decimalPlace) {
    long a,b,c,d;
    bool h=false;
    bool r=false;
    long f=1;
    char *s = malloc(decimalPlace+countDigits(dividend/divisor)+2);
    while (dividend < divisor) {
        if (!r) {
            sprintf(s,"0.");
            h = r = true;
        } else {
            sprintf(s,"0");
            dividend = dividend * 10;
            f++;
        }
    }    a = dividend / divisor;
    if (!h)
        sprintf(s,"%ld.",a);
    else {
        sprintf(s,"%ld",a);
        f++;
    }
    b = dividend % divisor;
    while (f <= decimalPlace) {
        c = b * 10;
        while((c < divisor) && (f < decimalPlace)) {
            c = c * 10;
            sprintf(s,"0");
            f++;
        }
        d = c / divisor;
        sprintf(s,"%ld",d);
        b = c % divisor;
        f++;
    }
    
    return s;
}

int revnum(int n) {
    int rev = 0;
    while (n) {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return rev;
}

//This is a WIP Converts a Hexadecimal into a decimal
int HEXtoDEC(int number) {
    int power=0,r1,r2,r3,final;
    int A = number / 100;
    int B = (number % 100) / 10;
    int C = (number % 100) % 10;
    /*DEBUG PURPOUSES:printf("%d , %d , %d\n",A,B,C); */
    
    r1 = C * 1;
    r2 = B * 16;
    r3 = A * 256;
    //TODO: take r4 and D so i can have 4 digit hexs
    final = r1 + r2 + r3;
    
    /*DEBUG PURPOUSES:printf("0x%03d = %d in decimal!",number,final);*/
    return final;
}

float interestCompound(float c,float r,float n,float time) {
    float p=0.0; //is the future value (return value)
    float ex = n*time;
    p = pow((1.0 + (r/n)),ex);
    return p *= c;
}
float interestContinuous(float c,float r,float time) { //Accurate to about 10 decimal places
    double EC = 2.718281828469;
    float p=0.0; //is the future value (return value)
    float ex = r*time;
    return p = c * (pow((double)EC,ex));
}