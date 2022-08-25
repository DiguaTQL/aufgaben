#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char zk[]="Hier steht ein Textz.";
    int lauf, ascii;

    for(lauf=0; zk[lauf]!='\0'; ++lauf)
    {
        if(islower(zk[lauf]))
        {
            ascii=zk[lauf];
            if(ascii>96 && ascii<110)
            {
                zk[lauf]=ascii+13;
            }
            else 
            {
            zk[lauf]=ascii-13;
            }
        }
    }
    printf("%s\n", zk);
}