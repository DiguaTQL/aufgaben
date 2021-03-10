#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


double cal(int R1,int R2, int R3,int R4, int R5, int R6, int R7, int R8,int R9, int R0)
{
    double R90,R890,R7890,R67890,R567890,R4567890,R34567890,R234567890,R1234567890;
 
    R90=R9+R0;
    R890=R8*R90/(R8+R90);
    R7890=R7+R890;
    R67890=R6*R7890/(R6+R7890);
    R567890=R5+R67890;
    R4567890=R4*R567890/(R4+R567890);
    R34567890=R3+R4567890;
    R234567890=R2*R34567890/(R2+R34567890);
    R1234567890=R1+R234567890; 
 
    return R1234567890;
}



int main()
{
    //Variablen Deklaration für Aufgabe 1
    int R1=390, R2=560, R3=820, R12;
    double R123;

    //Rechnenweg
    R12 = R1 + R2 ;
    R123= R12*R3 / (double)(R12+R3);

    //Ausgabe
    printf("Aufgabe 1: Ersatzwiderstand einer gemischten Schaltung\n");
    printf("a)R1, R2, R3, R12, R123\n");
    printf("b)R1, R2, R3\n");
    printf("c)int für R1, R2, R3, R12, 16 Bits und Ganzzahl\n");
    printf("  double für R123, bessere Genaurichkeit\n");
    printf("d)Hand berechnen\n");
    printf("e)R123=%g\u03A9\n\n",R123);
    
    //Variablen Deklaration für Aufgabe 2
    int Ug=5;
    double Uf=3.6,If=20e-3, Ur, Rv, Pr ; 

    //Rechnenweg
    Ur=Ug-Uf;
    Pr=Ur*If;
    Rv=Ur/If;

    //Ausgabe
    printf("Aufgabe 2: Vorwiderstand für eine Leuchtdiode\n");
    printf("a)Ug, If, Uf, Ur, Rv, Pr\n");
    printf("b)Ug, If, Uf\n");
    printf("c)Hand berechnen\n");
    printf("d)Nein, Rechnung 4 muss vor 3 sein.\n");
    printf("e)Programm wird falsche Wert ausdrücken\n");
    printf("f)Ur=%gV, Rv=%g\u03A9, Pr=%gW\n\n",Ur,Rv,Pr);

    //Ausgabe
    
    printf("Aufgabe 3 \n");

    // pid_t p = fork();
    double resout, resout_2;
    // if(p==0){
        //parent
        resout=cal(1000,1000,1000,1000,1000,1000,1000,1000,1000,1000);
        printf("a)Ersatzwiderstand ist: %g \u03A9\n",resout);
        // }
    // else{
        //child
        resout_2=cal(100,10000,100,1000,100,10000,100,10000,100,10000);
        printf("b)Ersatzwiderstand ist: %g \u03A9\n",resout_2);
    // }


    return 0;
}