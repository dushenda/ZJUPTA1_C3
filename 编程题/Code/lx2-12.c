#include <stdio.h>

int main()
{
    int x, y;
    double res;
    scanf("%d %d", &x, &y);
    if(x>y||x>100||y>100)
    {
        printf("Invalid.");
        return 0;
    }
    printf("fahr celsius\n");
    for (int i = x; i <= y; i += 2)
    {
        res = 5 * ((float)i - 32.) / 9;
        printf("%d%6.1f\n",i,res);
    }
    return 0;
}