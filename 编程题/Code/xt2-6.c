#include <stdio.h>

int fact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
        res*=i;
    return res;
}

int main()
{
    int N;
    scanf("%d", &N);
    int res = 0;
    for (int i = 1; i <= N; i++)
        res += fact(i);
    printf("%d", res);
    return 0;
}