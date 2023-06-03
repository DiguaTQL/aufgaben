#include <stdio.h>
#include <string.h>

struct pkwtyp{
    char kennz[20];
    int kmstand;
    void printpkw(void)
    {
        printf("%s, %d\n",kennz,kmstand);
    }
};

int main(void){
    struct pkwtyp fw;
    strcpy(fw.kennz, "BI-XY123");
    fw.kmstand=20000;
    fw.printpkw();
    return 0;
}