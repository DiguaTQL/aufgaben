#include <stdio.h>
#include <string.h>

struct punkttyp
{
    double x,y;
    void scanfpunkt(void)
    {
    	printf("x:");
        scanf("%lf", &x);
        printf("y:");
        scanf("%lf", &y);
        
    }
    void printfpunkt(void)
    {
        printf("%g, %g\n", x, y);
    }
};
int main(void)
{
    struct punkttyp a;
    a.scanfpunkt();
    a.x = a.x * 2;
    a.printfpunkt();
    return 0;
}

/*****************

|---------------------|
|      punkttyp       |
|---------------------|
|    x,y : double     |
|---------------------|
|   scanfpunkt()      |
|   printfpunkt()     |
|---------------------|

******************/