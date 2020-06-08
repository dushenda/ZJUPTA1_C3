#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
// void ReadString( char s[] ); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS] = "The C Programming Language", t[MAXS] = "The C Programming Languagex", *pos = NULL;

    // ReadString(s);
    // ReadString(t);
    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

char *search(char *s, char *t)
{
    char *res = NULL;
    char *tmp = t;
    while (*s)
    {
        if (*s == *tmp)
        {
            res = res ? res : s;
            tmp++;
            s++;
            continue;
        }
        if (!*tmp)
            break;
        tmp = t;
        res = NULL;
        s++;
    }
    if(*tmp)
        res = NULL;
    return res;
}