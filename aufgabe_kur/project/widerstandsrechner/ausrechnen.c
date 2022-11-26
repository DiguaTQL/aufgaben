#include <stdio.h>
#include <string.h>
#include "resistor.h"

void ausrechnen(struct resistor widerstand, int Ringanzahl, int languageNr)
{

    double Endwert1;
    double Endwert2;
    puts("---------------------------------------");
    if (Ringanzahl == 4)
    {
        Endwert1=((widerstand.Ring_1_nr*10)+(widerstand.Ring_2_nr*1))*widerstand.Multifakt;
    }
    else if (Ringanzahl >= 5)
    {
        Endwert2=((widerstand.Ring_1_nr*100)+(widerstand.Ring_2_nr*10) +(widerstand.Ring_3_nr*1))*widerstand.Multifakt;
    }
    if (languageNr==0) {
        if (Ringanzahl == 4)
            printf("The resistor has %g Ohms, +/- %s tolerance\n", Endwert1, widerstand.Toleranz);
        else if (Ringanzahl == 5)
            printf("The resistor has %g Ohms, +/- %s tolerance\n", Endwert2, widerstand.Toleranz);
        else if (Ringanzahl == 6)
            printf("The resistor has %g Ohms, +/- %s tolerance, PPM %ippm\n", Endwert2, widerstand.Toleranz, widerstand.Tempko);
    }else if (languageNr==1) {
        if (Ringanzahl == 4)
            printf("Der Widerstandswert beträgt %g Ohms, +/- %s Toleranz\n", Endwert1, widerstand.Toleranz);
        else if (Ringanzahl == 5)
            printf("Der Widerstandswert beträgt %g Ohms, +/- %s Toleranz\n", Endwert2, widerstand.Toleranz);
        else if (Ringanzahl == 6)
            printf("Der Widerstandswert beträgt %g Ohms, +/- %s Toleranz, Temperaturkoeffizient %ippm\n", Endwert2, widerstand.Toleranz, widerstand.Tempko);
    }
}
