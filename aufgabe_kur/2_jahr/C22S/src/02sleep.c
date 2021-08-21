#include <stdio.h>  // fuer printf
#include <unistd.h> // fuer sleep, nicht Standard-C!
int main(void)
{ 
   printf("Hier fange ich an.\n");
   sleep(3);
   printf("Hier hoere ich auf.\n");
   return 0;
} 
