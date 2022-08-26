#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char eingabe[100]="";
    char grenze[81]="";
    char leer[]=" ";
    char *token;

    printf("Eingabe: ");
    scanf("%99[^\n]",eingabe);
    while (getchar()!='\n') {}
    //strncat( grenze , eingabe ,80);
    snprintf(grenze, 80, "%s",eingabe);
    printf("Wortliste: ");
    token = strtok(grenze, leer);
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