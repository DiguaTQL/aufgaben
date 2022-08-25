#include <stdio.h>

int main(void)
{
    char s[41]="-leer-";
    char ss;
    int lauf; 

    printf("Bitte Geben Sie Ihren Text ein.");
    lauf=0;

    ss = getchar();
    while(ss!='\n')
    {
        s[lauf]=ss;
        lauf++;
        ss = getchar();
    }
    s[lauf]='\0';

    printf("Der Eingegebene Text lautet: %s\n", s);

    return 0;
}