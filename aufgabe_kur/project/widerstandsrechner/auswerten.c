#include <stdio.h>
#include <string.h>
#include <math.h>
#include "resistor.h"
#include "findminus.c"
#include "split.c"

struct resistor auswerten(char *farbecode, int AnzahlRing, int languageNr){
    struct resistor widerstand;

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

    return widerstand;
}