#include <stdio.h>
#include <stdlib.h>

void speichern(double **liste, int anzahl){
    FILE *file;
    char filename[256]="ag.txt";
    puts("(4) Daten speichern:");
    puts("--------------------");
    printf("Pfadname (Default: ag.txt): ");
    scanf("%255[^\n]",filename);
    while (getchar()!='\n') {}

    file=fopen(filename, "w");
    if (file == NULL) {
        perror(filename);
        return;
    }
    for (int x=0; x<anzahl; ++x) {
        fprintf(file, "%g %g\n", liste[x][0],liste[x][1]);
    }
    fclose(file);
    printf("Es wurden %d Wertepaare gespeichert.\n\n", anzahl);
    return;
}