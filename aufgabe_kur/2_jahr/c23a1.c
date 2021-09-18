#include <psliner.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void clear_D()
{
    system("clear");
}

void printdatum()
{
    system("date");
}

void printbs()
{
    system("uname -a");
}

void printnutzer()
{
    system("whoami");
}

void printproz()
{
    system("ps -a");
}

void printplatz()
{
    system("df");
}
 
int main()
{
    while (1) {
    clear_D();
    printdatum();
    printbs();
    printnutzer();
    printproz();
    printplatz();
    sleep(1);
    }


}

