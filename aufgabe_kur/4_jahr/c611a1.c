#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int hole_plz(const char *s){
    int zahl = 0,len = sizeof(s),x=0;
    char plz[5]="";
    for (int i = 0 ; i<len; ++i) {
        if (s[i]-'0' >= 0 && s[i]-'0' <= 9) {
            
            plz[x] += s[i];
            x++;
        }
    }
    zahl = atoi(plz);
    x=0;
    return zahl;
}

int main(){
    char anschrift[100]="DE-33607_Bielefeld, Hermann-Delius-Str. 4";
    printf("PLZ : %d\n",hole_plz(anschrift));
    return 0;
}