#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift(char s[]);

// void GetString(char s[]); /* 实现细节在此不表 */

int main()
{
    char s[MAXS] = "abcdef";

    // GetString(s);
    Shift(s);
    printf("%s\n", s);

    return 0;
}

void Shift(char s[])
{
    char a = s[0], b = s[1], c = s[2];
    int i = 3;
    while (s[i])
    {
        s[i - 3] = s[i];
        i++;
    }
    s[i - 3] = a;
    s[i - 2] = b;
    s[i - 1] = c;
}