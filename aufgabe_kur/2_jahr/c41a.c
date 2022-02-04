#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x=1;
    int* px = NULL;
    px =&x;
    *px = -3;
    *px = *px + *px;

    printf("x= %i \n",x);
    printf("&x= %i \n",&x);
    printf("px= %i \n",px);
    printf("&px= %i \n",&px);
    printf("*px= %i \n",*px);
    
    return 0;
}