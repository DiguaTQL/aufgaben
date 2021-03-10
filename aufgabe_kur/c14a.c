#include <stdio.h>

int main()
{   
    //Aufgabe 1 
    //Variable deklaration
    int m1, m2, T1, T2, mges;
    double Tges;

    //Wert Eingabe
    printf("Aufgabe 1: Mischung zweier Flüssigkeiten\n");
    printf("\nBitte geben Sie die Menge 1 in L ein:");
    scanf("%d",&m1);
    printf("Bitte geben Sie die Temperatur 1 in °C ein:");
    scanf("%d",&T1);
    printf("\nBitte geben Sie die Menge 2 in L ein:");
    scanf("%d",&m2);
    printf("Bitte geben Sie die Temperatur 2 in °C ein:");
    scanf("%d",&T2);

    //Rechnen
    mges=m1+m2;
    Tges=(m1*T1+m2*T2)/(double)mges;

    //Ausgabe
    printf("\nDie Gesamtmenge mges sind %d L\n",mges);
    printf("Die Gesamttemperatur Tges sind %g °C\n\n\n",Tges);


    //Aufgabe 2
    //Variable deklaration
    int U0, fu, Bmin;
    double Ptot, R1, IQ, UR1, UR2, UCE, IB, Ic, UR4, C1, R2, R3, R4, UR3, C2, C3, IBmax, PR1, PR2, PR3, PR4, IR1,IR4; 
    const double pi=3.14159265;

    //Wert Eingabe
    printf("Aufgabe 2: Berechnung einer Emitterschaltung\n");
    printf("Bitte geben Sie den Parameter U0 in V ein: ");
    scanf("%d",&U0);
    printf("Bitte geben Sie den Parameter fu in Hz ein: ");
    scanf("%d",&fu);
    printf("Bitte geben Sie den Parameter Ptot in w ein: ");
    scanf("%lf",&Ptot);
    printf("Bitte geben Sie den Parameter Bmin ein: ");
    scanf("%d",&Bmin);

    UCE=U0/2.;
    UR4=U0/10.;
    UR3=U0-UCE-UR4;
    Ic=Ptot/UCE;
    R3=UR3/Ic;
    R4=UR4/Ic;
    UR2=UR4+0.7;
    UR1=U0-UR2;
    IBmax=Ic/Bmin;
    IQ=10.*IBmax;
    R1=UR1/IQ;
    R2=UR2/IQ;
    C1=C2=1./(2*pi*fu*(R1*R2/(R1+R2)));
    C3=1./(2*pi*fu*R4);
    IR1=IBmax+IQ;
    PR1=UR1*IR1;
    PR2=UR2*IQ;//IR2=IQ;
    PR3=UR3*Ic;//IR3=Ic;
    IR4=UR4/UR4;
    PR4=UR4*IR4;

    printf("\nR1 = %g \u03A9; UR1 = %g V; IR1 = %g A; PR1 = %g W\n",R1,UR1,IR1,PR1);
    printf("R2 = %g \u03A9; UR2 = %g V; IR2 = %g A; PR2 = %g W\n",R2,UR2,IQ/*IR2=IQ*/,PR2);
    printf("R3 = %g \u03A9; UR3 = %g V; IR3 = %g A; PR3 = %g W\n",R3,UR3,Ic/*IR3=Ic*/,PR3);
    printf("R4 = %g \u03A9; UR4 = %g V; IR4 = %g A; PR4 = %g W\n",R4,UR4,IR4,PR4);
    printf("\n C1 = %e F, C2 = %e F, C3 = %e F\n",C1,C2,C3);
    printf("IBmax = %g A, UCE = %g V\n",IBmax,UCE);

    return 0;
}