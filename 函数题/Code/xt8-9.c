#include <stdio.h>
#define MAXS 15

void StringCount(char *s);
// void ReadString(char *s); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS] = "aZ&*?\n093 Az";

    // ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount(char *s)
{
    int bletters = 0, lletters = 0, spaces = 0, nums = 0, others = 0;
    while (*s)
    {
        if (*s >= 'A' && *s <= 'Z')
            bletters++;
        else if (*s >= 'a' && *s <= 'z')
            lletters++;
        else if (*s == ' ')
            spaces++;
        else if (*s >= '0' && *s <= '9')
            nums++;
        else
            others++;
        s++;
    }
    printf("%d %d %d %d %d", bletters, lletters, spaces, nums, others);
}