#include<stdio.h>

int main()
{
    double h=100-0.5*10*3*3;
    double res = h<0?0:h;
    printf("height = %f",res);
    return 0;
}