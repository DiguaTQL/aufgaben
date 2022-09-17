#include <stdio.h>

struct regalbrett{
    unsigned breite;
    unsigned tiefe;
    unsigned dicke;
    char holzart[24];
};

int main(void){
    struct regalbrett reagl_1;
    printf("Bereite:");
    scanf("%u",&reagl_1.breite);
    while (getchar()!='\n'){}

    printf("Tiefe:");
    scanf("%u",&reagl_1.tiefe);
    while (getchar()!='\n'){}
    
    printf("Dicke:");
    scanf("%u",&reagl_1.dicke);
    while (getchar()!='\n'){}

    fgets(reagl_1.holzart, 24,stdin);

}