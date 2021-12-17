#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//*
//caesar2
int main(){
    int zeichen;
    printf("Bitte Text eingeben:\n");
    zeichen=getchar();
    while (zeichen!=EOF) {
        if (isalpha(zeichen)) {
            if (isupper(zeichen)){
                if (zeichen == 'Z'){
                    putchar('A');
                }else {
                    putchar(zeichen+1);
                }
            }else if (islower(zeichen)) {
                if (zeichen =='z') {
                    putchar('a');
                }else {
                    putchar(zeichen+1);
                }
            }
        }else {
            putchar(zeichen);
        }
            zeichen=getchar();
    }
    printf("Ende\n");
    return 0;
}
//*/


/*
//caesar3
int main(){
    int zeichen;
    printf("Bitte Text eingeben:\n");
    zeichen=getchar();
    while (zeichen!=EOF) {
        if (isalpha(zeichen)) {
            if (isupper(zeichen)){
                if (zeichen == 'Z'){
                    //putchar('A');
                    printf("%d\t",zeichen-25);
                }else {
                    //putchar(zeichen+1);
                    printf("%d\t",zeichen+1);
                }
            }else if (islower(zeichen)) {
                if (zeichen =='z') {
                    //putchar('a');
                    printf("%d\t",zeichen-25);
                }else {
                    //putchar(zeichen+1);
                    printf("%d\t",zeichen+1);
                }
            }
        }else {
            //putchar(zeichen);
            printf("%d\t",zeichen);
        }
            zeichen=getchar();
    }
    printf("Ende\n");
    return 0;
}



*/