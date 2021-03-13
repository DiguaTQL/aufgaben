#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
const double PI=3.14159365;

int main ()
{
    complex double  U3 ,I3 ,Z3, Y3;
    double  w, R3r, L3r, R3p, L3p;

    w=2.0*PI*50.0;
    U3=0.8*cexp(-I * 77/180 * PI);
    I3=(40e-6)*cexp(-I * 107/180 * PI);
    Z3=U3/I3;

    printf("Z3 = %g Ohm + j (%g) Ohm \n", creal(Z3), cimag(Z3));
    printf("Z3  = %g Ohm + exp(j * %g) \n", creal(Z3), carg(Z3)/PI*180.0);

    // Berechung in Reihenschaltung
    R3r=creal(Z3);
    L3r=cimag(Z3)/w;
    printf("In Reihenschaltung : R3r = %g Ohm; L3r = %g H\n", R3r, L3r );

	// Berechung in Paralleschaltung
	Y3=1./Z3;
	R3p=1./creal(Y3);
	L3p=-1./(cimag(Y3)*w);
    printf("In Paralleschaltung : R3p = %g Ohm; L3p = %g H\n", R3p, L3p );


    return 0;
}