#include <stdio.h>

int CountDigit(int number, int digit);

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit(int number, int digit)
{
    if(number==0&&digit==0)
        return 1;
    int sum = 0;
    number = number > 0 ? number : -number;
    while (number > 1)
    {
        if (number % 10 == digit)
            sum++;
        number = number / 10;
    }
    return sum;
}