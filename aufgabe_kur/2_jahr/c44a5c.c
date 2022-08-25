#include <stdio.h>
#include <string.h>

int main(void)
{
    char fm[81]="Hallo dieser Fehöer text soll auf Fehler prüfen %";
    int lauf;

    for(lauf=0; fm[lauf]!= '\0'; ++lauf)
    {
        if(fm[lauf]=='%')
        {
            printf("Element Nr: %i enthält verbotenes Zeichen\n", lauf);
        }
    }

    return 0;
}