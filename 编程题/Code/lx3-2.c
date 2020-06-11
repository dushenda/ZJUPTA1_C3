#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int res = 0;
    if(N<0) res=-1;
    else if(N==0) res=0;
    else res=1;
    printf("sign(%d) = %d",N,res);
    return 0;
}