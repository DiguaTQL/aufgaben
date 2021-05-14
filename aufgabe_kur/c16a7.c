#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
    char aufgabe;
    long int zahl_a,summe_a=0,zahl_b,summe_b=0;
    double zahl_c,zahl_d;
    printf("Bitte geben Sie die Aufgabe <a-d> ein:");
    aufgabe=getchar();

    switch (tolower(aufgabe)) {
        case 'a'://georeihe00.c
            zahl_a=1;
            printf("1");
            while (summe_a<100000) {
                summe_a=summe_a+zahl_a;
                zahl_a*=10;
                printf("+%ld",zahl_a);
            }
            summe_a=summe_a+zahl_a;
            printf("=%ld\n",summe_a);
            break;

        case 'b'://georeihe10.c
            zahl_b=1;
            printf("1");
            while (summe_b<100000 && summe_b>-1000000) {
                summe_b=summe_b+zahl_b;
                zahl_b*=-10;
                if (zahl_b<0) {            
                    printf("%ld",zahl_b);
                }
                else {
                    printf("+%ld",zahl_b);
                }
            }
            summe_b=summe_b+zahl_b;
            printf("=%ld\n",summe_b);
            break;

        case 'c'://georeihe10.c
            zahl_c=1;
            printf("1");
            while (zahl_c>0) {
                zahl_c*=0.5;
                printf("+%g",zahl_c);
                //sleep(1);
            }
            break;

        case 'd'://georeihe20.c
            zahl_d=1;
            printf("1");
            while (zahl_d!=0 ) {
                zahl_d*=-0.5;
                if (zahl_d<0) {
                    printf("%g",zahl_d);                
                }
                else {
                    printf("+%g",zahl_d);                    
                }
                //sleep(1);
            }
            break;


    }

}