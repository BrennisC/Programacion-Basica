/*Matriz Transpuesta: Crea un programa que solicite al usuario ingresar los elementos de una matriz cuadrada. Luego, calcula la matriz transpuesta e imprímela en la pantalla. */
#include <iostream>
using namespace std;
int main()
{
    int filas = 2, columnas = 2;
    int n[filas][columnas];

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Ingrese el numero " << i << " y " << j << " es: " << endl;
            cin >> n[i][j];
        }
    }

    int matrizTranspuesta[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizTranspuesta[j][i] = n[i][j];
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << n[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nLa matriz  transpuesta es : \n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matrizTranspuesta[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}