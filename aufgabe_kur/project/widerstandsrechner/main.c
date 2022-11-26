#include <stdio.h>
#include "resistor.h"
#include "language.c"
#include "anzahlring.c"
#include "inputcode.c"
#include "codecheck.c"
#include "auswerten.c"
#include "ausrechnen.c"

int main(void){
    /*
    Ablauf
    0.Sparche auswählen                                                                         von language.c Rückgabe int. -done
    1.Abfragen Anzahl der Ringe                                                                 von anzahlring.c Rückgabe int. -done.
    2.Eingabe/Fabecode Beispeile fr-fr-fr-fr-fr so...                                           von inputcode.c Rückgabe char. -done
    2.5 Eingabe abfragen                                                                        von inputcode.c Rückgabe char. -done
    3.if Eingabe nicht korrekt, dann analysieren welche Feherl und Fehler Tipps ausgeben        von codecheck.c Rückgabe char. -done
    3.5 Eingabe wieder abfragen                                                                 von inputcode.c Rückgabe char. -done
    4 Eingabe zur struct "resistor" konvertieren.                                               von auswerten.c -done
    5.wenn Eingabe richtig sind, dann berechnen.                                                von ausrechnen.c -done
    6.Wert anzeigen                                                                             von ausrechnen.c -done

    struct resistor{
        int Ring_1_nr, Ring_2_nr, Ring_3_nr, Tempko;
        double  Multifakt;
        char Toleranz[10];
    }

    Aufruf durch resistor.Ring_1_nr, resistor.Ring_2_nr...

    SparcheCode 0=Englisch, 1=Deutsch

    */
    struct resistor widerstand;
    char *farbecode;
    int check=0;
    int languageNr=language();                                  //Schritt 0
    int iRingAnzahl=AnzahlRing(languageNr);                     //Schritt 1
    do {                                                        //Schritt 3.5
        farbecode=inputcode(iRingAnzahl,languageNr);            //Schritt 2
        check=codecheck(farbecode,iRingAnzahl,languageNr);      //Schritt 3
    }while (check!=0);                                          //Schritt 3.5
    widerstand=auswerten(farbecode, iRingAnzahl, languageNr);   //Schritt 4
    ausrechnen(widerstand, iRingAnzahl, languageNr);            //Schritt 5 & 6
    return 0;
}
