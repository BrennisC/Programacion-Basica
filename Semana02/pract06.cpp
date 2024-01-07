#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, filas;
    cout << "ingrese el numero de filas:";
    cin >> filas;
    for (i = 0; i < filas; i++)
        for(j=0;j<filas;j++)
        {
            cout<<" ";
        }
        for(j=0;j<filas*2+1;j++)
    {
        cout << "*";
    }

    getch();
    return 0;
}