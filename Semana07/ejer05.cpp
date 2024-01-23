#include <iostream>
using namespace std;
int sumar(int a, int c, int b, int d, int e)
{
    return a + b + c + d + e;
}
int llenar()
{
    int r;
    cout << "Ingrese sus numeros: ";
    cin >> r;
    return r;
}
void mostrar(int a, int b, int c, int d, int e, int respuesta)
{
    cout << " La suma de los numeros es: " << a << " + " << b << " + " << c << " +" << d << " + " << e << " + " << respuesta << " es : ";
}
int main()
{
    int a, c, b, d, e;
    a = llenar();
    b = llenar();
    c = llenar();
    d = llenar();
    e = llenar();
    int respuesta;
    respuesta = sumar(a, b, c, d, e);
    mostrar(a, b, c, d, e, respuesta);

    return 0;
}