#include<stdio.h>

int main()
{
    char a;
    int l=0,b=0,d=0,o=0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%c",&a);
        if((a>='A' && a<='Z')||(a>='a'&&a<='z')) l++;
        else if(a==' '||a=='\n') b++;
        else if(a>='0'&&a<='9') d++;
        else o++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",l,b,d,o);
    return 0;
}