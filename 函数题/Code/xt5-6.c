#include <stdio.h>
#include <math.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic(int number)
{
    int tmp = number;
    int tmp1 = number;
    int sum = 0;
    int cnt = 0;
    while (tmp1 > 0)
    {
        tmp1 /= 10;
        cnt++;
    }
    while (tmp >= 1)
    {
        sum += pow(tmp % 10,cnt);
        tmp /= 10;
    }
    if (sum == number)
        return 1;
    else
        return 0;
}

void PrintN(int m, int n)
{
    for (int i = m + 1; i < n; i++)
    {
        if (narcissistic(i))
            printf("%d\n", i);
    }
}