#include <stdio.h>
#include <string.h>

struct pkwtyp{
    char kennz[20];
    int kmstand;
};

void printpkw(struct pkwtyp p){
    printf("%s, %d\n",p.kennz,p.kmstand);
}

int main(void){
    struct pkwtyp fw;
    strcpy(fw.kennz, "BI-XY123");
    fw.kmstand=20000;
    printpkw(fw);
    return 0;
}