#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Sum = %d; Average = %.1f", (a + b + c + d), (double)(a + b + c + d) / 4);
    return 0;
}