// Templates y programacion generica esto los ayuda las disminucion de funcion por que estos templates se puede encargar de hacer casi todo

#include <iostream>
using namespace std;

template <typename T>

T maximo(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int max_int = maximo(10, 5);

    double max_double = maximo(5.56, 4.5);

    cout << "El maximo valor de un entero es : " << max_int << endl;
    cout << "El maximo valor de un  doble es: " << max_double;

    return 0;
}