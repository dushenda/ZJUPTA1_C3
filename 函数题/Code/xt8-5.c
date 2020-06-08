
#include <stdio.h>
#define MAXN 20

void strmcpy(char *t, int m, char *s);
// void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN] = "happy new year";
    char s[MAXN];
    int m;

    scanf("%d", &m);
    // ReadString(t);

    strmcpy(t, m, s);
    printf("%s\n", s);

    return 0;
}

void strmcpy(char *t, int m, char *s)
{
    int strlen = 0;
    while (t[strlen++]);
    if (m > strlen)
        return;
    for (int i = (m - 1); i < strlen; i++)
        s[i - m + 1] = t[i];
}