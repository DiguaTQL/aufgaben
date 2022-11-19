#include <stdio.h>
#include <string.h>

char *split(char *input, char marker, int MarkerNr){
    static char w1[]="";
    char *result;
    int lauf=0,Nr=0;
    while (input[lauf]!='\0') {
        printf("In %s, zeile %d, Nr:%d, MarkerNr:%d\n",__FILE__,__LINE__,Nr,MarkerNr);
        if (input[lauf]==marker) {
            ++Nr;
            printf("In %s, zeile %d, Nr:%d, MarkerNr:%d\n",__FILE__,__LINE__,Nr,MarkerNr);
        }
        if ( input[lauf]!=marker && Nr==MarkerNr) {
            w1[lauf]=input[lauf];
            printf("In %s, zeile %d, Input:%s, w1:%s\n",__FILE__,__LINE__,input,w1);
        }
        ++lauf;
    }
    result=w1;
    printf("In %s, zeile %d, Input:%s, resule:%s\n",__FILE__,__LINE__,input,result);

    return result;
}