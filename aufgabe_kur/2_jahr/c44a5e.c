#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char fm[81]="Wenn hier eine Ziffer steht haben wir 4 ein Proble4m.";
    int lauf;

    for(lauf=0; fm[lauf]!= '\0'; ++lauf)
    {
        if(isdigit(fm[lauf]))
        {
            printf("Enthält Ziffer an Pos.: %i\n", lauf);
        }
    }
    return 0;
}