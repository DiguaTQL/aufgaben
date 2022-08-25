#include <stdio.h>

int main(void)
{
    char s[41]="-leer-";

    scanf("%40[^\n]", s);
    while(getchar()!='\n'){}
    printf("Ihre Eingabe: %s\n", s);

    return 0;
}