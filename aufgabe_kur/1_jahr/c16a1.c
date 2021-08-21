#include <stdio.h>

int main(){
    double fehlerquote=30., reduzierung;
    int jahr=0;
    
    while (fehlerquote>1) {
        printf("%d: %g \n",jahr,fehlerquote);
        jahr+=1;
        fehlerquote=fehlerquote*0.9;
    }
}