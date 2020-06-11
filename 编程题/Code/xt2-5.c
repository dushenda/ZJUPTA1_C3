#include <stdio.h>
#include<math.h>

int main()
{
    int N;
    double res=0;
    scanf("%d",&N);
    for (int i = 1; i <= N; i++)
        res+=sqrt(i);
    printf("sum = %.2f", res);
    return 0;
}