#include<stdio.h>

int main(void)
{
   printf("\nAufgabe 1\n\n");
   printf("Ersatzwiderstand der Parallelschaltung:680\u03A9 und 470\u03A9\n");
   printf("Ergebniss:%.3f\u03A9 (Version1) \n",680.*470./(680.+470.));
   printf("Ergebniss:%.3f\u03A9 (Version2)\n",1./((1./680.)+(1./470.)) );
   printf("\n\n");

   printf("Aufgabe 2\n\n");
   float a;
   a=3.14159265*1.2*1.2/4;
   printf("Querschnittsfl\u00E4che: %.3fA\u00B2 \n",a);
   printf("Leiterwiderstand: %.4f\u03A9\n",0.0179*48.5/a);
   printf("\n\n");

   printf("Aufgabe 3 \n\n");
   int t1=32,t2=40,t3=48;

   printf("Temperatur 1: %i\u2109 = %.2f\u2103\n",t1,(t1-32.)*5/9);
   printf("Temperatur 2: %i\u2109 = %.2f\u2103\n",t2,(t2-32.)*5/9);
   printf("Temperatur 3: %i\u2109 = %.2f\u2103\n",t3,(t3-32.)*5/9);
   printf("\n\n");

   printf("Aufgabe 4 \n\n");
   int  wj=4850000;
   float day=365,month=12, week=52;
   printf("P\u00AFmonth= %iWh / %.0fmonths = %.2fWh =%.2fkWh\n",wj,month,wj/month,wj/month/1000);
   printf("P\u00AFweek= %iWh / %.0fweeks = %.2fWh =%.2fkWh\n",wj,week,wj/week,wj/week/1000);
   printf("P\u00AFday= %iWh / %.0fdays = %.2fWh =%.2fkWh\n",wj,day,wj/day,wj/day/1000);
   printf("\n");

   return 0;

}
