#include <iostream>
using namespace std;
int main()
{
    int row = 2, column = 2;
    int n[row][column];
    int m[row][column];

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << "Ingrese sus filas " << i << " y tus columnas " << j << " es: ";
            cin >> n[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << "Ingrese sus filas " << i << " y tus columnas " << j << " es: ";
            cin >> m[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {

            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {

            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int suma[row][column];
    int resultado[row][column];
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            suma[i][j] = n[i][j] + m[i][j];
            resultado[i][j] = suma[i][j];
        }
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << suma[i][j] << " ";
        }
        cout << endl;
    }

    cout << resultado;

    return 0;
}
