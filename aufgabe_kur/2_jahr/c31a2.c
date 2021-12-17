#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char x;
    x=getchar();

    while (x!=EOF) {
        if (isupper(x)) {
            printf("A");
        }
        else if (islower(x)) {
            printf("a");
        }
        else if (isdigit(x)) {
            printf("0");
        }
        else {
            printf(".");
        }
        x=getchar();
    }
    printf("\n");
}