#include <stdio.h>
#include <string.h>
#include "resistor.h"
#include "ausrechnen.c"


int main (void)
{
    struct resistor x;
    
    int Ringanzahl;
    
    printf("geben sie die Ringanzahl an: ");
    scanf("%i", &Ringanzahl);
    while(getchar()!='\n'){};
    
    printf("geben sie den Ring_1_nr an: ");
    scanf("%i", &x.Ring_1_nr);
    while(getchar()!='\n'){};
    
    printf("geben sie die Ring_2_nr an: ");
    scanf("%i", &x.Ring_2_nr);
    while(getchar()!='\n'){};

    if(Ringanzahl>4)
    {
        printf("geben sie die Ring_3_nr an :");
        scanf("%i", &x.Ring_3_nr);
        while(getchar()!='\n'){};
    }
    
    printf("geben sie den Multifakt an :");
    scanf("%lf", &x.Multifakt);
    while(getchar()!='\n'){};
    
    if(Ringanzahl>5)
    {
        printf("geben sie die Temperaturkoeffizient an :");
        scanf("%i", &x.Tempko);
        while(getchar()!='\n'){};
    }
    
    printf("geben sie die Toleranz an :");
    scanf("%s", x.Toleranz);
    while(getchar()!='\n'){};
    
    ausrechnen(x,Ringanzahl,1);
    
    return 0;
}
