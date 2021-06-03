#include <stdio.h>

int main(){
    int x,n,i,summe=1;
    printf("Eingabe x:");
    scanf("%d",&x);
    printf("Eingabe n:");
    scanf("%d",&n);

    if (x!=0&&n==0) {
        summe =1;
    }
    else{
        for(i=0;i<n;++i){
            summe=summe*x;
        }
    }
    if (x==0&&n==0) {
        printf("Error 0^0 ist nicht definiert.\n");
    }
    else {
        printf("Die Summe von %d^%d ist: %d.\n",x,n,summe);
    }
}