#include <stdio.h>
#include <stdlib.h>
#include "aufnehmen.c"

double** laden(double **liste, int *anzahl){
    FILE *file;
    char filename[256]="ag.txt";
    puts("(5) Daten laden:");
    puts("--------------------");
    printf("Pfadname (Default: ag.txt): ");
    scanf("%255[^\n]",filename);
    while (getchar()!='\n') {}

    double **pointlist=0;                                           // Pointer auf Pointer erstellen
    double maxcount=0;
    int counter=0,check=1;

    file=fopen(filename, "r");
    if (file == NULL) {
        perror(filename);
        return 0;
    }

    while (check ==1) {                                             
        
        if (counter == maxcount) {                                  // Wenn maximale Anzahl erreicht hat
            size_t newcount = (maxcount +2) * 2;                    // Reservierung immer 8*x mehr /*4, 12, 28, 60, 124....*/
            double **newptr = (double**)realloc(pointlist, newcount*sizeof(*pointlist));    //mit realloc die Reservierung vergrößen
            if(newptr==NULL){                                       // Reservierung überprüfen
                free_pointers(pointlist, counter);
                puts("malloc-Fehler!");
                exit(1);
            }
            maxcount=newcount;                                      // Maximale Anzahl neu setzen
            pointlist=newptr;                                       // neu ** ins alt ** schreiben
        }
        pointlist[counter]=(double*)malloc(2*sizeof(double));       // 2te Dimenstion immer 2 Double groß
        if(pointlist[counter]==NULL){                               // Reservierung überprüfen
            free_pointers(pointlist, counter);
            puts("malloc-Fehler!");
            exit(1);
        }

        if (fscanf(file, "%lf %lf", &pointlist[counter][0],&pointlist[counter][1])==2) // von Datei die Wertepaare lesen
        {
            check = 1;
            ++counter;
        }
        else
            check = 0;

    }

    printf("Es wurden %d Wertepaare geladen.\n\n",counter);
    *anzahl=counter;
    return pointlist;                                               // Liste zurückgeben
    free_pointers(pointlist, counter);                              // Reservierung befreien
}