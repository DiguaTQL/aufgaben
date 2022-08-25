#include <stdio.h>
#include <string.h>

int main(void)
{
    char fm[81]="Wenn hier eine Ziffer steht haben wir 4 ein Proble4m.";
    int lauf, vergleich;

    for(lauf=0; fm[lauf]!= '\0'; ++lauf)
    {
        vergleich=fm[lauf];
        if(vergleich>47 && vergleich<58)
        {
            printf("Enthält Ziffer an Pos.: %i\n", lauf);
        }
    }
    return 0;
}