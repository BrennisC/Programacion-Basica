#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = 2;
    int c = a | b;
    int d = c & a;
    int e = d ^ 0;
    cout << e << d << c;

    return 0;
}