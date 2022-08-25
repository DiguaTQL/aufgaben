#include <stdio.h>
#include <string.h>

int main(void)
{
    char zk[]="Hier steht ein Text.";
    int lauf;

    for(lauf=0; zk[lauf]!='\0'; ++lauf)
    {
        if(zk[lauf]=='a' || zk[lauf]=='i' || zk[lauf]=='o' || zk[lauf]=='u')
        {
            zk[lauf]='e';
        }
    }
    printf("%s\n", zk);
    return 0;

}