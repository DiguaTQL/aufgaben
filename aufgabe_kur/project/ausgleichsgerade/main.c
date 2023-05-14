#include <stdio.h>
#include <stdlib.h>
#include "menue.c"
#include "aufnehmen.c"
#include "ausgeben.c"
#include "datafix.c"
#include "savefile.c"
#include "loadfile.c"
#include "calculate.c"
#include "grafik.c"

int main(void){
    char prg_nr;
    int counter=0;
    double **points=0;                                            // Pointliste ist ein Pointer auf Pointer

    do {
    
        prg_nr=menue();

        switch (prg_nr) {
            case 48:// (0) Ende     ASCII 48 = 0
                puts("Programm Ende!");
                break;
            
            case 49:// (1)Daten aufnehmen       ASCII 49 = 1
                points=eingabe(&counter);
                break;
            
            case 50:// (2)Daten ausgeben        ASCII 50 = 2
                if (points!=0) {
                    ausgabe(points,counter);
                }
                else
                {
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 51:// (3)Daten korrigieren     ASCII 51 = 3
                if (points!=0) {
                    points=korrektur(points,counter);
                }
                else
                {
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 52:// (4)Daten speichern       ASCII 52 = 4
                if (points!=0) {
                    speichern(points,counter);
                }
                else
                {
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 53:// (5)Daten laden           ASCII 53 = 5
                points=laden(points,&counter);
                if (points==0) {
                
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 54:// (6)Ausgleichsgerade ermitteln    ASCII 54 = 6
                if (points!=0) {
                    berechnung(points,counter);
                }
                else
                {
                    puts("Keine Daten vorhand!\n");
                }
                break;

            case 55:// (7)Grafik erstellen              ASCII 55 = 7
                if (points!=0) {
                    grafik(points,counter);
                }
                else
                {
                    puts("Keine Daten vorhand!\n");
                }
                break;

            default:
                puts("Eingabe ungültig!\n");

        }
    }while ( prg_nr != 48);

    return 0;
}   