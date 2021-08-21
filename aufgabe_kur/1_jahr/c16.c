#include <stdio.h>

int main() {
    int i=1, jahr=0 ;
    double y=30.0;

    while (i !=32)
    {
        printf("%d\n",i);
        i*=2;

    }

    while (y>1.0)
    {
        y= y*0.9;
        jahr = jahr +1;
        //printf("%g  und  %d",y,jahr);
    }
    printf("%g  und  %d\n",y,jahr);
    printf("Es braucht %d Jahre\n",jahr);

}