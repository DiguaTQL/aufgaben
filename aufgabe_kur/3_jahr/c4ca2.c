#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char webadresse[200]="";
    char zusatz[30]=" -nc -r -I/";
    char swget[300]="wget ";
    int rc;
    printf("Bitte geben Sie die URL ein:");
    scanf("%199s",webadresse);
    while (getchar()!='\n') {}
    strcat(swget, webadresse);
    strcat(swget, zusatz);
    rc=system(swget);
    printf("Der Wert von rc ist:%d\n",rc);

    return 0;
}