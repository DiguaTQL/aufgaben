#include <stdio.h>
#include <string.h>

char *split(char *input, char marker, int MarkerNr){

    char *result;
    static char w1[6][99]={"",""};
    //static char w1[]=""; //hier macht ein Fehler das w1 dierekt Inhalt von Input bekommt
    //-printf("In %s, Zeile %d, w1:%s, strlen of w1: %ld\n",__FILE__,__LINE__,w1,strlen(w1));
    int lauf=0,Nr=0;
    printf("In %s, Zeile %d, Input:%s, strlen of Input: %ld\n",__FILE__,__LINE__,input,strlen(input));
    /*for (lauf=0; lauf<strlen(input); ++lauf) {
        if ( input[lauf]!=marker && input[lauf]!='\0') {
            w1[Nr]=input[lauf];
            printf("In %s, Zeile %d, w1:%s, Nr: %d, lauf: %d, w1[Nr]: %c, w1[lauf]: %c.\n",__FILE__,__LINE__,w1,Nr,lauf,w1[Nr],w1[lauf]);
            ++Nr;
        }
    }*/
    int idx=0;
    //-strcpy(w1, "");
    //-printf("In %s, Zeile %d, w1:%s, strlen of w1: %ld\n",__FILE__,__LINE__,w1,strlen(w1));
    while (input[lauf]!='\0' && lauf<=strlen(input)) {
        if (input[lauf]==marker) {
            ++Nr;
            printf("In %s, Zeile %d, Nr:%d, MarkerNr:%d\n",__FILE__,__LINE__,Nr,MarkerNr);
        }
        
        if ( input[lauf]!=marker && Nr==MarkerNr) {
            //-printf("In %s, Zeile %d, Input:%s, lauf:%d, idx: %d, w1:%s, w1[idx]:%c\n",__FILE__,__LINE__,input,lauf,idx,w1,w1[idx]);
            w1[Nr][idx]=input[lauf];
            printf("In %s, Zeile %d, Input:%s, lauf:%d, Nr:%d, idx: %d, w1:%s, w1[idx]:%c\n",__FILE__,__LINE__,input,lauf,Nr,idx,w1[Nr],w1[Nr][idx]);
            ++idx;
        }
        ++lauf;
    }
    
    
    result=w1[MarkerNr];
    printf("In %s, Zeile %d, Input:%s, resule:%s, MarkerNr:%d\n",__FILE__,__LINE__,input,result,MarkerNr);

    return result;
}