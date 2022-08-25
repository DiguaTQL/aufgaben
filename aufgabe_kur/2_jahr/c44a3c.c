#include <stdio.h>

int main(void)
{
    char s[41]="-leer-";

    printf("Bitte geben Sie den Text ein =>");
    fgets(s, sizeof(s), stdin);

    printf("Ihre Eingabe: %s\n", s);

    return 0;
}