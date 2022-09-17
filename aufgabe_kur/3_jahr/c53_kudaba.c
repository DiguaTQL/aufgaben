#include <stdio.h>

struct persontyp{
    char vorname[30];
    char nachname[30];
    unsigned long gd;
};

struct persontyp scanperson(void){
    struct persontyp a;
    puts("Datensatz eingeben");
    printf("Nachname:");
    scanf("%29[^\n]",a.nachname);
    while (getchar()!='\n') {}
    printf("Vorname:");
    scanf("%29[^\n]",a.vorname);
    while (getchar()!='\n') {}
    printf("Geburtsdatum:");
    scanf("%lu",&a.gd);
}   

void printpersion( int x, struct persontyp b){
    printf("%d %s %s %lu\n",x,b.nachname,b.nachname,b.gd);
}

int main(void){
    int m;

    puts("Kundendaten");
    puts("----------------------------");        
    puts("<0> Ende");        
    puts("<1> Alle Daten ausgeben");        
    puts("<2> Neuen Datensatz eingeben");        
    puts("----------------------------");
    printf("Ihre Auswahl:");
    scanf("%d",&m);

    switch(m) {
        case 0:
            puts("Ende.");
            break;

        case 1:
            printf("a ist eins\n");
            break;

        case 2:
            printf("a ist zwei\n");
            break;

        case 3: printf("a ist drei\n"); break;

        default: printf("Input Invalid!\n"); break;
    }        

}