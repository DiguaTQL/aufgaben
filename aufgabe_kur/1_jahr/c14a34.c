#include <stdio.h>

int main(){
    int x, y, z;
    unsigned int ux, uy, uz;
    x=15;
    y=015;
    z=0x15;
    printf("Ausgabe in %%i:\n");
    printf("15 : %i\n", x);
    printf("015 : %i\n", y);
    printf("0x15 : %i\n\n", z);
    printf("Ausgabe in %%d:\n");
    printf("15 : %d\n", x);
    printf("015 : %d\n", y);
    printf("0x15 : %d\n\n", z);

    ux=15;
    uy=015;
    uz=0x15;
    printf("Ausgabe in %%u:\n");
    printf("15 : %u\n", ux);
    printf("015 : %u\n", uy);
    printf("0x15 : %u\n\n", uz);
    printf("Ausgabe in %%o:\n");
    printf("15 : %o\n", ux);
    printf("015 : %o\n", uy);
    printf("0x15 : %o\n\n", uz);
    printf("Ausgabe in %%x:\n");
    printf("15 : %x\n", ux);
    printf("015 : %x\n", uy);
    printf("0x15 : %x\n", uz);


}