#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char zk[]="Hier steht ein Text.";
    int lauf, ascii;

    for(lauf=0; zk[lauf]!='\0'; ++lauf)
    {
        if(islower(zk[lauf]))
        {
            ascii=zk[lauf];
            if(ascii==122)
            {
                zk[lauf]='a';
            }
            else 
            {
                ++ascii;
                zk[lauf]=ascii;
            }
           
        }
    }
    printf("%s\n", zk);
    return 0;
}