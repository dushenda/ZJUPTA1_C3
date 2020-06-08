#include <stdio.h>

void dectobin(int n);

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

void dectobin(int n)
{

    if (n == 1)
    {
        printf("1");
        return;
    }
    else if (n == 0)
    {
        printf("0");
        return;
    }
    else
    {
        dectobin(n / 2);
        printf("%d", n % 2);
    }
}
// void dectobin(int n)
// {
//     int result = 0;

//     if (n == 0)
//     {
//         printf("0");
//     }
//     else if (n == 1)
//     {
//         printf("1");
//     }
//     else
//     {
//         dectobin(n / 2); //递归 n=10  10-5-2-1     1-1   2-0  5-1  10-0  1010
//         result = n % 2;
//         printf("%d", result); //递归似乎并不像我想的那种顺序进行代码的运算  n先是减小到递归出口
//     }                         //然后从1-2-5-10  按减小的顺序增大到10 进行dectobin后的运算  啊啊啊 不清楚了
// }