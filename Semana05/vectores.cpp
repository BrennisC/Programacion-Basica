#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Crear un vector
    vector<int> miVector = {1, 2, 3, 4, 5};

    // Acceder a los elementos del vector utilizando acceso a memoria
    for (size_t i = 0; i < miVector.size(); ++i)
    {
        // Obtener la dirección de memoria del elemento i
        int *direccionMemoria = &miVector[i];

        // Imprimir el valor y la dirección de memoria del elemento i
        cout << "Elemento " << i << ": Valor = " << *direccionMemoria << ", Dirección de memoria = " << direccionMemoria << endl;
    }

    return 0;
}