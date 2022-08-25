#include <stdio.h>

//Warum hat zk 41 statt 40 Elemente? - Es soll eine 40 Zeichen lange zk erstellt werden, 
//der Terminator belegt den 41. Platz

int main(void)
{
    char zk[41];
    printf("Bitte geben Sie ein belibieges zeichen ein.---> ");
    zk[0]=getchar();
    printf("%s%39s",zk, zk);

    return 0;
}