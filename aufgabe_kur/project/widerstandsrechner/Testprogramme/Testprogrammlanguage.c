#include <stdio.h>
#include "language.c"


int main (void)
{
    int x;
    x=language();
    
    
    if(x==0)
    {
        printf("Ihre ausgewählte Sprache ist Englisch\n");
    }
    if(x==1)
    {
        printf("Ihre ausgewählte Sprache ist Deutsch\n");
    }
    
    return 0;
}
