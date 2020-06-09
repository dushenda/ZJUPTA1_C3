#include<stdio.h>
#include<stdlib.h>

typedef enum Bool {true,false} bool;

void out_info(bool x)
{
    if(x==true)
        printf(" is null\n");
    else
        printf(" is not null\n");
}

int main()
{
    int *a=NULL;
    bool a_is_null = a==NULL?true:false;
    printf("a is");
    out_info(a_is_null);
    int *b = (int *)malloc(sizeof(int));
    bool b_is_null = b==NULL?true:false;
    printf("b is");
    out_info(b_is_null);
    free(b);
    return 0;
}
