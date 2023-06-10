#include <stdio.h>
#include <string.h>

struct person
{
    char vorname[41];
    char nachname[41];
    unsigned int gebdat;
    void printfpers1(void)
    {
        printf("%s %s Geb.: %d\n", vorname, nachname, gebdat);
    }
    void printfpers2(void)
    {
        printf("%s, %s Geb.: %d\n", nachname, vorname, gebdat);
    }
    
};
int main(void)
{
    struct person a;
    strcpy(a.vorname, "Beton");
    strcpy(a.nachname, "Micha");
    a.gebdat = 20000101;
    a.printfpers1();
    a.printfpers2();
    return 0;
}

/*****************

|------------------------|
|       person           |
|------------------------|
| vorname :  char[0..41] |
| nachname:  char[0..41] |
| gebdat: unsigned int   |
|------------------------|
|   printfpers1()        |
|   printfpers2()        |
|------------------------|

******************/