#include <stdio.h>

int main()
{
    int m, sym = 1;
    scanf("%d", &m);
    float res;
    for (int i = 1, j = 1; i <= m; i++, j += 2, sym *= -1)
    {
        res += sym * (float)i / j;
    }
    printf("%.3f", res);
    return 0;
}