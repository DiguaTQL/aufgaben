#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    struct tm gd;
    char str[256]="Meier   Hans    19900203M";
    int jahr=0,mon=0,day=0;
    char zwischensp[256]="";

    memcpy(zwischensp, &str[16], 4);
    zwischensp[4]='\0';
    jahr=atoi(zwischensp);
    gd.tm_year=jahr-1900;

    memcpy(zwischensp, &str[20], 2);
    zwischensp[2]='\0';
    mon=atoi(zwischensp);
    gd.tm_mon=mon-1;

    memcpy(zwischensp, &str[22], 2);
    zwischensp[2]='\0';
    day=atoi(zwischensp);
    gd.tm_mday=day;

    char anz[80];
    strftime(anz, 80, "%d.%m.%Y ", &gd);
    printf("Datum : %s\n",anz);
    return 0;
}