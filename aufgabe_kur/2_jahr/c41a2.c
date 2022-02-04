#include <stdio.h>

int main(void){
    int x=5;
    int* px;//Zeile 2
    printf(" Zeile 2 px= %i\n",px);
    px=&x;//Zeile 3
    printf(" Zeile 3 px= %i\n",px);
    printf(" Zeile 3 x= %i\n",x);
    *px = 3;//Zeile 4
    printf(" Zeile 4 x= %i\n",x);
    x = *px +7;//Zeile 5
    printf(" Zeile 5 x= %i\n",x);
    printf("%i \n",px);
    printf("%i \n",x);

    return 0;

}