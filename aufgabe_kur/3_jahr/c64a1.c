#include <cstddef>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    double *mw=NULL;
    int idx_1, idx_2;
    char text[]="Hello,World!\n";
    idx_1=strlen(text)+1;

    //printf("Bitte geben Sie die Anzahl der String ein:");
    //scanf("%i",&idx_1);    
    //while (getchar()!='\n') {}

    mw=malloc(idx_1*sizeof(double));
    if (mw==NULL) {
        printf("malloc-Error!\n");
        return 0;
    }


}