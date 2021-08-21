#include <stdio.h> // fuer printf und getchar
#include <time.h>  // fuer clock
int main(void)
{ 
   int x;
   x = clock();
   printf("Laufzeit: %i ticks\n", x);
   printf("Zeichen eingeben und Enter druecken:");
   x = getchar();
   while(getchar()!='\n'){}
   printf("ASCII-Zeichen: %i\n", x);
   x = clock();
   printf("Laufzeit: %i ticks\n", x);
   return 0;
}
