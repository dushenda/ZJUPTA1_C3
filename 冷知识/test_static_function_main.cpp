#include "test_static_function.h"
#include <stdio.h>
int main()
{
    int x = 2, y = 9;
    printf("%d\t%d\t%d", mul2(x,y), mul2(x, y), sub2(x, y));
}