#include <iostream>
using namespace std;
int MCD(int a, int b)
{
    while (b != 0)
    {
        int m;
        m = b;
        b = a % b;
        a = m;
    }
    return a;
}
int MCM(int a, int b)
{
    if (a <= 0 || b <= 0)
    {
        return 1;
    }
    return (a * b) / MCD(a, b);
}
int completar()
{
    int numero;
    cout << "Ingrese tus numeros: ";
    cin >> numero;
    return numero;
}
int main()
{
    int a, b;
    a = completar();
    b = completar();
    cout << "El MCD " << a << " y " << b << " es " << MCD(a, b) << endl;
    cout << "El MCM " << a << " y " << b << " es " << MCD(a, b) << endl;
    return 0;
}