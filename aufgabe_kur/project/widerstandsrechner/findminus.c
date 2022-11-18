#include <stdio.h>
#include <string.h>
int findeminus(char *input){
    int x=0,i;
    for (i=0; i< strlen(input); ++i) {
        if (input[i]=='-') {
            ++x;
        }
    }
    //printf("Strlen=%ld, i=%d, x=%d\n",strlen(input),i,x);
    return x;
}