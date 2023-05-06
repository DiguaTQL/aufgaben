#include <stdio.h>

double** korrektur(double** list, int Anzahl){                                        // Eingegebene Liste als Parameter
    int nr=0;
    puts("(3) Daten korrigieren:");
    puts("--------------------");
    printf("Welche Punkt wollen Sie korrigieren (0 für Ende) :");
    scanf("%d",&nr);                                               // Wunschnummer fragen
    while (getchar()!='\n') {}
    if (nr <= Anzahl &&  nr >0) {
        while(nr !=0) {
            printf("Alter x-Werte = %g\n",list[nr-1][0]);
            printf("Neuer x-Werte : ");
            scanf("%lf",&list[nr-1][0]);                               // Neu x-Wert schreiben
            while (getchar()!='\n') {}
            printf("Alter y-Werte = %g\n",list[nr-1][1]);
            printf("Neuer y-Werte : ");
            scanf("%lf",&list[nr-1][1]);                               // Neu y-Wert schreiben
            while (getchar()!='\n') {}          
            printf("Welche Punkt wollen Sie korrigieren (0 für Ende) :");
            scanf("%i",&nr);                                           // Neuer Wunschnummer fragen   
            while (getchar()!='\n') {}

        }
    }
    else {
        puts("Ungültige Eingabe!");
    }

    puts("");
    return list;                                                    // Liste wieder zurückgeben
}