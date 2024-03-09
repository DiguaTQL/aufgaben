#include <stdio.h>
#include <time.h>
#include <locale.h>

int main(void){
    struct tm start={.tm_hour=0};
    time_t t, jetzt,t_sec;
    int x=0,y=0;

    t=time(NULL);
    setlocale(LC_ALL, "");
    jetzt=time(NULL);
    printf("Datum eingeben:\n");
    printf("Tage......:");
    scanf("%d",&start.tm_mday);
    printf("Monate......:");
    scanf("%d",&x);
    printf("Jahr......:");
    scanf("%d",&y);
    printf("Uhr......:");
    scanf("%d",&start.tm_hour);

    //double diff =0;
    start.tm_mon =x-1;
    start.tm_year = y-1900;
    //t_sec =mktime(&start);
    double diff=(jetzt -mktime(&start))/3600.0;

    char anz[80],anz2[80];
    strftime(anz, 80, "%d. %B %Y um %H:%M Uhr", localtime(&jetzt));
    strftime(anz2, 80, "%d. %B %Y um %H:%M Uhr", localtime(&jetzt));
    printf("%s\n",anz2);
    printf("Betriebszeit : %d.%d.%d, %d Uhr bis %s\n",start.tm_mday,x,y,start.tm_hour,anz);
    printf("Betriebsdauer (aufgerundet): %lf Stunden\n",diff);

    return 0;
}