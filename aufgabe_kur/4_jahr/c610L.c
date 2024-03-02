#include <stdio.h>
#include <time.h>

int main(void){
    struct tm gt={.tm_hour=8,.tm_year=100,.tm_mon=9,.tm_mday=13}; //13.10.2000 8:00 //tm fämgt jahr 1900
    time_t getsec, jetzt;
    jetzt=time(NULL);
    getsec = mktime(&gt);
    printf("Sie sind %li Sek. alt.\n",jetzt-getsec);

    return 0;
}