#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    if (x < 0)
        printf("Invalid Value!");
    else if (x <= 50 && x >= 0)
        printf("cost = %.2f", (0.53 * x));
    else
        printf("cost = %.2f", (0.53 * 50 + 0.58 * (x - 50)));
    return 0;
}