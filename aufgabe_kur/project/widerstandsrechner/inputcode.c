#include <stdio.h>

char *inputcode(int AnzahlRing,int languageNr){
    static char farbecode[100]="";// static char (string) immer Länge eingeben, nicht dynamisch lassen !!!!!!
    
    char *Example[3][2];
    Example[0][0]="Example: yellow-violet-red-gold\nor \t ye-vt-rd-gd";
    Example[0][1]="Beispiel: gelb-violett-rot-gold\noder \t  gb-vi-rt-gd";
    Example[1][0]="Example: yellow-violet-red-orange-gold\nor \t ye-vt-rd-og-gd";
    Example[1][1]="Beispiel: gelb-violett-rot-orange-gold\noder \t  gb-vi-rt-or-gd";
    Example[2][0]="Example: yellow-violet-red-orange-gold-yellow\nor \t ye-vt-rd-og-gd-ye";
    Example[2][1]="Beispiel: gelb-violett-rot-orange-gold-gelb\noder \t  gb-vi-rt-or-gd-gb";

    char *color[2];
    color[0]="Available colour:\t-!!!- NO CAPs -!!!-\nblack - bk | brown - bn | red - rd | orange - og | yellow - ye | green - gn\nblue - bu | violet - vt | grey - gy | white - wh | gold - gd | sliver - sr";
    color[1]="Verfügbare Farbe:\t-!!!- NICHT groß schreiben -!!!-\nschwarz - sw | braun - br | rot - rt | orange - or | gelb - gb | grün - gn\nblau - bl | violett - vi | grau - gr | weiß - ws | gold - gd | silber - sr";
    //Norm IEC 60757 / DIN 47002
    printf("\n%s\n",Example[AnzahlRing-4][languageNr]);
    printf("%s\n",color[languageNr]);    
    puts("---------------------------------------");
    char *frage[2];
    frage[0]="Please enter the colour code:";
    frage[1]="Bitte geben Sie die Farbe Code ein:";
    printf("%s\n",frage[languageNr]);    
    scanf("%99[^\n]",farbecode);
    while (getchar()!='\n') {}

    return farbecode;
}
