#include <stdio.h>
#include <string.h>
#include "findminus.c"
#include "split.c"

int codecheck(char *farbecode, int AnzahlRing, int languageNr){
    //printf("In %s, zeile %d, farbecode: %s\nstrlen of farbecode: %ld, sizeof farbecode: %ld\n",__FILE__,__LINE__,farbecode,strlen(farbecode),sizeof(farbecode));

    int minus=0;
    char *minusnr[2];
    char *errorminus[2];
    minusnr[0]="Number of detects colors:";
    minusnr[1]="Anzahl der erkannten Farben:";
    errorminus[0]="The number of entered color incorrect, please try again.";
    errorminus[1]="Die Anzahl von eingegebenen Farbe fehlerhaft, bitte erneut eingeben.";
    minus=findeminus(farbecode);
    //printf("minus=%d\n",minus);
    if (minus != (AnzahlRing-1)) {
        puts("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        printf("%s%d\n%s\n",minusnr[languageNr],minus+1,errorminus[languageNr]);
        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        return 1;
    }
    //black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh-gold-gd-sliver-sr
    //schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws-gold-gd-silber-sr
    char *ring[6][2]={{""}};
    ring[0][0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh";//Ring 1 bei 4,5,6
    ring[0][1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws";
    ring[1][0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh";//Ring 2 bei 4,5,6
    ring[1][1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws";
    if (AnzahlRing == 4) {
        ring[2][0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh-gold-gd-sliver-sr";//Ring 3 Multiplikator bei 4
        ring[2][1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws-gold-gd-silber-sr";
        ring[3][0]="brown-bn-red-rd-green-gn-blue-bu-violet-vt-grey-gy-gold-gd-sliver-sr";//Ring 4 Toleranz bei 4
        ring[3][1]="braun-br-rot-rt-grün-gn-blau-bl-violett-vi-grau-gr-gold-gd-silber-sr";
    }else {
        ring[2][0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh";//Ring 3 bei 5,6
        ring[2][1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws";
        ring[3][0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh-gold-gd-sliver-sr";//Ring 4 Multiplikator bei 5,6
        ring[3][1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws-gold-gd-silber-sr";
        ring[4][0]="brown-bn-red-rd-green-gn-blue-bu-violet-vt-grey-gy-gold-gd-sliver-sr";//Ring 5 Toleranz bei 5,6 
        ring[4][1]="braun-br-rot-rt-grün-gn-blau-bl-violett-vi-grau-gr-gold-gd-silber-sr";
        ring[5][0]="brown-bn-red-rd-orange-og-yellow-ye-blue-bu-violet-vt";//Ring 6 PPM bei 6 
        ring[5][1]="braun-br-rot-rt-orange-or-gelb-gb-blau-bl-violett-vi";
    }


    char w1[6][10]={{""}};
    char w2[10]="";
    int i;
    for (int i=0;  i<AnzahlRing; ++i) {
        //w1=split(farbecode, '-', i);
        strcpy(w1[i], split(farbecode, '-', i));
        //printf("In %s, Zeile %d, farbecode: %s, farbering: %d , w1:%s, strlen of w1: %ld\n",__FILE__,__LINE__,farbecode,i+1,w1[i],strlen(w1[i]));
        //puts(w1[i]);
    }

    char errorinputring[2][100];

    int check=0;
    for (i=0; i<AnzahlRing; ++i) {
        int ring_minus=findeminus(ring[i][languageNr]);
        for (int x=0; x<=ring_minus; ++x) {
            //w2=split(ring[i][languageNr], '-', x);
            strcpy(w2,split(ring[i][languageNr], '-', x));
            //printf("In %s, Zeile %d, farbering: %d, w1:%s, strlen of w1: %ld\n",__FILE__,__LINE__,i+1,w1[i],strlen(w1[i]));
            //printf("In %s, Zeile %d, farbering: %d, w2:%s, strlen of w2: %ld\n",__FILE__,__LINE__,i+1,w2,strlen(w2));
            if (x<=ring_minus) {
                if (strcmp(w1[i], w2)==0) {
                
                    //printf("Eingabe Ring %d ist gültig.\n",i+1);
                    break;
                }
                else if (x == ring_minus) {
                    if (check == 0) 
                        puts("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");   
                    sprintf(errorinputring[0],"The entered color of ring %d is invalid, input : %s.",i+1,w1[i]);
                    sprintf(errorinputring[1],"Die eingegebene Farbe von Ring %d ist ungültig,, Eingabe : %s.",i+1,w1[i]);
                    puts(errorinputring[languageNr]);
                    check=1;
                    break;
                }
            }
        }
    }
    char *erroragain[2];
    erroragain[0]="Please try again!";
    erroragain[1]="Bitte Versuchen Sie noch ein Mal!";
    if (check==1) {
        puts(erroragain[languageNr]);
        puts("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        return 1;
    }
    
    
    return 0;
}