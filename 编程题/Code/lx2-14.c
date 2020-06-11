#include <stdio.h>

int main()
{
    int x;
    double res = 0.0;
    scanf("%d", &x);
    int i = 1, j = 1;
    while (i <= x)
    {
        res += 1. / j;
        j = j + 2;
        i++;
    }
    printf("sum = %.6f", res);
    return 0;
}