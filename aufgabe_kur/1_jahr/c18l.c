#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;

    do {
        printf("Ihre Möglichkeiten:\n");
        puts("0:Programmende");
        puts("1:Taschenrechner starten");
        puts("2:Editor sterten");
        puts("3:Spiel starten");
        scanf("%d",&x);
        if (x==1) {
            system("calc.exe");
        }
        else if (x==2) {
            system("editor");
        }
        else if (x==3) {
            system("gnuplot");
        }
        else if(x>3){
            puts("Fehlereingabe!");
            break;
        }
    }while (x!=0);
    puts("See you!");

}