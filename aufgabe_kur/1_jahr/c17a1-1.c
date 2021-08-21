#include <stdio.h>

int main(){
    int x,y;


    for (x=-5;x<=5;++x){
        y=x*x-6*x+4;
        printf("x=%d \t f(x)=%d\n",x,y);
    }
}