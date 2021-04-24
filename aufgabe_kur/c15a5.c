#include <stdio.h>

int main(){
    unsigned int a,b,c;

    printf("Bitte geben Sie die Länge der Seite A ein:");
    scanf("%u",&a);
    printf("Bitte geben Sie die Länge der Seite B ein:");
    scanf("%u",&b);
    printf("Bitte geben Sie die Länge der Seite C ein:");
    scanf("%u",&c);

    if ((c*c)==(a*a+b*b)){
        printf("1.Das ist ein rechtwinklige Dreieck.\n");
    }  
    else{
        if ((b*b)==(a*a+c*c)){
            printf("2.Das ist ein rechtwinklige Dreieck.\n");
        }
        else{
            if ((a*a)==(b*b+c*c)){
                printf("3.Das ist ein rechtwinklige Dreieck.\n");
            }
            else{
                 printf("4.Das ist kein rechtwinklige Dreieck.\n");
            }
        }
    }
}