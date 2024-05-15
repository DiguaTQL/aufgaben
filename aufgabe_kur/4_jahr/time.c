#include <stdio.h>
#include <time.h>


int main(){
    
    time_t zeit = time(NULL);
    printf("%ld\n",zeit);
    return 0;
}