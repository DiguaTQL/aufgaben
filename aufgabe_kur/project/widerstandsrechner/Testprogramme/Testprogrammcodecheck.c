#include <stdio.h>
#include <string.h>
#include "findminus.c"
#include "split.c"
#include "codecheck.c"

int main (void)
{
    int x=1;
   // x=codecheck();
    
    int AnzahlRing=5;
    int languageNr=1;
    char* testfarbe [5];
    
    testfarbe[0]="H-A-L-L-O";
    testfarbe[1]="H-A-L-L-O-";
    testfarbe[2]="gelb-violett-silber-orange-rot";
    testfarbe[3]="gb-vi-sr-or-rt";
    testfarbe[4]="gb-vi-rt-or-gd";
    
    int i=0;
    
    do
    {
        printf("\n%d. Geprüfter Inhalt:%s\n",i+1,testfarbe[i]);
        x=codecheck(testfarbe[i],AnzahlRing,languageNr);
        ++i;
    }
    while(x!=0);
    
    printf("Geprüfter Inhalt ist gültig\n");
    
    return 0;
}

