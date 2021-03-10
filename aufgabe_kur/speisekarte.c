#include<stdio.h>

int main(void)
{
   printf("Speierkarte\n");
   printf("Pommes Frites: %5.2f EUR\n",2.20);
   printf("Mineralwassers: %5.2f EUR\n",12.20);
   printf("Anzahl der Beilagen: %i \n",2);

   printf("Ketchup:%i cent, Mayonnaise: %i cent\n",20,30);
   printf("Ketchup und Mayonnaise: %i cent\n",20+30);

   printf("100 Ohm parallel 200 Ohm: %.3f Ohm\n",100.*200./(100.+200.));
   return 0;
}
