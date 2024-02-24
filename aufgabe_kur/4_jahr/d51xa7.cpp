#include<stdio.h>
#include<string.h>
#include<time.h>
 
struct aufzeichnungstyp
{
    private:
    time_t zeitpunkt;
    int dauer_in_sec;
    char ort[200];
    char thema[200];

    public:
    void init(int neu_dauer,const char *neu_ort,const char *neu_thema);
    void setze_zeitpunkt(int tag,int mon,int jahr);
    void print(void);
};


void aufzeichnungstyp::init(int neu_dauer,const char *neu_ort,const char *neu_thema)
{
    dauer_in_sec=neu_dauer;
    strncat(ort,neu_ort,sizeof(ort)-1);
    strncat(thema,neu_thema,sizeof(thema)-1);
}

 
void aufzeichnungstyp::setze_zeitpunkt(int tag,int mon,int jahr)
{
    struct tm zeit_rec={0,0,0,tag,mon-1,jahr-1900};
    zeitpunkt=mktime(&zeit_rec);//paufz−>zeitpunkt=...
}
 
void aufzeichnungstyp::print()
{
    printf("Thema....: %s\n",thema);
    printf("Zeitpunkt: %s",ctime(&zeitpunkt));
    printf("Ort......: %s\n",ort);
    printf("Dauer....: %i Sekunden\n",dauer_in_sec);
}
 
int main(void)
{
    struct aufzeichnungstyp aktuelle_doku;
    aktuelle_doku.init(40,"Bremen","Weser-Hochwasser␣Dez.␣2023");
    aktuelle_doku.setze_zeitpunkt(29,12,2023);
    aktuelle_doku.print();
    return 0;
}