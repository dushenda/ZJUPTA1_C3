#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 6,8,-1};
    int *pa = a;
    printf("====================\n");
    while (*pa!=-1)
    {
        printf("%d\t", *pa);
        pa = pa + 1;
    }
    return 0;
}