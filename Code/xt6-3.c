#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m)
        printf("%d is a perfect number\n", m);
    if (factorsum(n) == n)
        printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum(int number)
{
    if (number == 1)
        return 1;
    int res = 0;
    for (int i = 1; i < number / 2 + 1; i++)
        if (number % i == 0)
            res += i;
    return res;
}
void PrintPN(int m, int n)
{
    int num = 0;
    if (m == 1)
    {
        printf("1 = 1\n");
        m += 1;
        num++;
    }
    for (int i = m; i <= n; i++)
    {
        if (factorsum(i) == i)
        {
            printf("%d = 1", i);
            for (int j = 2; j < i / 2 + 1; j++)
            {
                if (i % j == 0)
                    printf(" + %d", j);
            }
            printf("\n");
            num++;
        }
    }
    if (num == 0)
        printf("No perfect number");
}