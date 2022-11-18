#include <stdio.h>
#include <string.h>
#include "findminus.c"

int codecheck(char *farbecode, int AnzahlRing, int languageNr){
    puts(farbecode);

    int minus=0;
    char *minusnr[2];
    char *errorminus[2];
    minusnr[0]="Number of detects colors:";
    minusnr[1]="Anzahl der erkannten Farben:";
    errorminus[0]="The number of entered color incorrect, please try again.";
    errorminus[1]="Die Anzahl von eingegebenen Farbe fehlerhaft, bitte erneut eingeben.";
    minus=findeminus(farbecode);
    if (minus != (AnzahlRing-1)) {
        puts("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        printf("%s%d\n%s\n",minusnr[languageNr],minus+1,errorminus[languageNr]);
        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        return 1;
    }

    
    char w1[2]="";
    int lauf=0;
    while (farbecode[lauf]!='-') {
        w1[lauf]=farbecode[lauf];
        ++lauf;
    }
    printf("%s",w1);
    //puts(w1);
    
    return 0;
}