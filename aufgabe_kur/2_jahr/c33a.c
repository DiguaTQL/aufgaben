#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

const double pi=3.14159265359;

void einsa(){
    double L,B,H,AD;
    printf("\n1a)satteldach.c\nBitte geben Sie die folgende Abmessungen ein:\n");
    printf("Breit(m):");
    scanf("%lf",&B);
    printf("Höhe(m):");
    scanf("%lf",&H);
    printf("Länge(m):");
    scanf("%lf",&L);

    AD=2.*sqrt((B*B/4)+(H*H))*L;
    printf("Dachoberfläche AD sind %g m² groß.\n",AD);
    return;
};
void einsb(){
    double f,L,Rv,ZL;
    printf("\n1b)realespule1.c\nBitte geben Sie die folgende Werten ein:\n");
    printf("Frequenz(Hz):");
    scanf("%lf",&f);
    printf("Induktivität(mH):");
    scanf("%lf",&L);
    printf("Verlustwiderstand(\u03A9):");
    scanf("%lf",&Rv);

    ZL=sqrt(pow(2.*pi*f*L/1000, 2.0)+Rv*Rv);
    printf("Scheinwiderstand ZL ist %g \u03A9.\n",ZL);

    return;
};
void einsc(){
    double f,L,Q,ZL,XL,Rv;
    printf("\n1c)realespule2.c !!!Rechenweg nicht garantiert!!!\nBitte geben Sie die folgende Werten ein:\n");
    printf("Frequenz(Hz):");
    scanf("%lf",&f);
    printf("Induktivität(mH):");
    scanf("%lf",&L);
    printf("Güte:");
    scanf("%lf",&Q);

    XL=2*pi*f*L/1000;
    Rv=XL/Q;

    ZL=sqrt(XL*XL+Rv*Rv);
    printf("Scheinwiderstand ZL ist %g \u03A9.\n",ZL);


    return;
};
void einsd(){
    double U0,Uc,Tz,C,R,I;
    printf("\n1d)rcentlade1.c\nBitte geben Sie die folgende Werten ein:\n");
    printf("Anfangsspannung(V):");
    scanf("%lf",&U0);
    printf("Kapazität(uF):");
    scanf("%lf",&C);
    printf("Widerstand(\u03A9):");
    scanf("%lf",&R);
    printf("Zeitdauer(s):");
    scanf("%lf",&Tz);

    Uc=U0*exp(-1*Tz/(R*C/1000000));
    printf("Restspannung Uc sind %g V.\n",Uc);

    return;
};
void einse(){
    double U0,Ux,Tx,C,R;
    printf("\n1e)rcentlade2.c\nBitte geben Sie die folgende Werten ein:\n");
    printf("Anfangsspannung(V):");
    scanf("%lf",&U0);
    printf("Zielspannung(V):");
    scanf("%lf",&Ux);
    printf("Kapazität(uF):");
    scanf("%lf",&C);
    printf("Widerstand(\u03A9):");
    scanf("%lf",&R);
    
    Tx=-R*C*log(Ux/U0)/1000000;
    printf("Es dauert Tx %g s.\n",Tx);

    return;
};
void einsf(){
    double Ue,Ua,Vu,Au;
    printf("\n1f)dezibel.c\nBitte geben Sie die folgende Werten ein:\n");
    printf("Eingangsspannung(V):");
    scanf("%lf",&Ue);
    printf("Ausgangsspannung(V):");
    scanf("%lf",&Ua);

    Vu=Ua/Ue;
    Au=20*log10(Vu);
    printf("Der Verstärkungsfaktor Vu ist %g, Das Verstärkungsmaß ist %g dB.\n",Vu,Au);
    
    return;
};
void einsg(){
    double MSG,ABB;
    printf("\n1g)berechne_abb.c\nBitte geben Sie die folgende Werten ein:\n");
    printf("MSG:");
    scanf("%lf",&MSG);
    
    ABB=round(log(MSG)/log(2.0));
    printf("Die Adressbusbreit ABB ist %g.\n",ABB);

    return;
};
void zweia(){
    printf("\n2a)loga(a,x)\n");
    puts("Syntext ist loga=loga=log(x)/log(a)\n");
    return;
};
double loga(double a,double x){
    double loga;
    if (a==0 || a==1|| a<0 || x<0) {
        puts("loga Input Invalid!");
    }
    else {
        loga=log(x)/log(a);
        return loga;
    }
    return 0;
}

void zweib(){
    double a,x;
    printf("\n2b)loga.c\nBitte geben Sie die folgende Werten ein:\n");
    printf("Basis a:");
    scanf("%lf",&a);
    printf("Logarithmen:");
    scanf("%lf",&x);

    printf("%g ist der Lofarithmus von %g zur Basis %g.\n",loga(a,x),x,a);

    return;
};


int main(){
    char aufgabe[2];
    printf("Bitte Aufgabe Nummer <1a-2b> eingeben:");
    scanf("%s",aufgabe);

    if (aufgabe[0]=='1') {

        switch (aufgabe[1]) {
            case 'a':
                einsa();
                break;

            case 'b':
                einsb();
                break;

            case 'c':
                einsc();
                break;

                
            case 'd':
                einsd();
                break;

                
            case 'e':
                einse();
                break;

                
            case 'f':
                einsf();
                break;

                
            case 'g':
                einsg();
                break;

            default:
                puts("Input Invalid!");
                return 1;
        }
        return 0;
    }
    else if (aufgabe[0]=='2') {
    
       switch (aufgabe[1]) {     
        case 'a':
            zweia();
            break;

            
        case 'b':
            zweib();
            break;

        default:
            puts("Input Invalid!");
            return 1;
       }
       return 0;
       
    }
    else {
        puts("Input Invalid!");
        return 1;
    }



            
    

}
