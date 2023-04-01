#include <stdio.h>
#include <stdlib.h>
#include "menue.c"

int main(void){
    int prg_nr=0;
    double *points;

    //for(int x=0, x < 2, ++x){
    //    points[x]=(double*)calloc(unsigned long, sizeof(double))
    //}

    do {
    
        prg_nr=menue();
        printf("Ihre Wahl ist %d.\n",prg_nr);


        switch (prg_nr) {
            case 0:// (0) Ende
                puts("Programm Ende!");
                break;
            
            case 1:// (1)Daten aufnehmen
                break;
            
            case 2:// (2)Daten ausgeben
                break;
            
            case 3:// (3)Daten korrigieren
                break;
            
            case 4:// (4)Daten speichern
                break;
            
            case 5:// (5)Daten laden
                break;
            
            case 6:// (6)Ausgleichsgerade ermitteln
                break;


        
        }
    }while ( prg_nr != 0);

    return 0;
}   