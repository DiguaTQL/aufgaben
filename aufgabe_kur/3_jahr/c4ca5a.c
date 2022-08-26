#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char eingabe[100]="";
    char leer[]=" ";
    char *token;

    printf("Eingabe: ");
    scanf("%99[^\n]",eingabe);
    while (getchar()!='\n') {}
    printf("Wortliste: ");
    token = strtok(eingabe, leer);
    while (token != NULL) {
        if (strcmp(token , "QUIT") != 0) {
            printf("%s",token);
            token = strtok(NULL, leer);
        }
        else {
            printf("\n");
            exit(0);
        }
        if ( token != NULL && (strcmp(token, "QUIT") !=0) ) {
            printf(", ");
        }
    }
    printf("\n");

}