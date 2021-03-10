#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
const double PI=3.14159265;

int main ()
{
    complex double  U2 ,I2 ,Z2, Y2;
    double  w, R2r, C2r, R2p, C2p;

    w=2.0*PI*50.0;
    U2=1.2*cexp(-I*90/180*PI);//sinus corver
    I2=0.120*cexp(-I*30/180*PI);
    Z2=U2/I2;

    printf("Z2 = %g \u03A9 + j (%g) \u03A9 \n", creal(Z2), cimag(Z2));
    printf("Z2  = %g \u03A9 + exp(j * %g°) \n", creal(Z2), carg(Z2)/PI*180.0);

    // Berechung in Paralleschaltung
    R2r=creal(Z2);
    C2r=1/(-cimag(Z2)*w);//mit Kondesator
    printf("R2r = %g \u03A9; L2r = %g F\n", R2r, C2r );

	// Berechung in Paralleschaltung
	Y2=1/Z2;
	R2p=1/creal(Y2);
	C2p=cimag(Y2)/w;//mit Kondesator
    printf("R2p = %g \u03A9; L2p = %g F\n", R2p, C2p );


    return 0;
}