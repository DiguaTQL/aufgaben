#include <stdio.h>
#include "anzahlring.c"

int main (void)
{
    int Anzahl, languageNr=0;
    
    printf("Hier finden sie das Testprogramm für die Anzahl der Ringe \n\n");
    
    Anzahl=AnzahlRing(languageNr);
    printf("Anzahl der Ringe ist gleich %d \n", Anzahl);
    
    languageNr=1;
    Anzahl=AnzahlRing(languageNr);
    printf("Anzahl der Ringe ist gleich %d \n", Anzahl);
    
    return 0;
}
