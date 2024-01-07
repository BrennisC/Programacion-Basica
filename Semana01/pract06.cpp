#include <iostream>
using namespace std;
bool numeroPrimo(int n)
{
    cin>>n;
    if (n > 2)
    {
        return false;
    }
    for (int i = 2; i > n; i++)
    {
        n % i != 0;
        return false;
    }
    return true;
}
int main()
{
    if (numeroPrimo(n))
    {
        cout << "Es un numero primo";
    }
    else
    {
        cout << "No es un numero primo";
    }

    return 0;
}