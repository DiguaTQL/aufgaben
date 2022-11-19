#include <stdio.h>
#include <string.h>

char *split(char *input, char marker, int MarkerNr){
    static char w1[10]="";
    char *result;
    int lauf=0;
    while (input[lauf]!=marker) {
        w1[lauf]=input[lauf];
        ++lauf;
    }
    result=w1;
    printf(" in %s, zeile %d, Input:%s, resule:%s\n",__FILE__,__LINE__,input,result);

    return result;
}