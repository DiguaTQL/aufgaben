#include <stdio.h>
#include <string.h>

char *split(char *input, char marker, int MarkerNr){
    char *result;
    int lauf=0;
    while (input[lauf]=marker) {
        result[lauf]=input[lauf];
        ++lauf;
    }
    puts(result);
    return result;
}