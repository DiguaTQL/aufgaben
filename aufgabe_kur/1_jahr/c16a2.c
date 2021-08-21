#include <stdio.h>

int main(){
    int anzahl=0;
    double energie=100.;
    while (energie>30) {
        printf("%d: %g\n",anzahl,energie);
        energie*=0.95;
        anzahl+=1;
    
    }
    printf("Der Schmelzofen wird nach %d Mals öffnen unter 30%% Energie sinken.\n",anzahl);

}