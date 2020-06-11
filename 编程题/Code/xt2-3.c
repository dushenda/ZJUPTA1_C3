#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    float res;
    for (int i = m; i <= n; i++)
        res += i * i + 1.0 / i;
    printf("sum = %.6f", res);
    return 0;
}