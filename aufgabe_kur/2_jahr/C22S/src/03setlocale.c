#include <stdio.h>  // fuer printf
#include <locale.h> // fuer setlocale und LC_ALL
int main(void)
{ 
   printf("Hier fange ich an mit x=%g.\n", 3.5);
   setlocale(LC_ALL, "");
   printf("Hier hoere ich auf mit x=%g.\n", 3.5);
   return 0;
}
