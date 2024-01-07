#include <iostream>
using namespace std;
int main()
{
    int  x;
    cout << "Ingrese valor: ";
    cin >> x;

    if (x == 0)
        cout << "es cero ";
    else if (x > 0)
    {
        cout << x << " es mayor que cero ";
    }
    else
    {
        cout << x << " es menor que cero ";
    }
    return 0;
} 