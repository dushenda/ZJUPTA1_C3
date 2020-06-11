#include <stdio.h>

int main()
{
    int x;
    double res = 0.0;
    scanf("%d", &x);
    int i = 1, j = 1, sym = 1;
    while (i <= x)
    {
        res += sym * 1. / j;
        j = j + 3;
        i++;
        sym *= -1;
    }
    printf("sum = %.3f", res);
    return 0;
}