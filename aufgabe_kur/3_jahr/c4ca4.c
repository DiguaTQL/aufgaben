#include <stdio.h>
#include <string.h>

int main(void){
    char read[10001]="";

    while (strcmp(read, "QUIT")!=0){
        scanf("%10000[^\n]",read);
        while (getchar()!='\n') {}
        if (strcmp(read,"QUIT")!=0) {
            puts(read);
        }
        else {
            puts("Tschuess!");
        }
    }
    
    return 0;
}