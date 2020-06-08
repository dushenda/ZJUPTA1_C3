#include <stdio.h>
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++)
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

void CountOff(int n, int m, int out[])
{
    //4 10 1 7 5 2 11 9 3 6 8
    int j = 1, k = 1;
    int cnt = 1;
    int flgs[MAXN], nums[MAXN];
    for (int i = 0; i < n; i++)
        flgs[i] = 0; //n个都没有输出
    while (cnt <= n) //cnt 循环n次
    {
        if (flgs[j - 1] == 1)
        {
            j++;
            if (j > n)
                j = j % n;
            continue;
        }
        if (k == m)
        {
            k = 0;
            out[j - 1] = cnt++;
            flgs[j - 1] = 1;
        }
        j++;
        k++;
        if (j > n)
            j = j % n;
    }
}
// void CountOff(int n, int m, int out[])
// {
//     int i, j, p;
//     int num[MAXN];

//     for (i = 0; i < n; i++)
//     {
//         num[i] = i + 1;
//     }

//     int count = 0;
//     i = 0, j = 0, p = 0;
//     while (count < n)
//     {
//         if (num[i] != -1)
//         {
//             p++;
//         }
//         if (p == m)
//         {//p是当前所在的m循环
//             j++;
//             out[i] = j;
//             p = 0;
//             num[i] = -1;//如果已经输出，=-1
//             count++;
//         }
//         i++;
//         if (i == n)
//         {
//             i = 0;
//         }
//     }
// }
