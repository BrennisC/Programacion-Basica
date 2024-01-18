#include <iostream>
using namespace std;
bool numero(int n)
{
    return n % 2 == 0;
}
int main()
{
    int Num;
    cout << "Ingrese un numero: ";
    cin >> Num;

    if (numero(Num))
    {
        cout << "El numero es par.";
    }
    else
    {
        cout << "El numero no es par";
    }
    return 0;
}