#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int fibo(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    cout << "Suseccion de fibo" << endl;
    cout << fibo(8);
    return 0;
}