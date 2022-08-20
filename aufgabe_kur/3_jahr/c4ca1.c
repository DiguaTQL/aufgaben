#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(void){
    char s[100]="";
    char t[100]="";

    strcpy(s, "Hallo");
    strcpy(t, "Willi");
    strcat(s, " ");
    strcat(s, t);
    printf("%s\n",s);
    return 0;
}