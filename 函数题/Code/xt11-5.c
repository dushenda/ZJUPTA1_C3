#include <stdio.h>

#define MAXS 10

char *match(char *s, char ch1, char ch2);

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

char *match(char *s, char ch1, char ch2)
{
    char *res = NULL;
    while (*s)
    {
        if (*s == ch1 && !res)
            res = s;
        if (res)
            printf("%c", *s);
        if (*s == ch2)
            break;
        s++;
    }
    printf("\n");
    if(res)
        return res;
    return "";
}