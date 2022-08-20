#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char webadresse[200]="";
    char webadresse2[201]="";
    char swget[6]="wget ";
    int rc;
    printf("Bitte geben Sie die URL ein:");
    scanf("%200s",webadresse);
    //puts(webadresse);
    while (getchar()!='\n') {}
    //puts(webadresse);
    rc=system(strcat(swget, webadresse));
    //strcpy(webadresse2,strcat(swget, webadresse));
    //puts(webadresse);
    printf("Der Wert von rc ist:%d\n",rc);
    //puts(webadresse);
    //printf("Webadresse2 ist : %s\n",webadresse2);
    //puts(webadresse);

    return 0;
}