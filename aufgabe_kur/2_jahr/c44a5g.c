#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char fm[81]="Wen4n hier eine Zi4ffer steht haben wir 4 ein Proble4m.";
    int lauf, counter;

    for(lauf=0; fm[lauf]!= '\0'; ++lauf)
    {
        if(isdigit(fm[lauf]))
        {
            printf("Enthält Ziffer an Pos.: %i\n", lauf);
            ++counter;
        }
    }
    printf("Die Zeichenkette enthält %i Ziffern.\n", counter);
    return 0;
}