#include <stdio.h>

int main()
{
    float x, y;
    scanf("%f", &x);
    y = (x == 0) ? .0 : 1. / x;
    printf("f(%.1f) = %.1f", x, y);
    return 0;
}