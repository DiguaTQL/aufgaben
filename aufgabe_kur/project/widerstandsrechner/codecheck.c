#include <stdio.h>
#include <string.h>
#include "findminus.c"
#include "split.c"

int codecheck(char *farbecode, int AnzahlRing, int languageNr){
    printf("In %s, zeile %d, farbecode: %s\nstrlen of farbecode: %ld, sizeof farbecode: %ld\n",__FILE__,__LINE__,farbecode,strlen(farbecode),sizeof(farbecode));

    int minus=0;
    char *minusnr[2];
    char *errorminus[2];
    minusnr[0]="Number of detects colors:";
    minusnr[1]="Anzahl der erkannten Farben:";
    errorminus[0]="The number of entered color incorrect, please try again.";
    errorminus[1]="Die Anzahl von eingegebenen Farbe fehlerhaft, bitte erneut eingeben.";
    minus=findeminus(farbecode);
    //printf("minus=%d\n",minus);
    if (minus != (AnzahlRing-1)) {
        puts("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        printf("%s%d\n%s\n",minusnr[languageNr],minus+1,errorminus[languageNr]);
        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        return 1;
    }
    
    char *w1;
    int i=0;
    for (i=0;  i<=minus; ++i) {
        w1=split(farbecode, '-', i);
        puts(w1);
    }
    
    
    return 0;
}