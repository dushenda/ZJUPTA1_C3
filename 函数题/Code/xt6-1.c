#include <stdio.h>
#define MAXS 15

void StringCount(char s[]);
// void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    // ReadString(s);
    s[0]='\n';
    s[1]='\n';
    s[2]='\n';
    s[3]='\n';
    s[4]=' ';
    StringCount(s);

    return 0;
}

void StringCount(char s[])
{
    char *p = s;
    int letter = 0, blank = 0, digit = 0, other = 0;
    while (*p)
    {
        if ((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
            letter++;
        else if (*p >= '0' && *p <= '9')
            digit++;
        else if (*p == ' '||*p =='\n')
            blank++;
        else
            other++;
        p++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}