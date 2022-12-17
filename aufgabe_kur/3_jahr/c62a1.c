#include <stdio.h>

int main(void){
    FILE *dm;
    char path[21]="";
    int rc=0,counter=0;
    printf("Bitte geben Sie Datei Pfad ein:");
    scanf("%20[^\n]",path);// soll 'c6text/c62a1'
    while (getchar()!='\n') {}
    dm=fopen(path, "r");
    if (!dm) {
        perror(path);
        return 1;
    }
    while (rc!=-1) {
    char idc;
    int idx=0;
    //rc=fscanf(dm, "%d", &idx);
    rc=fscanf(dm, "%c", &idc);
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
                if (idc>= 48 && idc <=57 ) {
                    ++counter;
                }
                
                break;// >0: Anzahl richtig eingelesener Platzhalter

        }

    }
    printf("In Datei '%s' gibt es %d Ziffern.\n ",path,counter);
    return 0;
}