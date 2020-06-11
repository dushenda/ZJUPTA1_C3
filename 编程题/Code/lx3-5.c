#include<stdio.h>

int main()
{
    int year,i;
    scanf("%d",&year);
    if (year<2001||year>2100)
    {
        printf("Invalid year!");
        return 0;
    }else if(year<2004){
        printf("None");
    }else{
        for (i = 2001; i <= year; i++)
        {//能被4整除但不能被100整除、或者能被400整除。
            if ((i%4==0&&i%100!=0)||i%400==0)
            {
                printf("%d\n",i);
            }
            
        }
        return 0;
    }
}