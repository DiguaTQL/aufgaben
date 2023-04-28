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

    while (check ==1) {                                             // While 
        
        if (counter == maxcount) {                                  // Wenn maximale Anzahl erreicht hat
            size_t newcount = (maxcount +2) * 2;                    // Resavierung immer 8*x mehr
            double **newptr = (double**)realloc(pointlist, newcount*sizeof(*pointlist));    //mit realloc die Resavierung vergrößen
            if(newptr==NULL){                                       // Resavierung überprüfen
                free_pointers(pointlist, counter);
                puts("malloc-Fehler!");
                exit(1);
            }
            maxcount=newcount;                                      // Maximale Anzahl neu setzen
            pointlist=newptr;                                       // neu ** ins alt ** schreiben
        }
        pointlist[counter]=(double*)malloc(2*sizeof(double));       // 2te Dimenstion immer 2 Double groß
        if(pointlist[counter]==NULL){                               // Resavierung überprüfen
            free_pointers(pointlist, counter);
            puts("malloc-Fehler!");
            exit(1);
        }

        printf("%d.\tPunkt : x:",counter+1);
        scanf("%lf",&pointlist[counter][0]);                        // Punkt x schreiben
        printf("\tPunkt : y:");
        scanf("%lf",&pointlist[counter][1]);                        // Punkt y schreiben

        //printf("%lf,%lf,%lf,%lf\n",pointlist[0][0],pointlist[counter][0],pointlist[0][1],pointlist[counter][1]);

        if ((pointlist[0][0]==pointlist[counter][0] && pointlist[0][1]==pointlist[counter][1]) && counter>0) {      //Überprüfen ob Eingabe mit 0te Eingabe übereinstimmen
            check=0;                                                // ja, while Bedingung zürücksetzen
        }
        else {
            check=1;                                                // nein, weiter
            ++counter;
        }


    }

    return pointlist;                                               // Liste rückgeben
    free_pointers(pointlist, counter);                              // Resavierung befreien

    puts("");
}