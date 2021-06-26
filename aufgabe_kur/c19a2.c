#include <stdio.h>

int main(){
    int methode,zahl1,zahl2,folge;

    do {
        printf("1: addieren, 2: subtrahieren, 3: multiplizieren, 4: dividieren \nWie werden die Zahlen berechnet?");
        scanf("%d",&methode);
        if (methode==0) {
            break;
        }
        printf("Bitte geben Sie 1. Zahl ein:" );
        scanf("%d",&zahl1);
        printf("Bitte geben Sie 2. Zahl ein:" );
        scanf("%d",&zahl2);
        switch (methode) {
            case 1:
                folge=zahl1+zahl2;
                printf("\t%d + %d = %d\n",zahl1,zahl2,folge);
                break;
        
            case 2:
                folge=zahl1-zahl2;
                printf("\t%d - %d = %d\n",zahl1,zahl2,folge);
                break;
        
            case 3:
                folge=zahl1*zahl2;
                printf("\t%d * %d = %d\n",zahl1,zahl2,folge);
                break;
        
            case 4:
                if (zahl2!=0) {
                folge=zahl1/zahl2;
                printf("\t%d / %d = %d\n",zahl1,zahl2,folge);
                }
                else {
                puts("!!!FEHLER: 0 kann nicht dividiert werden.");
                }
                break;
        
        }
    }while (methode!=0);
    puts("Adios");
}