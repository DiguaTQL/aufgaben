#include <stdio.h>
#include "language.c"
#include "anzahlring.c"
#include "inputcode.c"

struct resistor{
    int Ring_1_nr, Ring_2_nr, Ring_3_nr, Multifakt, Tempko;
    char Toleranz[10];
};

int main(void){
    /*
    0.Sparche auswählen                 von language.c Rückgabe int. -done
    1.Abfragen Anzahl der Ringe         von anzahlring.c Rückgabe int. -done.
    2.Eingabe/Fabecode Beispeile fr-fr-fr-fr-fr so...    
    2.5 Eingabe abfragen                von inputcode.c Rückgabe char.
    3.if Eingabe nicht korrekt, dann analysieren welche Feherl und Fehler Tipps ausgeben
    3.5 Eingabe wieder abfragen
    4.wenn Eingabe richtig sind, dann berechnen.
    5.Wert anzeigen

    struct resistor{
        int Ring_1_nr, Ring_2_nr, Ring_3_nr, Multifakt, Tempko;
        char Toleranz[10];
    }

    Aufruf durch resistor.Ring_1_nr, resistor.Ring_2_nr...

    SparcheCode 0=Englisch, 1=Deutsch

    */

    // 1
    int languageNr=languange();
    int iRingAnzahl=AnzahlRing(languageNr);
    char *farbecode=inputcode(iRingAnzahl,languageNr);


}
