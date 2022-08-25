#include <stdio.h>
#include <string.h>

int main(void){
    char vorher[255], nachher[255];
    int Temp,lauf,again;
    

    printf("Bitte geben Sie Text ein:");
    scanf("%s",vorher);
    do
    {
        for (lauf=0; lauf < sizeof(vorher); ++lauf) {
            again=0;
            if (vorher[lauf]> vorher[lauf+1]){
                Temp= vorher[lauf+1];
                vorher[lauf+1]= vorher[lauf];
                vorher[lauf]=Temp;
                again=1;
            }
            
        }
    }while (again!=1);

    printf("%s\n",vorher);

}
