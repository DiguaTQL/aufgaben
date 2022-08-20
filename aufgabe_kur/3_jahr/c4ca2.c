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
    //puts(webadresse);
    while (getchar()!='\n') {}
    //puts(webadresse);
    strcat(swget, webadresse);
    rc=system(strcat(swget,zusatz));
    //strcpy(webadresse2,strcat(swget, webadresse));
    //puts(webadresse);
    printf("Der Wert von rc ist:%d\n",rc);
    //puts(webadresse);
    //printf("Webadresse2 ist : %s\n",webadresse2);
    //puts(webadresse);

    return 0;
}