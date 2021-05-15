#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <unistd.h>

int main(){
    char aufgabe;
    short int zahl_a,zahl_c;
    float zahl_b;
    double zahl_e,zahl_f;
    long int zahl_d,zahl_g;

    printf("Bitte geben Sie die Aufgabe <a-g> ein:");
    aufgabe=getchar();

    switch (tolower(aufgabe)) {

        case 'a'://afolge00.c
            zahl_a=12;
            while (1) {
                printf("%d\n",zahl_a);
                zahl_a+=1;
            }
            break;

        case 'b'://afolge01.c
            zahl_b=1.5;
            while (1) {
                printf("%f\n",zahl_b);
                zahl_b+=1;
            }
            break;

        case 'c'://afolge10.c
            zahl_c=0;
            while (zahl_c!=SHRT_MAX) {
                printf("%d\n",zahl_c);
                zahl_c+=1;
            }
            break;

        case 'd'://gfolge00.c
            zahl_d=1;
            while (zahl_d!=0) {
                printf("%ld\n",zahl_d);
                zahl_d=zahl_d*2;
            }
            break;

        case 'e'://gfolge10.c
            zahl_e=0.5;
            while (zahl_e!=0) {
                printf("%g\n",zahl_e);
                zahl_e*=0.5;
            }
            break;

        case 'f'://gfolge10.c
            zahl_f=0.5;
            while (zahl_f!=0) {
                printf("%g\n",zahl_f);
                zahl_f*=-0.5;
            }
            break;

        case 'g'://mersenne.c
            zahl_g=0;
            while (zahl_g<70000) {
                printf("%ld\n",zahl_g);
                zahl_g=zahl_g*2+1; 
            }
            break;

        

            


    }


}