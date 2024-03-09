#include <stdio.h>
#include <stdlib.h>

int main(void){

    char dname[1024]="";
    for (int lauf =400; lauf < 2118; ++lauf) {
        FILE *dm;
        sprintf(dname, "IMG%04d.JPG", lauf);
        dm=fopen(dname, "r");
        if (dm!=NULL) {
            fclose(dm);
            printf(">>%s<< exist.\n",dname);
        }
    }
    return 0;
}