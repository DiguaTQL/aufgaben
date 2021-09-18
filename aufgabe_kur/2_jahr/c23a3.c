#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void h(){
    puts("*******");  
    puts("   *");
    puts("   *");
    puts("*******");
    puts("");
}

void e(){
    puts("*******");  
    puts("*  *  *");
    puts("*  *  *");
    puts("");
}

void l(){
    puts("*******");  
    puts("*");
    puts("*");
    puts("");
}

void o(){
    puts(" *****");  
    puts("*     *");
    puts("*     *");
    puts(" *****");  
    puts("");
}

int main(){
    while (1) {
    h();
    e();
    l();
    l();
    o();
    sleep(1);
    }
}