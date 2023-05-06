#include <stdio.h>
#include <stdlib.h>
#include "menue.c"
#include "aufnehmen.c"
#include "ausgeben.c"
#include "datafix.c"
#include "savefile.c"

int main(void){
    int prg_nr=0,counter=0;
    double **points=0;                                            // Pointliste ist ein Pointer auf Pointer

    do {
    
        prg_nr=menue();

        switch (prg_nr) {
            case 0:// (0) Ende
                puts("Programm Ende!");
                break;
            
            case 1:// (1)Daten aufnehmen
                points=eingabe(&counter);
                break;
            
            case 2:// (2)Daten ausgeben
                if (points!=0) {
                    ausgabe(points);
                }
                else
                {
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 3:// (3)Daten korrigieren
                if (points!=0) {
                    points=korrektur(points,counter);
                }
                else
                {
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 4:// (4)Daten speichern
                if (points!=0) {
                    speichern(points,counter);
                }
                else
                {
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 5:// (5)Daten laden
                if (points!=0) {
                    points=laden(points,counter);
                }
                else
                {
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 6:// (6)Ausgleichsgerade ermitteln
                if (points!=0) {
                    ;
                }
                else
                {
                    puts("Keine Daten vorhand!\n");
                }
                break;

            default:
                puts("Eingabe ungültig!\n");

        }
    }while ( prg_nr != 0);

    return 0;
}   