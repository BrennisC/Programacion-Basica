#include <iostream>
#include <cmath>
using namespace std;
void respuesta(int *x, int *y, int *z)
{
    int discri;
    discri = pow(*y, 2) - 4 * (*x) * (*z);
    if (discri > 0)
    {
        cout << "Tiene raices reales.";
    }
    else if (discri < 0)
    {
        cout << "Tiene raices imaginarias.";
    }
    else if (discri == 0)
    {
        cout << "Tiene raices iguales.";
    }
    else
    {
        cout << "Ingrese sus valores.";
    }
}
int main()
{
    int a, b, c;
    cout << "Ingrese el valor de a: " << endl;
    cin >> a;

    cout << "Ingrese el valor de b: " << endl;
    cin >> b;

    cout << "Ingrese el valor de c: " << endl;
    cin >> c;

    respuesta(&a, &b, &c);
}