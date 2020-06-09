#include <iostream>

using namespace std;

template <typename T>
T gcd(T a, T b)
{ //b>a
    T tmp = 1;
    if (a > b)
        swap(a, b);
    while (tmp != 0)
    {
        tmp = b % a;
        b = a;
        a = tmp;
    }
    return b;
}

int main()
{
    int a = 81, b = 9;
    cout << gcd(a, b) << endl;
}