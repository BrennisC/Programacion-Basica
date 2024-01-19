#include <iostream>
using namespace std;
long factorial(int n);
int main()
{
    int n;
    do
    {
        cout << "Introduzca el valor de n: ";
        cin >> n;
    } while (n < 0);
    cout << "\t" << n << "!=" << factorial(n) << endl;
    return 0;
}

long factorial(int n)
{
    if (n <= 1)
        return 1;
    else
    {
        long resultado = n * factorial(n - 1);
        return resultado;
    }
}
