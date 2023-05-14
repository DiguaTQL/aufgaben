#include <stdio.h>

void berechnung(double** liste, int Anzahl){
    puts("(6) Ausgleichsgerade ermitteln:");
    puts("--------------------");
    double sigma_x =0, sigma_y=0, sigma_xy=0, sigma_x2 =0, sigma_y2 =0, b=0, m=0; 

    for (int x =0 ; x<Anzahl; ++x) {
        sigma_x = sigma_x + liste[x][0];                    // Summe X Punkten
        sigma_y = sigma_y + liste[x][1];                    // Summe Y Punkten
        sigma_xy = sigma_xy + (liste[x][0] *liste[x][1]);   // Summe XY 
        sigma_x2 = sigma_x2 + (liste[x][0] *liste[x][0]);   // Summe X2 
        sigma_y2 = sigma_y2 + (liste[x][1] *liste[x][1]);   // Summe Y2
    }
    
    b = (sigma_y * sigma_x2 - sigma_x * sigma_xy)/(Anzahl * sigma_x2 - sigma_x * sigma_x);  // b berechnen
    m = (Anzahl * sigma_xy - sigma_x * sigma_y)/(Anzahl * sigma_x2 - sigma_x * sigma_x);    // m berechnen

    printf("b = %.2g\n",b);
    printf("m = %.2g\n",m);
    printf("y = %.2g + %.2gx\n\n",b,m);                   // Ausgleichsgerade zusammenstellen

    return;
}