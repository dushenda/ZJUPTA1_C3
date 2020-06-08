#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double factorial(int n)
{
    // n>2
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

double funcos(double e, double x)
{
    int i = 0;
    double res = 0;
    int flags = 1;
    while ((double)pow(x, i) / factorial(i) > e)
        i += 2;
    for (int j = 0; j <= i; j += 2)
    {
        res += flags * pow(x, j) / factorial(j);
        flags = -flags;
    }
    return res;
}
