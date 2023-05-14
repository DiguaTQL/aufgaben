#include <stdio.h>
#include "grafik.c"

int main(){
    double arr[3][2]={};
    double** points=0;
    arr[0][0]=1;
    arr[0][1]=1;
    arr[1][0]=2;
    arr[1][1]=3;
    arr[2][0]=4;
    arr[2][1]=4;
    points=(double**)arr;
    grafik(points, 3);
    return 0;
}