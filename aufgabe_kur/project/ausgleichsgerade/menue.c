#include <stdio.h>
#include <stdlib.h>

int menue(void){
    int prg_nr=0;

    puts("Berechnung einer Ausgleichsgeraden");                     // Menü anzeigen
    puts("==================================");
    puts("(1) Daten aufnehmen");
    puts("(2) Daten ausgeben");
    puts("(3) Daten korrigieren");
    puts("(4) Daten speichern");
    puts("(5) Daten laden");
    puts("(6) Ausgleichsgerade ermitteln");
    puts("(0) Ende");
    puts("Treffen Sie eine Wahl:");

    scanf("%d",&prg_nr);                                            // Menü Nummer lesen
    while (getchar()!='\n') {}                                      
    return prg_nr;                                                  // Menü Nummer zurückgeben

}