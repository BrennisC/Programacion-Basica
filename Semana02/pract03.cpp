#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x, n;
    bool primo;
    cout << "Ingrese un numero: ";
    cin >> n;
    x = 2;
    primo = true;

    while (primo && (x < n))
        if (n % x != 0)
        {
            x += 1;
        }
        else
        {
            primo = false;
        }
    if (primo)
    {
        cout << "es primo";
    }
    else
    {
        cout << " no es primo";
    }

    getch();
    return 0;
}