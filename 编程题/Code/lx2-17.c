#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i <= N; i++)
    {
        printf("pow(3,%d) = %.0f\n", i, pow(3, i));
    }
    return 0;
}