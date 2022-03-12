#include <stdio.h>
char aufgabe2;
int x=0,y=0,z=0;

void a(){   //Aufgabe 1
    int widreihe [6] = {10 ,15 ,22 ,33 ,47 ,68};
    int lauf,lauf2;

    puts("arrayausgabe1.c");
    for (lauf=0; lauf<6 ; ++lauf) {
        printf(" Die %d.Nummer ist %d.\n",lauf+1,widreihe[lauf]);
    }
    puts("\narrayausgabe2.c");
    for (lauf2=5; lauf2>=0; --lauf2) {
        printf(" Die %d.Nummer ist %d.\n",lauf2+1,widreihe[lauf2]);
    }

    return;};


void b(){   //Aufgabe 2
    int wert[5],wert1[5];

    puts("arraysetzen1.c");
    for (x=0;x<5; ++x) {
        wert[x]=33604;
        printf("Die %d.Nummer ist %i.\n",x+1,wert[x]);
    }
    puts("\narraysetzen1.c");
    for (y=0;y<5; ++y) {
        wert1[y]=y*10;
        printf("Die %d.Nummer ist %i.\n",y+1,wert1[y]);
    }


    return;};


void c(){   //Aufgabe 3
    double strom[5] = {7.0, 7.1, 7.0, 6.9, 7.0};
    double summe=0.0, mittelwert=0.0;
    //printf("Bitte Aufgabe <a-d> eingeben:");
    scanf("%s",&aufgabe2);

    switch (aufgabe2) {
            case 'a':
               puts("\narraysumme.c");
               for(x=0; x<5; ++x){
                   summe=summe+strom[x];
               }
               printf("Die Summe sind %g.\n",summe);
                break;

            case 'b':
                puts("\narrayamw.c");
               for(x=0; x<5; ++x){
                   summe=summe+strom[x];
               }
                mittelwert=summe/x;
                printf("Der arithmetische Mittelwert sind %g.\n",mittelwert);
                break;

            case 'c':
                puts("\narrayhmw.c");
               for(x=0; x<5; ++x){
                   summe=summe+1/strom[x];
               }
                mittelwert=x/summe;
                printf("Der harmonische Mittelwert sind %g.\n",mittelwert);
                
                break;

                
            case 'd':
                puts("\narrayrmw.c");
               for(x=0; x<5; ++x){
                   summe=summe+strom[x]*strom[x];
               }
                mittelwert=summe*1.41421356;
                printf("Der Effektivwert sind %g.(?)\n",mittelwert);
                break;

                
            default:
                puts("Input Invalid!");
                return ;
        }
    return;};


void d(){   //Aufgabe 4
    int folge[5]={1, -2, 4, -8, 16};
    //printf("Bitte Aufgabe <a-d> eingeben:");
    scanf("%s",&aufgabe2);

    switch (aufgabe2) {
            case 'a':
               puts("\narraypruefen1.c");
               if (folge[0]<0) {
               printf("Index 0 ist nicht negativ.(?)\n");
               }
                break;

            case 'b':
                puts("\narraypruefen2.c");
               for(x=0; x<5; ++x){
                   if (folge[x]<0) {
                        printf("%d.Index ist negativ.\n",x+1);
                   }
               }
                break;

            case 'c':
                puts("\narraypruefen3.c");
                for(x=0; x<5; ++x){
                   if (folge[x]<0) {
                       y=y+1;
                   }
               }
               if (y>=1) {
                    printf("Es gibt mindestes ein negatives Element in array.\n");
               }
                
                break;

                
            case 'd':
                puts("\narraypruefen4.c");
               for(x=0; x<5; ++x){
                   if (folge[x]<0) {
                       y=y+1;
                   }
               }
                printf("Es gibt %d negative Element(en) in array.\n",y);
               
                break;

                
            default:
                puts("Input Invalid!");
                return ;
        }
    return;};


void e(){   //Aufgabe 5
    double verbrauch [6] = { 7.0 , 3.2 , 8.1 , 2.9 , 9.5 , 4.1 } ;
    double max=0,min;
    puts("\narraymax.c");
    for(x=0; x<6; ++x){
        if (verbrauch[x]>max) {
            max=verbrauch[x];
        }
    }
    printf("Das größte Element des Arrays ist %g.\n",max);

    puts("\narraymin.c");
    for(y=0; y<5; ++y){
        if (verbrauch[y]<verbrauch[y+1]) {
            min=verbrauch[y];
        }
    }
    printf("Das kleinste Element des Arrays ist %g.\n",min);
    return;};


void f(){   //Aufgabe 6
    int kontostand[5]={ -300, 400, -140, 20, -3000};
    int kontostand1[5]={ -300, 400, -140, 20, -3000};
    puts("\narraysubst1.c");
    for (x=0; x<5; ++x) {
        if (kontostand[x]<0) {
            kontostand[x]=0;
        }
        printf(" Die %d.Nummer ist %d.\n",x+1,kontostand[x]);
    }

    puts("\narraysubst2.c");
    for (y=0; y<5; ++y) {
        kontostand1[y]=2*kontostand1[y];
        printf(" Die verdoppelt %d.Nummer ist %d.\n",y+1,kontostand1[y]);
    }    
    return;};


void g(){   //Aufgabe 7
    int kontostand[5]={ -300, 400, -140, 20, -3000};
    int kontokopie [10]= { 0 };
    //printf("Bitte Aufgabe <a-d> eingeben:");
    scanf("%s",&aufgabe2);

    switch (aufgabe2) {
            case 'a':
                puts("\narraykopieren1.c");
                for (x=0; x<10; ++x) {
                //kontokopie[x]=kontostand[x%5];
                    if (x<=4) {
                        kontokopie[x]=kontostand[x];
                    }
                    printf(" Die %d.Nummer von array kontokopie ist %d.\n",x+1,kontokopie[x]);
                }
                break;

            case 'b':
                puts("\narraykopieren2.c");
                 for (x=0; x<10; ++x) {
                    if (x<=4) {
                        kontokopie[x]=2*kontostand[x];
                    }
                    printf(" Die %d.Nummer von array kontokopie ist %d.\n",x+1,kontokopie[x]);
                }
                break;

            case 'c':
                puts("\narraykopieren3.c");
                for (x=0; x<10; ++x) {
                    if (x<=4 && kontostand[x]>0) {
                        kontokopie[x]=kontostand[x];
                    }
                    printf(" Die %d.Nummer von array kontokopie ist %d.\n",x+1,kontokopie[x]);
                }
                break;

                
            case 'd':
                puts("\narraykopieren4.c");
                for (x=0; x<10; ++x) {
                //kontokopie[x]=kontostand[x%5];
                    if (x>4) {
                        kontokopie[x]=kontostand[x-5];
                    }
                    printf(" Die %d.Nummer von array kontokopie ist %d.\n",x+1,kontokopie[x]);
                }
                break;

                
            default:
                puts("Input Invalid!");
                return ;
        }
    return;};


void h(){   //Aufgabe 8
    int drehzahl[4]={16,33,45,78};
    int kopie[8]={0};
    scanf("%s",&aufgabe2);

    switch (aufgabe2) {
            case 'a':
                puts("\narraystrecken1.c");
                for (x=0; x<8; ++x) {
                    if ( !(x%2) ) {
                        kopie[x]=drehzahl[x/2];
                    }
                    printf(" Die %d.Nummer von array kopie ist %d.\n",x+1,kopie[x]);
                }
                break;

            case 'b':
                puts("\narraystrecken2.c");
                for (x=0; x<8; ++x) {
                    
                    kopie[x]=drehzahl[x/2];
                    
                    printf(" Die %d.Nummer von array kopie ist %d.\n",x+1,kopie[x]);
                }
                break;

            case 'c':
                puts("\narraystrecken3.c");
                for (x=0; x<8; ++x) {
                    if (!(x%2) && x<4) {
                        kopie[y]=drehzahl[x];
                        y++;   
                    }
                }
                for (y=0; y<8; ++y) {
                    printf(" Die %d.Nummer von array kopie ist %d.\n",y+1,kopie[y]);
                }
                break;

                
            case 'd':
                puts("\narraystrecken4.c");
                for (x=0; x<8; ++x) {
                    if (!(drehzahl[x]%2) && x<4) {
                        kopie[y]=drehzahl[x];
                        y++;
                    }
                }
                for (y=0; y<8; ++y) {
                    printf(" Die %d.Nummer von array kopie ist %d.\n",y+1,kopie[y]);
                }
                break;

                
            default:
                puts("Input Invalid!");
                return ;
        }
    return;};


void i(){   //Aufgabe 9
    double spannung[4]={115, 230, 400, 1000};
    double kopie[4];
    puts("\narraysumkehr1.c");
    for (x=0; x<4; ++x) {
        if (x==1) {
            kopie[x]=spannung[x-1];
        }
        else if (x==0) {
            kopie[x]=spannung[x+1];
        } 
        else {
            kopie[x]=spannung[x];
        }
        printf(" Die %d.Nummer von array kopie ist %g.\n",x+1,kopie[x]);

    }
    puts("\narraysumkehr2.c");
    z=3;
    for (y=0; y<4; ++y) {
        if (z<4&&z>=0) {
        kopie[y]=spannung[z];
        z--;
        }
        printf(" Die %d.Nummer von array kopie ist %g.\n",y+1,kopie[y]);
    }

    return;};


void j(){   //Aufgabe 10
    int uhr;
    int temperatur[24]={0};
    scanf("%s",&aufgabe2);

    switch (aufgabe2) {
            case 'a':
                puts("\ntemp1.c");
                for (x=0; x<24; ++x) {
                    printf(" Bitte die Temperatur um %d Uhr eingeben:",x);
                    scanf("%i",&temperatur[x]);
                }
                puts("---------------------------------------------------");
                for (uhr=0; uhr<24; ++uhr) {
                    printf("%d:00 %d Grad\n",uhr,temperatur[uhr]);
                }
                break;

            case 'b':
                puts("\ntemp2.c");
                for (x=0; x<24; ++x) {
                    printf(" Bitte die Temperatur um %d Uhr eingeben:",x);
                    scanf("%i",&temperatur[x]);
                }
                puts("---------------------------------------------------");
                for (uhr=0; uhr<24; ++uhr) {
                    printf("%d:00 ",uhr);
                    for (y=0; y<temperatur[uhr]; ++y) {
                    printf("*");
                    }
                    printf("\n");
                }
                break;

            case 'c':
                puts("\ntemp3.c");
                for (x=0; x<24; ++x) {
                    printf(" Bitte die Temperatur um %d Uhr eingeben:",x);
                    scanf("%i",&temperatur[x]);
                }
                puts("---------------------------------------------------");
                for (uhr=0; uhr<24; ++uhr) {
                    printf("%d:00 ",uhr);
                    if (temperatur[uhr]>0){
                        for (y=0; y<temperatur[uhr]; ++y) {
                            printf("+");
                        }
                    }else if (temperatur[uhr]<0) {
                        for (y=0; y>temperatur[uhr]; --y) {
                            printf("-");
                        }
                    }else {
                        printf("0");
                    }
                    printf("\n");
                }
                break;
               
            default:
                puts("Input Invalid!");
                return ;
        }
    return;};


void k(){   //Aufgabe 11
    int kandidaten[5]={0};
    int eingabe;
    scanf("%s",&aufgabe2);
    switch (aufgabe2) {
            case 'a':
                puts("\nwahl1.c");
                do {
                    printf("Ihre Wahl (0-4, Ende mit 5):");
                    scanf("%i",&eingabe);
                if (eingabe>=0 && eingabe<=4) {
                ++kandidaten[eingabe];
                }else {
                    if (eingabe!=5) {
                        puts("Input Invalid!");
                    }
                }
                }while (eingabe!=5);
                puts("---------------------------------------------------");
                for (x=0; x<5; ++x) {
                    printf("Kand. %d:%d Stimmen\n",x,kandidaten[x]);
                }
                break;

            case 'b':
                puts("\nwahl2.c");
                do {
                    printf("Ihre Wahl (0-4, Ende mit 5):");
                    scanf("%i",&eingabe);
                if (eingabe>=0 && eingabe<=4) {
                ++kandidaten[eingabe];
                }else {
                    if (eingabe!=5) {
                        puts("Input Invalid!");
                    }
                }
                }while (eingabe!=5);
                puts("---------------------------------------------------");
                for (x=0; x<5; ++x) {
                    printf("Kand. %d:",x);
                    if (kandidaten[x]!=0) {
                        for (y=0; y<kandidaten[x]; ++y) {
                            printf("*");
                        }
                        printf("\n");
                    }else {
                        printf("0\n");
                    }
                }
                break;

               
            default:
                puts("Input Invalid!");
                return ;
        }
    return;};


void l(){   //Aufgabe 12
    int note[8]={0};
    int anzahl=0,nextnote=0;
    double mittelwert=0.0,summe=0.0;
    scanf("%s",&aufgabe2);
    switch (aufgabe2) {
            case 'a':
                puts("\nklassenspiegel1.c");
                for (x=0; x<6; ++x) {
                    printf("Wie oft kam Note %d vor:",x+1);
                    scanf("%i",&note[x]);
                    anzahl=anzahl+note[x];
                    summe=summe+((x+1)*note[x]);
                }
                if (anzahl==0) {
                    mittelwert=0;
                }else {
                    mittelwert=summe/anzahl; 
                }
                //note[6]=mittelwert;
                //note[7]=anzahl;
                printf("|1\t|2\t|3\t|4\t|5\t|6\t|AMW\t|ANZ\t|\n");
                printf("-----------------------------------------------------------------\n");
                for (y=0; y<6; ++y) {
                    printf("|%d\t",note[y]);
                }
                printf("|%g\t|%d\t|\n",mittelwert,anzahl);
                break;

            case 'b':
                puts("\nklassenspiegel2.c");
                /*for (x=0; x<6; ++x) {
                    printf("Wie oft kam Note %d vor:",x+1);
                    scanf("%i",&note[x]);
                    anzahl=anzahl+note[x];
                    summe=summe+((x+1)*note[x]);
                }*/
                do {
                    printf("Bitte die Note des naechsten Schülers eingeben (Ende mit 0):");
                    scanf("%i",&nextnote);
                    if (nextnote>0 && nextnote<=6) {
                        ++note[nextnote-1];
                    }else {
                    if (nextnote!=0) {
                        puts("Input Invalid!");
                    }
                }
                }while (nextnote!=0);
                for (x=0; x<6; ++x) {
                    anzahl=anzahl+note[x];
                    summe=summe+((x+1)*note[x]);
                }
                if (anzahl==0) {
                    mittelwert=0;
                }else {
                    mittelwert=summe/anzahl; 
                }
                //note[6]=mittelwert;
                //note[7]=anzahl;
                printf("|1\t|2\t|3\t|4\t|5\t|6\t|AMW\t|ANZ\t|\n");
                printf("-----------------------------------------------------------------\n");
                for (y=0; y<6; ++y) {
                    printf("|%d\t",note[y]);
                }
                printf("|%g\t|%d\t|\n",mittelwert,anzahl);
                break;

               
            default:
                puts("Input Invalid!");
                return ;
        }
    return;};


int main(){
    int aufgabe;
    printf("Bitte Aufgabe Nummer <1-12> eingeben:");
    scanf("%d",&aufgabe);

    if (aufgabe>0 && aufgabe<13) {

        switch (aufgabe) {
            case 1:
                a();
                break;

            case 2:
                b();
                break;

            case 3:
                c();
                break;

            case 4:
                d();
                break;

            case 5:
                e();
                break;

            case 6:
                f();
                break;
                
            case 7:
                g();
                break;
            case 8:
                h();
                break;
                
            case 9:
                i();
                break;
                
            case 10:
                j();
                break;
                
            case 11:
                k();
                break;
                
            case 12:
                l();
                break;
                
            default:
                puts("Input Invalid!-2");
                return 1;
        }
        return 0;
    }
    else {
        puts("Input Invalid!-1");
        return 1;
    }



            
    

}