#include <stdio.h>

int main(void){
    FILE *dm;
    char path[21]="";
    int rc=0,counter=0;
    printf("Bitte geben Sie Datei Pfad ein:");
    scanf("%20[^\n]",path);// soll 'c6text/c62a3'
    while (getchar()!='\n') {}
    dm=fopen(path, "r");
    if (!dm) {
        perror(path);
        return 1;
    }
    double min=0.0,max=0.0,sum=0.0,mid=0.0;
    while (rc!=-1) {
    double idx=0.0;
    rc=fscanf(dm, "%lf", &idx);
    //rc=fscanf(dm, "%c", &idc);
        switch (rc) {
            case -1:
                //printf("Fehler oder Datei Ende:");
                if (counter==0) {
                    if(feof(dm)) printf("Dateiende\n");
                }
                if(ferror(dm)) printf("Fehler\n");
                break; //=-1: Error oder EOF
            
            case 0:
                printf("Datei Inhalt format");break; // =0:kein richtig eingelesener Platzhalter

            case 1:
                if (counter ==0) {
                    min=idx;
                    max=idx;
                }
                ++counter;
                sum=sum+idx;
                if (idx < min) min=idx;
                if (idx > max) max=idx;
                mid=sum/counter;
                
                break;// >0: Anzahl richtig eingelesener Platzhalter

        }

    }
    printf("In Datei '%s':\nMin:%g\nMAX:%g\narithmetische Mittelwert:%g\n ",path,min,max,mid);
    return 0;
}