#include <stdio.h>
#include <stdlib.h>

double *eingabe(){

    double *pointlist[2];
    int a=0,b=1;

    puts("(1) Daten aufnehmen:    (Ende: Ersten Punkt noch einmal eingeben)");
    puts("--------------------");

    while (b ==1) {

        for(int x=0; x < 2; ++x){
            pointlist[x]=(double*)calloc(a+1, sizeof(double));
            if(pointlist[x]==NULL){
                puts("calloc-Fehler!");
                break;
            }
        }

        printf("%d.\tPunkt : x:");
        scanf("%lf",&pointlist[0][a]);
        printf("\tPunkt : y:");
        scanf("%lf",&pointlist[1][a]);

        if (*pointlist[0][0]==*pointlist[0][a]) {
        statements
        }







    }
}