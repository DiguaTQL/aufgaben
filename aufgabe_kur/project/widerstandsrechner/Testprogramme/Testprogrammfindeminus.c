#include <stdio.h>
#include "findeminus.c"

int main (void)
{
    printf("Hier finden Sie das Testprogramm für findeminus.c\n");
    
    int x=0;
    char input[500];
    
    printf("Bitte geben sie ihren Text ein\n");
    scanf("%s", input);
    
    //x=findeminus(input);
    
    printf("Anzahl = %i \n", findeminus(input));
    
    return 0;
}
