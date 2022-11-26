#include <stdio.h>
#include <string.h>
#include <math.h>
#include "resistor.h"
#include "findminus.c"
#include "split.c"

struct resistor auswerten(char *farbecode, int AnzahlRing, int languageNr){
    struct resistor widerstand;
    /*char *ring[6][2]={{""}};
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
    char *farbe_t[2];
    char *Multiplikator[2];
    char *Toleranz[2];
    char *PPM[2];
    farbe_t[0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh";    
    farbe_t[1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws";    
    Multiplikator[0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh-gold-gd-sliver-sr";
    Multiplikator[1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws-gold-gd-silber-sr";
    Toleranz[0]="brown-bn-red-rd-green-gn-blue-bu-violet-vt-grey-gy-gold-gd-sliver-sr";
    Toleranz[1]="braun-br-rot-rt-grün-gn-blau-bl-violett-vi-grau-gr-gold-gd-silber-sr";
    PPM[0]="brown-bn-red-rd-orange-og-yellow-ye-blue-bu-violet-vt";
    PPM[1]="braun-br-rot-rt-orange-or-gelb-gb-blau-bl-violett-vi";*/
    char *farbe[12][4]={{"black" ,"bk","schwarz","sw"},
                        {"brown" ,"bn","braun"  ,"br"},
                        {"red"   ,"rd","rot"    ,"rt"},
                        {"orange","og","orange" ,"or"},
                        {"yellow","ye","gelb"   ,"gb"},
                        {"green" ,"gn","grün"   ,"gn"},
                        {"blue"  ,"bu","blau"   ,"bl"},
                        {"violet","vt","violett","vi"},
                        {"grey"  ,"gy","grau"   ,"gr"},
                        {"white" ,"wh","weiß"   ,"ws"},
                        {"gold"  ,"gd","gold"   ,"gd"},
                        {"sliver","sr","silber" ,"sr"}};


    char w1[6][10]={{""}};
    //char w2[10]="";
    int idx = 0;
    for (idx =0; idx<AnzahlRing; ++idx) {
        strcpy(w1[idx], split(farbecode, '-', idx));
        
        for (int farbe_idx=0; farbe_idx<12; ++farbe_idx) {
            for (int format_idx=0; format_idx<4; ++format_idx) {
                if(strcmp(w1[idx], farbe[farbe_idx][format_idx])==0){
                    switch (idx) {

                        case 0:                                         //1st Ring
                            widerstand.Ring_1_nr=farbe_idx;break;  

                        case 1:                                         //2te Ring
                            widerstand.Ring_2_nr=farbe_idx;break;  

                        case 2:                                         //3te Ring
                            if (AnzahlRing==4) {                //4er Ring
                                switch (farbe_idx) {
                                    case 10:widerstand.Multifakt=0.1;break;
                                    case 11:widerstand.Multifakt=0.01;break;
                                    default:
                                        if (farbe_idx<7)
                                            widerstand.Multifakt=pow(10.0 , (double)farbe_idx);
                                        break;
                                        
                                }
                            }else {                             //5er, 6er Ring
                                widerstand.Ring_3_nr=farbe_idx;
                            }
                            break;

                        case 3:                                         //4te Ring
                            if (AnzahlRing==4) {                //4er Ring
                                switch (farbe_idx) {
                                    case 1:strcpy(widerstand.Toleranz,"1%");break;
                                    case 2:strcpy(widerstand.Toleranz,"2%");break;
                                    case 5:strcpy(widerstand.Toleranz,"0.5%");break;
                                    case 6:strcpy(widerstand.Toleranz,"0.25%");break;
                                    case 7:strcpy(widerstand.Toleranz,"0.1%");break;
                                    case 10:strcpy(widerstand.Toleranz,"5%");break;
                                    case 11:strcpy(widerstand.Toleranz,"10%");break;
                                }
                            }
                            else {
                                switch (farbe_idx) {            //5er, 6er Ring
                                    case 10:widerstand.Multifakt=0.1;break;
                                    case 11:widerstand.Multifakt=0.01;break;
                                    default:
                                        if (farbe_idx<7)
                                            widerstand.Multifakt=pow(10.0 , (double)farbe_idx);
                                        break;
                                        
                                }
                            }
                            break;
                        
                        case 4:                                         //5te Ring
                            switch (farbe_idx) {
                                    case 1:strcpy(widerstand.Toleranz,"1%");break;
                                    case 2:strcpy(widerstand.Toleranz,"2%");break;
                                    case 5:strcpy(widerstand.Toleranz,"0.5%");break;
                                    case 6:strcpy(widerstand.Toleranz,"0.25%");break;
                                    case 7:strcpy(widerstand.Toleranz,"0.1%");break;
                                    case 10:strcpy(widerstand.Toleranz,"5%");break;
                                    case 11:strcpy(widerstand.Toleranz,"10%");break;
                                }
                            break;

                        case 5:                                         //6te Ring
                            switch (farbe_idx) {
                                    case 0 :widerstand.Tempko=250;break;
                                    case 1 :widerstand.Tempko=100;break;
                                    case 2 :widerstand.Tempko=50;break;
                                    case 3 :widerstand.Tempko=15;break;
                                    case 4 :widerstand.Tempko=25;break;
                                    case 5 :widerstand.Tempko=20;break;
                                    case 6 :widerstand.Tempko=10;break;
                                    case 7 :widerstand.Tempko=5;break;
                                    case 8 :widerstand.Tempko=1;break;
                                }
                            break;

                    }
                }
                //printf("In %s, zeile %d, idx: %d, farbe_idx: %d, format_idx: %d, w1[idx]: %s, farbe[farbe_idx][format_idx]: %s\n",__FILE__,__LINE__,idx,farbe_idx,format_idx,w1[idx],farbe[farbe_idx][format_idx]);
            }
        }
        
    }

    /*for (idx=0; idx<AnzahlRing; ++idx) {
        int ring_minus=findeminus(ring[idx][languageNr]);
        for (int x=0; x<=ring_minus; ++x) {
            strcpy(w2,split(ring[idx][languageNr], '-', x));
            if (x<=ring_minus) {
                if (strcmp(w1[idx], w2)==0) {
                    if (strcmp(w2, "black")==0) {
                        
                    }
                    break;
                }
               
            }
        }
    }*/



    
    return widerstand;
}