#include<stdio.h>

int main()
{
    int x;
    double res=0.0;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        res+=1./i;
    }
    printf("sum = %.6f",res);
    return 0;
}