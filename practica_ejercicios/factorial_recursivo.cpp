#include <iostream>
using namespace std;

long long int factorial(long long int);

int main()
{
    long long int n;
    long long int y;

    cout << "Ingrese su numero: ";
    cin >> y;

    n = factorial(y);

    cout << "El factorial de " << y << "! es : " << n;

    return 0;
}

long long int factorial(long long int y)
{
    if (y == 0 || y == 1)
    {
        return 1;
    }
    else
    {
        return y * factorial(y - 1);
    }
}
