#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib(int n)
{
    int a = 0, b = 1;
    int tmp = 0;
    for (int i = 1; i < n; i++)
    {
        tmp = a + b;
        a = b;
        b = tmp;
    }
    return b;
}

void PrintFN(int m, int n)
{
    int i = 1;
    int iter = fib(i);
    int num = 0;
    while (iter <= n)
    {
        if (iter >= m)
        {
            num++;
            if (num == 1)
                printf("%d", iter);
            else
                printf(" %d", iter);
        }
        iter = fib(++i);
    }
    if (!num)
        printf("No Fibonacci number");
}