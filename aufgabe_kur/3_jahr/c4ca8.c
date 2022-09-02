#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char eingabe[801]="";
    char leer[]=":";
    char *token;

    printf("Eingabe: ");
    scanf("%800[^\n]",eingabe);
    while (getchar()!='\n') {}
    printf("Elemente:\n");
    token = strtok(eingabe, leer);
    while (token != NULL) {
        printf("%s\n",token);
        token = strtok(NULL, leer);
        
    }

}