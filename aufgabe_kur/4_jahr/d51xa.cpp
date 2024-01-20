#include <stdio.h>
#include <string.h>

//
struct persontyp
{
    char nachname[30];
    char vorname[30];
    long gebdat;
    void print(void)
    {
        printf( "Nachname : %s \nVorname : %s \nGeb.-Dat.:%02i .%02i .%04i \n",nachname , vorname , gebdat%100, gebdat/100%100 ,gebdat/10000);
    }

    void  init(const char *nn , const char *vn , long gd)
    {
        strcpy(nachname,"");
        strcpy(vorname,"");
        gebdat = 0;
        strncat(nachname , nn , sizeof(nachname)-1);
        strncat(vorname , vn , sizeof(vorname)-1);
        gebdat=gd;
    }

    void aendere_nachname(const char *nn)
    {
        nachname[0]='\0';
        strncat(nachname,nn, sizeof(nachname)-1);
    }
};

int main()
{
    struct persontyp mitarb ;
    mitarb.init( "Meier" , "Willi" , 19601020 );
    mitarb.aendere_nachname("Meyer");
    mitarb.print();
    return 0;
}