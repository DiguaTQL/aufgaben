#include <stdio.h>
#include <string.h>

class punkttyp
{
    double x,y;
    public:
    void scanfpunkt(void)
    {
    	printf("x:");
        scanf("%lf", &x);
        printf("y:");
        scanf("%lf", &y);
        
    }
    void printfpunkt(void)
    {
        x= x*2;
        printf("%g, %g\n", x, y);
    }
};
int main(void)
{
    class punkttyp a;
    a.scanfpunkt();
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