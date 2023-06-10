#include <stdio.h>
#include <string.h>

struct punktzeittyp
{
    unsigned char std, min, sek;
    void scanfzeit(void)
    {
    	printf("Stunde:");
        scanf("%hhu", &std);
        while (getchar()!='\n') {}

        printf("Minute:");
        scanf("%hhu", &min);
        while (getchar()!='\n') {}

        printf("Sekunde:");
        scanf("%hhu", &sek);
        while (getchar()!='\n') {}

    }
    void printfzeit(void)
    {
        printf("%hhu: %hhu: %hhu\n", std, min, sek);
    }
};
int main(void)
{
    struct punktzeittyp t;
    t.scanfzeit();
    t.std = t.std +1;
    t.printfzeit();
    return 0;
}

/*****************

|---------------------|
|      punktzeittyp   |
|---------------------|
| std : unsigned char |
| min: unsigned char  |
| sek: unsigned char  |
|---------------------|
|   scanfzeit()       |
|   printfzeit()      |
|---------------------|

******************/