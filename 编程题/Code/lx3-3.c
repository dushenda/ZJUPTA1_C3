#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int sum = 0, tmp, count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tmp);
        sum += tmp;
        if (tmp > 59)
            count++;
    }
    double avg = N > 0 ? (double)sum / N : 0;
    printf("average = %.1f\n", avg);
    printf("count = %d", count);
    return 0;
}