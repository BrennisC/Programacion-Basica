#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int filas = 10;
    int columnas = 10;
    int m[filas][columnas];
    bool bandera = false;

    char asientos[filas][columnas];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            asientos[filas][columnas] = 'L';
        }
    }
    while (bandera != true)
    {
        cout << "Ingrese fila y asiendo a reservar: \n";
        cout << "Fila (entre 0 a 9): \n";
        cin.get(asientos[filas][10]);

        cout << "Ingrese fila y asiendo a reservar: \n";
        cout << "Columnas (entre 0 a 9): \n";
        cin.get(asientos[10][columnas]);
    }

    return 0;
}