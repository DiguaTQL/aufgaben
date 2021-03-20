#include <stdio.h>

int main(){

    int x;

    printf("Bitte geben Sie den ganzen Zahl x ein:");
    scanf("%i",&x);

    if (x%2== 0)
    {
        printf("Eingebegend x ist ein gerad Zahl.\n");
    }
    else {
        printf("Eingebegend x ist ein ungerad Zahl.\n");
    }

    if (x>0)
    {
        printf("Eingebegend x ist ein positive Zahl.\n");
    }
    else if (x==0) {
    printf("Eingebegend x ist gleich Null.\n");
    }
    else {
    printf("Eingebegend x ist ein negative Zahl.\n");
    }

}