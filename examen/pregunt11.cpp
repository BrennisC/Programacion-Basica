#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 2;
    int c = a << b;
    int d = 1 << c;
    int e = d >> d;
    cout << e;

    return 0;
}