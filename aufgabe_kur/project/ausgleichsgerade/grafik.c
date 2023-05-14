#include <stdio.h>
#include <liner.h>
#include <unistd.h>

void grafik(double** liste, int Anzahl){
    char s[4]="";
    //if(liner_init()!=0){
    //    perror("Liner Error");
    //    return;
    //}
    puts("1");
    if(liner_init_xywh(0,0,10, 10, 640, 840)!=0){
        perror("Liner Error");
        return;
    }
    puts("2");
    line(0, 10, 600, 10);
    line(10, 0, 440, 0);
    line(0,0,450,450);
    puts("3");
    for (int x=0 ; x< Anzahl; ++x) {
        pixel(liste[x][0], liste[x][1]);
        sprintf(s, "P%d",x);
        text(liste[x][0], liste[x][1],s);
    }
    puts("4");
    text(100, 5, "X");
    text(5, 100, "Y");

    puts("5");
    //sleep(5);
    puts("6");
    liner_exit();
    puts("7");
    return;
}