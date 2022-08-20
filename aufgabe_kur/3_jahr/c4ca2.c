#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char webadresse[200]="";
    char webadresse2[201]="";
    char zusatz[30]="-nc -r -I/";
    char swget[300]="wget ";
    int rc;
    printf("Bitte geben Sie die URL ein:");
    scanf("%200s",webadresse);
    while (getchar()!='\n') {}
    strcat(swget, webadresse);
    rc=system(strcat(swget,zusatz));
    printf("Der Wert von rc ist:%d\n",rc);

    return 0;
}