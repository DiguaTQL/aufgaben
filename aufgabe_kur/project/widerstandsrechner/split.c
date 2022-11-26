#include <stdio.h>
#include <string.h>
#ifndef _split_
#define _split_

char *split(char *input, char marker, int MarkerNr){

    char *result="";
    //Test 1
    static char w1[99][99]={{""}};
    //static char w1[]=""; //hier macht ein Fehler das w1 dierekt Inhalt von Input bekommt !!!!!!!!!!!!!!
    //-printf("In %s, Zeile %d, w1:%s, strlen of w1: %ld\n",__FILE__,__LINE__,w1,strlen(w1));
    int lauf=0,Nr=0,idx=0;
    //printf("In %s, Zeile %d, Input:%s, strlen of Input: %ld\n",__FILE__,__LINE__,input,strlen(input));
    
    /************************************************
    //Diese Abschnitt ist nur für Fehler suchen
    for (lauf=0; lauf<strlen(input); ++lauf) {    
        if ( input[lauf]!=marker && input[lauf]!='\0') {
            w1[Nr]=input[lauf];
            printf("In %s, Zeile %d, w1:%s, Nr: %d, lauf: %d, w1[Nr]: %c, w1[lauf]: %c.\n",__FILE__,__LINE__,w1,Nr,lauf,w1[Nr],w1[lauf]);
            ++Nr;
        }
    }
    ************************************************/
    if (strcmp(w1[0],"")!=0) {          
        memset(w1[0], 0, sizeof(w1[0]));    // here will clean the allocated memory
    }

    while (input[lauf]!='\0' && lauf<=strlen(input)) {
        if (input[lauf]==marker) {
            ++Nr;
            memset(w1[Nr], 0, sizeof(w1[Nr]));  // here will clean the allocated memory
            //printf("In %s, Zeile %d, Nr:%d, MarkerNr:%d\n",__FILE__,__LINE__,Nr,MarkerNr);
        }
        
        if ( input[lauf]!=marker && Nr==MarkerNr) {
            //printf("In %s, Zeile %d, Input:%s, lauf:%d, w1[%d]:%s, w1[%d][%d]:%c\n",__FILE__,__LINE__,input,lauf,Nr,w1[Nr],Nr,idx,w1[Nr][idx]);
            w1[Nr][idx]=input[lauf];
            //printf("In %s, Zeile %d, Input:%s, lauf:%d, w1[%d]:%s, w1[%d][%d]:%c\n",__FILE__,__LINE__,input,lauf,Nr,w1[Nr],Nr,idx,w1[Nr][idx]);
            ++idx;
        }
        ++lauf;
    }

    result=w1[MarkerNr];
    //printf("In %s, Zeile %d, Input:%s, resule:%s, MarkerNr:%d\n",__FILE__,__LINE__,input,result,MarkerNr);

    /**********************************************************************
    Test  2, Fehlerhaft, Noch Herr Kurrek Fragen warum w1 nach strcpy immer noch alt Inhalt beibehalten
    static char w1[99]="";
    //static char w1[]=""; //hier macht ein Fehler das w1 dierekt Inhalt von Input bekommt !!!!!!!!!!!!!!
    //-printf("In %s, Zeile %d, w1:%s, strlen of w1: %ld\n",__FILE__,__LINE__,w1,strlen(w1));
    int lauf=0,Nr=0,idx=0;
    //printf("In %s, Zeile %d, Input:%s, strlen of Input: %ld\n",__FILE__,__LINE__,input,strlen(input));
    
    ************************************************
    //Diese Abschnitt ist nur für Fehler suchen
    for (lauf=0; lauf<strlen(input); ++lauf) {    
        if ( input[lauf]!=marker && input[lauf]!='\0') {
            w1[Nr]=input[lauf];
            printf("In %s, Zeile %d, w1:%s, Nr: %d, lauf: %d, w1[Nr]: %c, w1[lauf]: %c.\n",__FILE__,__LINE__,w1,Nr,lauf,w1[Nr],w1[lauf]);
            ++Nr;
        }
    }
    ************************************************
    strcpy(w1, "");
    while (input[lauf]!='\0' && lauf<=strlen(input)) {
        if (input[lauf]==marker) {
            ++Nr;
            //printf("In %s, Zeile %d, Nr:%d, MarkerNr:%d\n",__FILE__,__LINE__,Nr,MarkerNr);
        }
        
        if ( input[lauf]!=marker && Nr==MarkerNr) {
            //printf("In %s, Zeile %d, Input:%s, lauf:%d, w1[%d]:%s, w1[%d][%d]:%c\n",__FILE__,__LINE__,input,lauf,Nr,w1[Nr],Nr,idx,w1[Nr][idx]);
            w1[idx]=input[lauf];
            //printf("In %s, Zeile %d, Input:%s, lauf:%d, w1[%d]:%s, w1[%d][%d]:%c\n",__FILE__,__LINE__,input,lauf,Nr,w1[Nr],Nr,idx,w1[Nr][idx]);
            ++idx;
        }
        ++lauf;
    }

    result=w1;
    //printf("In %s, Zeile %d, Input:%s, resule:%s, MarkerNr:%d\n",__FILE__,__LINE__,input,result,MarkerNr);
    **********************************************************************/
    return result;
}

#endif