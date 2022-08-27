#include <stdio.h>
#include <string.h>

int main(void){
    char wortliste[21]="";
    char wort[21]="";
    int erstmal = 1;
    printf("Eingabe: ");
    scanf("%20s",wort);

    while (strcmp(wort,"QUIT")) {
        if (erstmal==1) {
            erstmal=0;
        }
        else {
            strcat(wortliste,", ");
        }
        strcat(wortliste,wort);
        scanf("%20s",wort);
    }
    printf("Wortliste: %s\n",wortliste);
    return 0;
}