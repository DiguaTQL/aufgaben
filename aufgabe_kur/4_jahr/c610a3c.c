#include <stdio.h>
#include <time.h>
#include <locale.h>

int main(void){
    time_t t = time(NULL);
    struct tm timeinfo = *localtime(&t);

    char anz[80];
    setlocale(LC_ALL, "");
    strftime(anz, 80, "%A, der %d. %B %Y um %H:%M Uhr", &timeinfo);
    printf("Aktuelles Datum und Uhrzeit: %s\n",anz);
    return 0;
}