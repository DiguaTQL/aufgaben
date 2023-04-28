#include <stdio.h>
#include <stdlib.h>
#include "menue.c"
#include "aufnehmen.c"
#include "ausgeben.c"
#include "datafix.c"

int main(void){
    int prg_nr=0;
    double **points;

    do {
    
        prg_nr=menue();
        //printf("Ihre Wahl ist %d.\n",prg_nr);


        switch (prg_nr) {
            case 0:// (0) Ende
                puts("Programm Ende!");
                break;
            
            case 1:// (1)Daten aufnehmen
                points=eingabe();
                break;
            
            case 2:// (2)Daten ausgeben
                showlist(points);
                break;
            
            case 3:// (3)Daten korrigieren
                points=fix(points);
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