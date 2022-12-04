#include <stdio.h>
#include "findminus.c"
#include "split.c"

int main (void)
{
    char *ring[6][2]={{""}};
    ring[0][0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh";//Ring 1 bei 4,5,6
    ring[0][1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws";
    ring[1][0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh";//Ring 2 bei 4,5,6
    ring[1][1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws";
    ring[2][0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh";//Ring 3 bei 5,6
    ring[2][1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws";
    ring[3][0]="black-bk-brown-bn-red-rd-orange-og-yellow-ye-green-gn-blue-bu-violet-vt-grey-gy-white-wh-gold-gd-sliver-sr";//Ring 3 Multiplikator bei 4 ; Ring 4 Multiplikator bei 5,6
    ring[3][1]="schwarz-sw-braun-br-rot-rt-orange-or-gelb-gb-grün-gn-blau-bl-violett-vi-grau-gr-weiß-ws-gold-gd-silber-sr";
    ring[4][0]="brown-bn-red-rd-green-gn-blue-bu-violet-vt-grey-gy-gold-gd-sliver-sr";//Ring 4 Toleranz bei 4 ; Ring 5 Toleranz bei 5,6 
    ring[4][1]="braun-br-rot-rt-grün-gn-blau-bl-violett-vi-grau-gr-gold-gd-silber-sr";
    ring[5][0]="brown-bn-red-rd-orange-og-yellow-ye-blue-bu-violet-vt";//Ring 6 PPM bei 6 
    ring[5][1]="braun-br-rot-rt-orange-or-gelb-gb-blau-bl-violett-vi";



        int i;
        char w2[10]="";
        
        for (i=0; i<6; ++i) 
        {
        int ring_minus=findeminus(ring[i][1]);
        printf("\n\nTextinhalt:%s\n\n",ring[i][1]);
        puts("------------------------------------");
        
        for (int x=0; x<=ring_minus; ++x) 
            {
                strcpy(w2,split(ring[i][1], '-', x));
            
                printf("w%i=%s   ", i,w2);
            }
        };
        printf("\n");
    return 0;
}
