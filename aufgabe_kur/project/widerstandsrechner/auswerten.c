#include <stdio.h>
#include "resistor.h"
#include "findminus.c"
#include "split.c"

struct resistor auswerten( char *farbecode, int AnzahlRing, int languageNr){
    struct resistor x;
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

    int idx = 0;
    for (idx =0; idx<AnzahlRing; ++idx) {
        int minus=findeminus(ring[idx][languageNr]);
        
    }
    
    return x;
}