#include <stdio.h>

char *inputcode(int AnzahlRing,int languageNr){
    static char farbecode[40];
    
    char *Example[3][2];
    Example[0][0]="Example: yellow-violet-red-gold\nor \t yl-vio-rd-gd";
    Example[0][1]="Beispiel: gelb-violett-rot-gold\noder \t  gb-vio-rt-gd";
    Example[1][0]="Example: yellow-violet-red-orange-gold\nor \t yl-vio-rd-og-gd";
    Example[1][1]="Beispiel: gelb-violett-rot-orange-gold\noder \t  gb-vio-rt-or-gd";
    Example[2][0]="Example: yellow-violet-red-orange-gold-yellow\nor \t yl-vio-rd-og-gd-yl";
    Example[2][1]="Beispiel: gelb-violett-rot-orange-gold-gelb\noder \t  gb-vio-rt-or-gd-gb";

    char *color[2];
    color[0]="Available colour:\nblack - bk | brown - bn | red - rd | orange - og | yellow - yl | green - gn\nblue - bl | violet - vt | grey - gy | white - wh | gold - gd | sliver - sr";
    color[1]="Verfügbare Farbe:\nschwarz - sw | braun - br | rot - rt | orange - or | gelb - yl | grün - gn\nblau - bl | violett - vi | grau - gr | weiß - ws | gold - gd | silber - sr";

    printf("\n%s\n",Example[AnzahlRing-4][languageNr]);
    printf("%s\n",color[languageNr]);


    return farbecode;
}
