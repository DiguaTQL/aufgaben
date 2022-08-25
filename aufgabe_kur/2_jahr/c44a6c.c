#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char zk[]="Hier steht ein Text.";
    int lauf;

    for(lauf=0; zk[lauf]!='\0'; ++lauf)
    {
        if(islower(zk[lauf]))
        {
            zk[lauf]='a';
        }
    }
    printf("%s\n", zk);
    return 0;

}