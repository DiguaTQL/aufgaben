#include <stdio.h>
#include <stdlib.h>

void multihallo(int x){
    int i;
    for (i=0; i<=x; ++i) {
    printf("Hello, World\n");
    }
}

void brieffuss(int art){
    switch (art) {
        case 1:
             printf("Hochachtungsvoll\n");
             break;
        case 2: 
            printf("Mit freundlichen Grüßen\n");
            break;
        case 3: 
            printf("Adieu\n");
            break;
        default: puts("?");
    }
}

void linie_von_bis(int a, int b){
    int aa,bb;
    for (aa=0; aa<a; ++aa) {
        printf(" ");
    }
    for (bb=0; bb<b; ++bb) {
        printf("-");
    }
    printf("\n");

}

void birefdat(int datum,int monat,int jahr){
    printf("Bielefeld,den %i.%i.%i\n",datum,monat,jahr);
}

void rechteck(int lang,int breit){
    int l,b;
    for (b=0; b<breit; ++b) {
        for (l=0; l<lang; ++l) {
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    multihallo(3);
    brieffuss(1);
    brieffuss(2);
    brieffuss(3);
    linie_von_bis(2, 12);
    birefdat(31,12,2000);
    rechteck(15, 3);
}