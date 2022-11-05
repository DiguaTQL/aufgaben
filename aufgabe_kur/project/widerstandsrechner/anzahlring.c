#include <stdio.h>
int AnzahlRing(){
    int Anzahl,repeat;
    do {
        repeat=0;
        printf("Bitte geben Sie die Anzahl der Ringe ein:");
        scanf("%i",&Anzahl);
        while(getchar()!='\n') {}

        if (Anzahl<4 && Anzahl>6){
            printf("Input invalid, Anzahr der Ringe kann nur 4 oder 5 oder 6 sein.");
            repeat=1;
        }

    }while (repeat==1);
    return Anzahl;
}