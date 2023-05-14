#include <stdio.h>

void ausgabe(double **list,int Anzahl){                                                // Eingegebene Liste als Parameter
    int counter=0;
    puts("(2) Daten ausgeben:");
    puts("--------------------");
    if (list!=0) {
        for (counter=0; counter<Anzahl; ++counter) {
            printf("%d.\tPunkt : x: %g\n",counter+1,list[counter][0]);          // Punkt x anzeigen
            printf("\tPunkt : y: %g\n",list[counter][1]);                       // Punkt y anzeigen
        }
        puts("Zur Fortsetzung <Enter> drücken");                                
        getchar();                                                              // Auf <Enter> warten
    }

    return;                                                                 // Kein Rückgabe
}