#include <stdio.h>
#include <stdlib.h>

int main(void){
    char prg_nr[13]="0123456789a 0";
    int i=0,counter =0;
    double **points=0;                                            // Pointliste ist ein Pointer auf Pointer

    do {
    
        ++i;
        switch (prg_nr[i]) {
            case 48:// (0) Ende     ASCII 48 = 0
                printf("Menüauswahl: %c\n",prg_nr[i]);
                puts("Programm Ende!");
                break;
            
            case 49:// (1)Daten aufnehmen       ASCII 49 = 1
                //points=eingabe(&counter);
                printf("Menüauswahl: %c\n",prg_nr[i]);
                puts("Hier wird Funktion eingabe(int *count) aufgerufen.\n");
                break;
            
            case 50:// (2)Daten ausgeben        ASCII 50 = 2
                printf("Menüauswahl: %c\n",prg_nr[i]);
                puts("Hier wird Funktion ausgabe(double **list,int Anzahl) aufgerufen.");
                if (points!=0) {
                    //ausgabe(points,counter);
                    puts("Hier wird Funktion ausgabe(double **list,int Anzahl) aufgerufen.");
                }
                else
                {
                    puts("Wenn keine Daten auf dem Bildschirm ausgegeben werden können, wird folgende Fehlermeldung ausgegeben:");
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 51:// (3)Daten korrigieren     ASCII 51 = 3
                printf("Menüauswahl: %c\n",prg_nr[i]);
                puts("Hier wird Funktion korrektur(double** list, int Anzahl) aufgerufen.");
                if (points!=0) {
                    //points=korrektur(points,counter);
                    puts("Hier wird Funktion korrektur(double** list, int Anzahl) aufgerufen.");
                }
                else
                {
                    puts("Wenn keine Daten korrigiert werden können, wird folgende Fehlermeldung ausgegeben:");
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 52:// (4)Daten speichern       ASCII 52 = 4
                printf("Menüauswahl: %c\n",prg_nr[i]);
                puts("Hier wird Funktion speichern(double** liste, int Anzahl) aufgerufen.");
                if (points!=0) {
                    //speichern(points,counter);
                    puts("Hier wird Funktion speichern(double** liste, int Anzahl) aufgerufen.");
                }
                else
                {
                    puts("Wenn keine Daten gespeichert werden können, wird folgende Fehlermeldung ausgegeben:");
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 53:// (5)Daten laden           ASCII 53 = 5
                printf("Menüauswahl: %c\n",prg_nr[i]);
                //points=laden(&counter);
                puts("Hier wird Funktion laden(int *Anzahl) aufgerufen.");
                if (points==0) {
                    puts("Wenn keine Daten von Datei geladen werden können, wird folgende Fehlermeldung ausgegeben:");
                    puts("Keine Daten vorhand!\n");
                }
                break;
            
            case 54:// (6)Ausgleichsgerade ermitteln    ASCII 54 = 6
                printf("Menüauswahl: %c\n",prg_nr[i]);
                puts("Hier wird Funktion berechnung(double** liste, int Anzahl) aufgerufen.");
                if (counter == 1) {
                    puts("Ausgleichsgerade existiert nicht, da nur ein Punkt vorhanden ist.\n");
                }
                else if (points!=0) {
                    //berechnung(points,counter);
                    puts("Hier wird Funktion berechnung(double** liste, int Anzahl) aufgerufen.");
                }
                else
                {
                    puts("Wenn keine Daten zur Ausgleichsgerade ermittelt werden können, wird folgende Fehlermeldung ausgegeben:");
                    puts("Keine Daten vorhand!\n");
                }
                break;

            case 55:// (7)Grafik erstellen              ASCII 55 = 7
                printf("Menüauswahl: %c\n",prg_nr[i]);
                if (counter == 1) {
                    puts("Ausgleichsgerade existiert nicht, da nur ein Punkt vorhanden ist.\n");
                }
                else if (points!=0) {
                    //grafik(points,counter);
                    puts("Hier wird Funktion grafik(double** liste, int Anzahl) aufgerufen.");
                }
                else
                {
                    puts("Wenn keine Daten zur Grafikerstellung verwendet werden können, wird folgende Fehlermeldung ausgegeben:");
                    puts("Keine Daten vorhand!\n");
                }
                break;

            default:
                printf("Menüauswahl: %c\n",prg_nr[i]);
                puts("Eingabe ungültig!\n");

        }
    }while ( prg_nr[i] != 48);

    return 0;
}   