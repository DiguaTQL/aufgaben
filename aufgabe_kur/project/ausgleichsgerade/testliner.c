#include <stdio.h>
#include "grafik.c"

int main(){
    double** points=0;
    points[0][0]=1;
    points[0][1]=1;
    points[1][0]=2;
    points[1][1]=3;
    points[2][0]=4;
    points[2][1]=4;

    grafik(points, 3);
    return 0;
}