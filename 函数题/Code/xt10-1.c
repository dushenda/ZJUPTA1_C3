#include <stdio.h>
#include <math.h>

int search(int n);

int main()
{
    int number;

    scanf("%d", &number);
    printf("count=%d\n", search(number));

    return 0;
}

int search(int n)
{
    int cnt = 0;
    int x, y, z, num;
    for (int i = 11; i * i <= n; i++)
    {
        num = i * i;
        x = num % 10; //个位数
        num /= 10;
        y = num % 10; //十位数
        z = num / 10; //百位数
        if (x == y || x == z || y == z)
        {
            cnt++;
        }
    }
    return cnt;
}