#include <stdio.h>

int main(){
    int ggt,a,b;
    
    printf("Eingabe a:");
    scanf("%d",&a);
    printf("Eingabe b:");
    scanf("%d",&b);

    while (a!=b) {
       if (a<b){
           b=b-a;
       }
       else {
           a=a-b;
       }
       printf("a=%d\tb=%d\n",a,b);
    
    }
    printf("GTT:%d\n",a);


}