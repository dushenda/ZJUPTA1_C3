#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum
{
    false,
    true
} bool;

bool palindrome(char *s);

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if (palindrome(s) == true)
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome(char *s)
{
    char str[MAXN];
    int lens = 0;
    char *tmp = s;
    while (*tmp)
    {//get lens of str
        str[lens++]=*tmp;
        tmp++;
    }
    int left=0,right=lens-1;
    while (left<right)
    {
        if (str[left++]!=str[right--])
            return false;
    }
    return true;
}