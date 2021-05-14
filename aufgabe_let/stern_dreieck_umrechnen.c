#include <stdio.h>
#include <math.h>
#include <complex.h>
const double PI=3.14159265;

int main()
{
    int T_int;
    double r3s, r5s, T,Ts[]={0.001,0.002,0.005,0.01};
    complex double r3d, r4d, r5d, r4s, Z1, Z2, Z1_R3d, Z2_R5d, Rg;//Widerstand
    complex double U12, Uz1, Uz2, Uz12;//Spannung
    complex double I1, I2, I5, Ig, Ir4d, Ibrueck;//Strom
    
    /*

    |--------Z1-----------Z2--------|
    |               |               |
    |               |               |  
    |              R5s              |
    |               |               |
    |               |               |  
    |--------R3s-----------Z4s------|
    |                               |
    1                               2 
    
    */
    //Widerstand deklaieren
    Z1=4.8*cexp(I*30./180.*PI);
    Z2=6.2-I*2.3;
    
    /*Ra*/r3s=12.8;
    /*Rb*/r5s=8.6;
    /*Rc*/r4s=4.8*cexp(-I*45.0/180.0*PI);

    //Stern Dreieck Umwandlung
    r3d=((r3s*r5s)/r4s)+r3s+r5s;
    r5d=((r4s*r5s)/r3s)+r4s+r5s;
    r4d=((r3s*r4s)/r5s)+r3s+r4s;

    //printf("\nR3d in Dreieck: %g +i* %g \u03A9\nR5d in Dreieck: %g +i* %g \u03A9\nR4d in Dreieck: %g +i* %g \u03A9\n",creal(r3d),cimag(r3d),creal(r5d),cimag(r5d),creal(r4d),cimag(r4d));

    /*
    |--------Z1-----|-----Z2--------|
    |               |               |
    |               |               |  
    |               |               |
    |               |               |
    |               |               |  
    |--------R3d----|------R5d------|
    |                               |
    |--------------R4d--------------|
    |                               |
    1                               2 
    */


    //Gesamtwiderstand
    Z1_R3d=1./(1./Z1+1./r3d);
    Z2_R5d=1./(1./Z2+1./r5d);
    Rg=1./(1./r4d+1./(Z1_R3d+Z2_R5d));

    //printf("\nRg ist :%g +i* %g \u03A9\n",creal(Rg),cimag(Rg));
    
    //Schleife für Rechnen
    for (T_int=0; T_int<4; T_int++) {
        //Zeit array aufrufen
        T=Ts[T_int];
        /*
        //verschiedene Zeit
        switch (T_int) {
            case 1:
                T=0.001;// 1 ms              
                break;
            case 2:
                T=0.002;// 2 ms             
                break;
            case 3:
                T=0.005;// 5 ms            
                break;
            case 4:
                T=0.01;// 10 ms
                break;

        }
        */
        U12=10*cos(2.*PI*50*T-90./180.*PI)+I*10*sin(2.*PI*50*T-90./180.*PI);

        Ig=U12/Rg;
        printf("T=%g s",T);
        //printf("Ig = %g +i*%g A \n",creal(Ig),cimag(Ig));

        Ir4d=U12/r4d;
        //printf("\tIR4d = %g +i*%g A\n",creal(Ir4d),cimag(Ir4d));

        Ibrueck=Ig-Ir4d;   
        //printf("\tIbrueck = %g +i*%g A\n",creal(Ibrueck),cimag(Ibrueck));

        Uz1=Ibrueck*Z1_R3d;
        Uz2=Ibrueck*Z2_R5d;

        //printf("\tUz1 = %g +i*%g V\n",creal(Uz1),cimag(Uz1));
        //printf("\tUz2 = %g +i*%g V\n",creal(Uz2),cimag(Uz2));

        /*
        Uz12=Uz1+Uz2;
        printf("\tU12 = %g +i*%g V\n",creal(U12),cimag(U12));
        printf("\tUz12 = %g +i*%g V\n",creal(Uz12),cimag(Uz12));
        */

        I1=Uz1/Z1;
        I2=Uz2/Z2;
        I5=I1-I2;
        printf("\tI5 = %g +i*%g A\n",creal(I5),cimag(I5));

    }


}