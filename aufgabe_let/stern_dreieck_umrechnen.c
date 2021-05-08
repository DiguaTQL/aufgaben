#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <math.h>
const double PI=3.14159265;

int main()
{
    double r3s, r5s, U12, T;
    complex double r3d,r4d,r5d,r4s, Z1, Z2, U1, U2, I1, I2, I5, Z1_R3d, Z2_R5d, Rg;

    /*
    ---------Z1-----------Z2--------
    |               |               |
    |               |               |  
    |               R5s             |
    |               |               |
    |               |               |  
    ---------R3s-----------Z4s--------
    
    */
    Z1=4.8*cexp(I*30./180.*PI);
    Z2=6.2-I*2.3;
    
    /*Ra*/r3s=12.8;
    /*Rb*/r5s=8.6;
    /*Rc*/r4s=4.8*cexp(-I*45.0/180.0*PI);
 
    r3d=((r3s*r5s)/r4s)+r3s+r5s;
    r5d=((r4s*r5s)/r3s)+r4s+r5s;
    r4d=((r3s*r4s)/r5s)+r3s+r4s;

    printf("\nR3d in Dreieck: %g \u03A9\nR5d in Dreieck: %g \u03A9\nR4d in Dreieck: %g \u03A9\n",r3d,r5d,r4d);

    /*
    ---------Z1-----------Z2--------|
    |               |               |
    |               |               |  
    |               |               |
    |               |               |
    |               |               |  
    ---------R3d-----------R5d------|
    |                               |
    |---------------R4d-------------|
    |                               |
    1                               2 
    */
    U12=10.*sin(2.*PI*50.*0);//T muss noch inplemtieren
    Z1_R3d=1./(1./Z1+1./r3d);
    Z2_R5d=1./(1./Z2+1./r5d);
    Rg=1./(1./r4d+1./(Z1_R3d+Z2_R5d));

    printf("\nRg ist :%g \u03A9\n",Rg);



}