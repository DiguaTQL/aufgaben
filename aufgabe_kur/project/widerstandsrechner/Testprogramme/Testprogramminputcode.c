#include <stdio.h>
#include <string.h>
#include "inputcode.c"

int main (void)
{
    char* x;
    x=inputcode(5,1);
    
   
    if(strcmp(x,"")!=0)
    {
        printf("Input ist gültig: Inhalt:%s\n",x);
    }
    else if((strcmp(x,"")==0))
    {
        printf("Input ist ungültig\n");
    }
    
    return 0;
}
