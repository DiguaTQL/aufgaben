#include<stdio.h>
#include<string.h>
#include<time.h>
 
struct aufzeichnungstyp
{
    time_t zeitpunkt;
    int dauer_in_sec;
    char ort[200];
    char thema[200];

    //void setze_zeitpunkt()
    void setze_zeitpunkt(struct aufzeichnungstyp *paufz,int tag,int mon,int jahr);
    void print(struct aufzeichnungstyp aufz)
};
 
struct aufzeichnungstyp init(int neu_dauer,const char *neu_ort,const char *neu_thema)
{
    struct aufzeichnungstyp erg={0};
    erg.dauer_in_sec=neu_dauer;
    strncat(erg.ort,neu_ort,sizeof(erg.ort)-1);
    strncat(erg.thema,neu_thema,sizeof(erg.thema)-1);
    return erg;
}
 
aufzeichnungstyp::setze_zeitpunkt(struct aufzeichnungstyp *paufz,int tag,int mon,int jahr)
{
    struct tm zeit_rec={0,0,0,tag,mon-1,jahr-1900};
    (*paufz).zeitpunkt=mktime(&zeit_rec);//paufz−>zeitpunkt=...
}
 
aufzeichnungstyp::print(struct aufzeichnungstyp aufz)
{
    printf("Thema....: %s\n",aufz.thema);
    printf("Zeitpunkt: %s",ctime(&aufz.zeitpunkt));
    printf("Ort......: %s\n",aufz.ort);
    printf("Dauer....: %i Sekunden\n",aufz.dauer_in_sec);
}
 
int main(void)
{
    struct aufzeichnungstyp aktuelle_doku;
    aktuelle_doku=init(40,"Bremen","Weser-Hochwasser␣Dez.␣2023");
    aktuelle_doku.setze_zeitpunkt(&aktuelle_doku,29,12,2023);
    aktuelle_doku.print(aktuelle_doku);
    return 0;
}