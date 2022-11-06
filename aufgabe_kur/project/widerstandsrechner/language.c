#include <stdio.h>
int languange(){
    int languageNr;
    do {
    
    printf("Language: 0=EN(English), 1=DE(German)\n");
    printf("Your language:");
    scanf("%i",&languageNr);
    while(getchar()!='\n') {}

    if (languageNr!=0 && languageNr!=1) {
        printf("Input invalid, Eingabe ungültig.\n\n");
    }

    }while (languageNr!=0 && languageNr!=1 );
    puts("---------------------------------------");
    return languageNr;
}