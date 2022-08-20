#include <stdio.h>
#include <string.h>

int main(void){
    char vorwahl[6]="";
    char durchwahl[20]="";

    printf("Vorwahl..:");
    scanf("%5[^\n]",vorwahl);
    while (getchar()!='\n') {}
    if (strcmp(vorwahl,"")==0) {
        strcpy(vorwahl, "05231");
    }
    printf("Durchwahl:");
    scanf("%20s",durchwahl);
    while (getchar()!='\n') {}
    printf("Ergebnis:(%s)%s\n",vorwahl,durchwahl);
}