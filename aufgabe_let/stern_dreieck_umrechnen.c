#include <stdio.h>
#include <math.h>
#include <complex.h>
const double PI=3.14159265;

int main()
{
    double r1s, r1d ,r2s, r2d, r3s, r3d;

    /*
    printf("R1 in Stern:");
    scanf("%lf",&r1s);

    printf("R2 in Stern:");
    scanf("%lf",&r2s);
    
    printf("R3 in Stern:");
    scanf("%lf",&r3s);
    */
    r1s=12.8;
    r2s=8.6;
    r3s=4.8*cexp(-I*45.0/180.0*PI);

    r1d=r1s*r3s/(r1s+r2s+r3s);
    r2d=r1s*r2s/(r1s+r2s+r3s);
    r3d=r2s*r3s/(r1s+r2s+r3s);

    printf("\nR1 in Dreieck: %g \u03A9\nR3 in Dreieck: %g \u03A9\nR3 in Dreieck: %g \u03A9\n",r1d,r2d,r3d);

}