#include <stdio.h>

void a(){
    int widreihe [6] = {10 ,15 ,22 ,33 ,47 ,68};
    int lauf;

    for (lauf=0; lauf<6 ; ++lauf) {
        printf(" Die %d.Nummer ist %d.\n",lauf+1,widreihe[lauf]);
    }
    printf("\n");
    for (lauf=5; lauf>-1 ; --lauf) {
        printf(" Die %d.Nummer ist %d.\n",lauf+1,widreihe[lauf]);
    }

    return;};


void b(){
    return;};


void c(){
    return;};


void d(){
    return;};


void e(){
    return;};


void f(){
    return;};


void g(){
    return;};


void h(){
    return;};


void i(){
    return;};


void j(){
    return;};


void k(){
    return;};


void l(){
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
                puts("Input Invalid!");
                return 1;
        }
        return 0;
    }
    else {
        puts("Input Invalid!");
        return 1;
    }



            
    

}