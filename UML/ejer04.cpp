#include <iostream>
using namespace std;

template <typename T>
T prommedio(const T *empleados, int numValores)
{
    T suma{0};
    for (int contador{0}; contador < numValores; ++contador)
        suma += empleados[contador];

    suma /= numValores;
    return suma;
}
int main()
{
    int intEmpleados[]{5, 23, 4, 5, 6};
    cout << prommedio(intEmpleados, 5) << '\n';

    double doubleEmpleados[]{2.23, 3, 34, 23};
    cout << prommedio(doubleEmpleados, 4);
    return 0;
}