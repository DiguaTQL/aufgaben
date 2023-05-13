#include <stdio.h>
#include <stdlib.h>

static void free_pointers(double **arr, size_t size){               // Welche double Pointer soll befreit werten und Größe als Paramter
    for (size_t i=0; i<size; ++i) {                                 // 2te Pointer sollt befreit werden
        free(arr[i]);
    }
    free(arr);                                                      // 1st Pointer sollt befreit werden
    return;                                                         // kein Rückgabe
}

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
    double point=0;

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

        //printf("%d.\tPunkt : x:",counter+1);
        //scanf("%lf",&pointlist[counter][0]);                        // Punkt x schreiben
        //while (getchar()!='\n') {}
        //printf("\tPunkt : y:");
        //scanf("%lf",&pointlist[counter][1]);                        // Punkt y schreiben
        //while (getchar()!='\n') {}

        while(fscanf(file, "%lf %lf", &pointlist[counter][0],&pointlist[counter][1])==2){ ++counter;check =1;}
        //printf("%lf,%lf,%lf,%lf\n",pointlist[0][0],pointlist[counter][0],pointlist[0][1],pointlist[counter][1]);

        //if ((pointlist[0][0]==pointlist[counter][0] && pointlist[0][1]==pointlist[counter][1]) && counter>0) {      //Überprüfen ob Eingabe mit 0te Eingabe übereinstimmen
        //    check=0;                                                // ja, while Bedingung zürücksetzen
        //}
        //else {
        //    check=1;                                                // nein, weiter
        //    ++counter;
        //}
    }

    printf("s wurden %d Wertepaare geladen.\n\n",counter);
    *anzahl=counter;
    return pointlist;                                               // Liste zurückgeben
    free_pointers(pointlist, counter);                              // Reservierung befreien
}