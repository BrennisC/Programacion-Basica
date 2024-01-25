/*Intercambiar dos números por paso por referencia:
Define una función que intercambie los valores de dos variables enteras mediante el paso por referencia.
En el programa principal, declara dos variables, muestra sus valores antes del intercambio,
llama a la función y muestra los valores después del intercambio.*/
#include <iostream>
using namespace std;
void interCambiar(int &a, int &b)
{
    cout << a << " " << b;
}
int main()
{
    int a = 2, b = 3, c;
    c = a;
    a = b;
    b = c;
    interCambiar(a, b);

    return 0;
}