#include <stdio.h>
#include "resistor.h"
#include "language.c"
#include "anzahlring.c"
#include "inputcode.c"
#include "codecheck.c"

/*
struct resistor{
    int Ring_1_nr, Ring_2_nr, Ring_3_nr, Multifakt, Tempko;
    char Toleranz[10];
};
*/

int main(void){
    /*
    0.Sparche auswählen                 von language.c Rückgabe int. -done
    1.Abfragen Anzahl der Ringe         von anzahlring.c Rückgabe int. -done.
    2.Eingabe/Fabecode Beispeile fr-fr-fr-fr-fr so...    
    2.5 Eingabe abfragen                von inputcode.c Rückgabe char. -done
    3.if Eingabe nicht korrekt, dann analysieren welche Feherl und Fehler Tipps ausgeben        von codecheck.c Rückgabe char. 
    3.5 Eingabe wieder abfragen         von inputcode.c Rückgabe char. -done
    4.wenn Eingabe richtig sind, dann berechnen.    von ausrechnen.c -done
    5.Wert anzeigen                                 von ausrechnen.c -done

    struct resistor{
        int Ring_1_nr, Ring_2_nr, Ring_3_nr, Multifakt, Tempko;
        char Toleranz[10];
    }

    Aufruf durch resistor.Ring_1_nr, resistor.Ring_2_nr...

    SparcheCode 0=Englisch, 1=Deutsch

    */

   
    int languageNr=languange();
    int iRingAnzahl=AnzahlRing(languageNr);
    char *farbecode=inputcode(iRingAnzahl,languageNr);
    int check=codecheck(farbecode,iRingAnzahl,languageNr);

}
