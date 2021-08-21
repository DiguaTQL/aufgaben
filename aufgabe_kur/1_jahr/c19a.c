#include <stdio.h>

int main(){
    int vorwahl;
    do {
        printf("Bitte Vorwahlnr. eingeben:");
        scanf("%d0",&vorwahl);
        switch (vorwahl) {
            case 0:
                puts("-Adios");
                break;

            case 521:
                puts("-Bielefield");
                break;

            case 571:
                puts("-Minden");
                break;
            
            case 5221:
                puts("-Herford");
                break;
            
            default:
                puts("-Fehler");
            
        }
    }while (vorwahl!=0);
}