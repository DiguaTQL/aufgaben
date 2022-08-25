#include <stdio.h>
#include <string.h>

int main(void)
{
    char zk[]="Hier steht ein Text.";
    int lauf;

    for(lauf=0; zk[lauf]!='\0'; ++lauf)
    {
        if(zk[lauf]=='t')
        {
            zk[lauf]='T';
        }
    }
    printf("%s\n", zk);
    return 0;

}