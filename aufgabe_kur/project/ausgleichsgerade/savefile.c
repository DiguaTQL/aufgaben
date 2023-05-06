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

    file=fopen(filename, "a");
    if (file == NULL) {
        perror(filename);
        return;
    }
}