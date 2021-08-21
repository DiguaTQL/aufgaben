#include <stdio.h>  // fuer printf
#include <stdlib.h> // fuer rand
int main(void)
{ 
   int x;
   x=rand();
   printf("Zufallszahl: %i\n", x);
   x=rand();
   printf("Zufallszahl: %i\n", x);
   return 0;
} 
