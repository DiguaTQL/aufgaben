#include <stdio.h>
#include <stdlib.h>

static void free_pointers(double **arr, size_t size){
    for (size_t i=0; i<size; ++i) {
        free(arr[i]);
    }
    free(arr);
}


double** eingabe(){

    double **pointlist=0;
    double maxcount=0;
    int counter=0,check=1;

    puts("(1) Daten aufnehmen:    (Ende: Ersten Punkt noch einmal eingeben)");
    puts("--------------------");

    while (check ==1) {
        
        if (counter == maxcount) {
            size_t newcount = (maxcount +2) * 2;
            double **newptr = (double**)realloc(pointlist, newcount*sizeof(*pointlist));
            if(newptr==NULL){
                free_pointers(pointlist, counter);
                puts("malloc-Fehler!");
                exit(1);
            }
            maxcount=newcount;
            pointlist=newptr;
        }
        pointlist[counter]=(double*)malloc(2*sizeof(double));
        if(pointlist[counter]==NULL){
            free_pointers(pointlist, counter);
            puts("malloc-Fehler!");
            exit(1);
        }

        printf("%d.\tPunkt : x:",counter+1);
        scanf("%lf",&pointlist[counter][0]);
        printf("\tPunkt : y:");
        scanf("%lf",&pointlist[counter][1]);

        printf("%lf,%lf,%lf,%lf\n",pointlist[0][0],pointlist[counter][0],pointlist[0][1],pointlist[counter][1]);

        if ((pointlist[0][0]==pointlist[counter][0] && pointlist[0][1]==pointlist[counter][1]) && counter>0) {
            check=0;
        }
        else {
            check=1;
            ++counter;
        }


    }

    return pointlist;
    free_pointers(pointlist, counter);

    puts("");
}