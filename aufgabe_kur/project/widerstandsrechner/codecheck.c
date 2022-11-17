#include <stdio.h>
#include <string.h>

int codecheck(char *farbecode, int AnzahlRing, int languageNr){
    puts(farbecode);
    char w1[2]="";
    int lauf=0;
    while (farbecode[lauf]!='-') {
        w1[lauf]=farbecode[lauf];
        ++lauf;
    }
    //printf("%s",w1);
    //puts(w1);
    return 0;
}