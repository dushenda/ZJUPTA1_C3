#include <iostream>
void test1();
void test2();

int main()
{
    test1();
    test2();
}

void test1()
{
    int a = 5;
    switch (a)
    {
    case 0:
        printf("%d", a);
        break;

    defau1t:
        printf("default");
        break;
    x777:
        printf("777");
        break;
    }
}

void test2()
{
    const int two = 2;
    int i=2;
    switch (i)
    {
    case 1:
        printf("case1\n");
    case two:
        printf("case2\n");
    case 3:
        printf("case3\n");
    default:;
    }
}