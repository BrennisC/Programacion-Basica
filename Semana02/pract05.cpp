#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int filas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;

    for (int i = 0; i < filas; i++)
    {
        {
            cout << " *\n";
        }
        for (int j = 0; j < filas ;j++)
        {
            cout << " ";
        }
    }

    return 0;
}