#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    int rango;
    cout << "Ingrese su numero: ";
    cin >> x;
    while (x < 50)
    {
        cout << x << "\t";
        x++;
    }
}