#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 10
#define MAXS 20

int max_len(char *s[], int n);

int main()
{
    int i, n;
    char *string[MAXN] = {NULL};

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        string[i] = (char *)malloc(sizeof(char) * MAXS);
        scanf("%s", string[i]);
    }
    printf("%d\n", max_len(string, n));

    return 0;
}

int max_len(char *s[], int n)
{
    int maxlen = 0, tmp = 0;
    for (int i = 0; i < n; i++)
    {
        char *t = s[i];
        while (*t)
        {
            t++;
            tmp++;
        }
        maxlen = tmp > maxlen ? tmp : maxlen;
        tmp = 0;
    }
    return maxlen;
}