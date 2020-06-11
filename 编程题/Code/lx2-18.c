#include <stdio.h>
#include <math.h>

double fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    double res = fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0f",res);
    return 0;
}