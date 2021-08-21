#include <stdio.h>

int main()
{
    int a,b;

    printf("Bitte geben Sie 1. Zahl ein:");
    scanf("%i",&a);
    printf("Bitte geben Sie b. Zahl ein:");
    scanf("%i",&b);

    if (a>0){
        if (b>0){
            printf("Beiden Zahlen haben gleichen Vorzeichnen.\n");
        }
        else {
            printf("Beiden Zahlen haben verschieden Vorzeichnen.\n");
        }
    }
    else {
        if (b<0){
            printf("Beiden Zahlen haben gleichen Vorzeichnen.\n");
        }
        else {
            printf("Beiden Zahlen haben verschieden Vorzeichnen.\n");
        }
    }
}