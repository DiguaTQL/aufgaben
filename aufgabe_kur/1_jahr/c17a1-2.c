#include <stdio.h>
#include <math.h>
const double PI=3.14159365;

int main(){
    double cosinus;
    int winkel;

    for(winkel=0;winkel<=90;winkel+=3){
        cosinus=cos(winkel/180.*PI);
        printf("winkel=%d°\tCosinus Wert=%g\n",winkel,cosinus);
    }
}