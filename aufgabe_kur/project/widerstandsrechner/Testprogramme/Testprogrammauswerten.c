#include <stdio.h>
#include <string.h>
#include "auswerten.c"
#include "resistor.h"

int main (void)
{
    struct resistor widerstand;
    
    int RingAnzahl=4;
    
    char* testfarbe[3];
    
    testfarbe[0]="gb-vi-rt-gd";
    testfarbe[1]="gb-vi-rt-og-gd";
    testfarbe[2]="gb-vi-rt-og-gd-gb";
    
    int i=0;
    
    do
    {
        printf("Gerpüfter Inhalt:%s\n", testfarbe[i]);
        widerstand=auswerten(testfarbe[i], RingAnzahl, 1);
        printf("Ausgegebener Wert:\n");
        
        switch(RingAnzahl)
        {
            case 4: printf("Ring 1 Nr:%d   Ring 2 Nr:%d   Multifakt:%g   Toleranz:%s%\n",widerstand.Ring_1_nr,widerstand.Ring_2_nr,widerstand.Multifakt,widerstand.Toleranz);break;
            case 5: printf("Ring 1 Nr:%d   Ring 2 Nr:%d   Ring 3 Nr:%d   Multifakt:%g   Toleranz:%s\n",widerstand.Ring_1_nr,widerstand.Ring_2_nr,widerstand.Ring_3_nr,widerstand.Multifakt,widerstand.Toleranz);break;
            case 6: printf("Ring 1 Nr:%d   Ring 2 Nr:%d   Ring 3 Nr:%d   Multifakt:%g   Toleranz:%s   Tempko:%dppm\n",widerstand.Ring_1_nr,widerstand.Ring_2_nr,widerstand.Ring_3_nr,widerstand.Multifakt,widerstand.Toleranz,widerstand.Tempko);break;
        }
    printf("\n");
    
    ++i;
    ++RingAnzahl;
    }
    while(i<3);
    
    return 0;
}
