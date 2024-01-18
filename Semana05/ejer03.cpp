#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    srand(time(NULL));

    int row, column;
    cout << "Ingrese sus numeros de filas: ";
    cin >> row;
    cout << "Ingrese sus numeros de columna: ";
    cin >> column;
    int matriz[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}