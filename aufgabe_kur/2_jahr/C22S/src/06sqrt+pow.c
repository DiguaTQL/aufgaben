#include <stdio.h> // fuer printf 
#include <math.h>  // fuer sqrt und pow
int main(void)
{ 
   double x, y, z;
   x = 49.0;
   y = sqrt(x);
   printf("Wurzel von 49: %g\n", y);
   x = 10.0;
   y = 3.0;
   z = pow(x, y); // z <- x hoch y
   printf("10 hoch 3: %g\n", z);
   return 0;
}
