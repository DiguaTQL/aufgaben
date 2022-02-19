#include <stdio.h>
void verdoppel ( float *pzahl );

int main ( void)
{
float zahl = 12.0;
verdoppel (&zahl ) ;
printf ( "Neuer Wert de r Zahl : %g \n" ,zahl ) ; /* muss 2 4 . 0 e rg eb e n */
verdoppel (&zahl ) ;
printf ( "Neuer Wert de r Zahl : %g \n" ,zahl ) ; /* muss 4 8 . 0 e rg eb e n */
return 0 ;
}
void verdoppel(float *pzahl){
    *pzahl=*pzahl*2;
}