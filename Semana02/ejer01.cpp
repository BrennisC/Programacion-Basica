#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char n;
    cout << "Ingrese un enter :\n";
    n = _getch();

    if (n == 13 || n == 10)
    {
        cout << "Ingresaste enter";
    }
    else
    {
        cout << "No ingresaste en enter";
    }

    return 0;
}