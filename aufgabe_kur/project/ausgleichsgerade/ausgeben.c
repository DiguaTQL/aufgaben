#include <stdio.h>

void showlist(double **list){                                                // Eingegebene Liste als Parameter
    int counter=0;
    puts("(2) Daten ausgeben:");
    puts("--------------------");

    do {
        printf("%d.\tPunkt : x: %g\n",counter+1,list[counter][0]);          // Punkt x anzeigen
        printf("\tPunkt : y: %g\n",list[counter][1]);                       // Punkt y anzeigen
        ++counter;
    }while ((list[0][0]!=list[counter][0] && list[0][1]!=list[counter][1])|| counter <1);
    puts("Zur Fortsetzung <Enter> drücken");                                
    getchar();                                                              // Auf <Enter> warten
    return;                                                                 // Kein Rückgabe
}