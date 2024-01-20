#include <iostream>
using namespace std;
int main()
{
    int row = 3, column = 2;
    int filas = 2, columnas = 2;

    int m[row][column];
    int n[filas][columnas];

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << "Ingrese [" << i << "] [" << j << "] :";
            cin >> m[i][j];
        }
        cout << endl;
    }
    cout << " ";
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << "Ingrese [" << i << "] [" << j << "] :";
            cin >> n[i][j];
        }
        cout << endl;
    }
    int resultado[row][columnas] = {0};
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            for (int k = 0; k < column; ++k)
            {
                resultado[i][j] += m[i][k] * n[k][j];
            }
        }
    }

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
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
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
