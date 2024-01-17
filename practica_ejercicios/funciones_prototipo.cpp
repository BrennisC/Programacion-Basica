#include <iostream>
using namespace std;
int suma(int, int);
int main()
{
    int a;
    a = suma(60, 80);
    cout << " La suma es: " << a;
    return 0;
}
int suma(int e, int b)
{
    return e + b;
}