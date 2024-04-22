#include <iostream>
using namespace std;

// Crear un Puntero desde cero
int main()
{
    int puntos{};

    int *puntos_direcc{&puntos};

    cout << *puntos_direcc << endl;
    cout << &puntos << endl; // Nos permite acceder en memoria de punto y si mismo sabemos el valor de punto direccion
    return 0;
}