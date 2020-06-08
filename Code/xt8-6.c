#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

void delchar( char *str, char c )
{
    char tmp[MAXN];
    char *tmpstr = str;
    int cnt=0;
    while (*tmpstr)
    {
        if(*tmpstr!=c)
            tmp[cnt++]=*tmpstr;
        tmpstr++;
    }
    int i=0;
    while (*str)
    {
        if (i>=cnt)
        {
            *str='\0';
            str++;
            continue;
        }
        *str=tmp[i];
        str++;
        i++;
    }
        
}