#include <stdio.h>
int AnzahlRing(int languageNr){
    int Anzahl,repeat;
    
    char *RingAbfragen[2];
    char *ErrorText[2];
    RingAbfragen[0] = "Please enter the number of rings:";
    RingAbfragen[1] = "Bitte geben Sie die Anzahl der Ringe ein:";
    ErrorText[0] = "Input invalid, the number of rings can only be 4 or 5 or 6.";
    ErrorText[1] = "Eingabe ungültig, die Anzahl der Ringe kann nur 4 oder 5 oder 6 sein.";

    do {
        repeat=0;
        printf("%s",RingAbfragen[languageNr]);
        scanf("%i",&Anzahl);
        while(getchar()!='\n') {}

        if (Anzahl<4 || Anzahl>6){
            printf("%s\n\n",ErrorText[languageNr]);
            repeat=1;
        }

    }while (repeat==1);
    return Anzahl;
}