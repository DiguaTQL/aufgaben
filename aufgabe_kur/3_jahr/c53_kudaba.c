#include <stdio.h>
#include <string.h>

#define LZE while(getchar()!='\n') {}
#define MaxAnzahl 10

struct persontyp
{
    char nachname[30];
    char vorname[30];
    unsigned long gd;
};

struct persontyp scanperson(void)
{
    struct persontyp person;
    
    printf("Datensatz eingeben:\n");

    printf("Nachname:");
    scanf("%29[^\n]",person.nachname);
    while(getchar()!='\n') {}

    printf("Vorname:");
    scanf("%29[^\n]",person.vorname);
    while (getchar()!='\n') {}

    printf("Geburtsdatum:");
    scanf("%lu",&person.gd);
    while(getchar()!='\n') {}

    return person;
}   

void printpersion( int x, struct persontyp b)
{
    printf("%d %s %s %lu\n",x+1,b.nachname,b.vorname,b.gd);
}

int main(void){
    int m=0,c=0,deletnum=0;
    struct persontyp kudaba[MaxAnzahl]={{.nachname=""}/*,{.nachname=""},{.nachname=""},{.nachname=""},{.nachname=""},{.nachname=""},{.nachname=""},{.nachname=""},{.nachname=""},{.nachname=""}*/};

    do {
        
        puts("Kundendaten");
        puts("----------------------------");        
        puts("<0> Ende");        
        puts("<1> Alle Daten ausgeben");        
        puts("<2> Neuen Datensatz eingeben");    
        puts("<3> Datensatz löschen");        
        puts("----------------------------");
        printf("Ihre Auswahl:");
        scanf("%d",&m);        
        while(getchar()!='\n') {}

        switch(m) {
            case 0:
                puts("Ende.");
                break;

            case 1:
                puts("Alle Kundendaten ausgeben:");
                for (int i=0; i<c; ++i) {
                    printpersion(i, kudaba[i]);
                }
                puts("----------------------------");
                break;

            case 2:
                if (c<MaxAnzahl) {
                printf("Liste Nr. %i ",c+1);
                kudaba[c]=scanperson();
                ++c;
                puts("----------------------------");
                }
                else {
                puts("Error: Datenbank voll!");
                puts("----------------------------");
                }
                break;

            case 3:
                for (int i=0; i<c; ++i) {
                    printpersion(i, kudaba[i]);
                }
                printf("Welche Datensatz sollt gelöscht wird: ");
                scanf("%d",&deletnum);
                LZE;
                for (int i=deletnum-1; i<c; ++i) {
                    if (i < MaxAnzahl) {
                    kudaba[i] = kudaba[i+1];
                    }
                    c--;
                }
                puts("----------------------------");
                
                
                break;

            default: printf("Input Invalid!\n"); break;
        }        

    }while (m!=0);
}