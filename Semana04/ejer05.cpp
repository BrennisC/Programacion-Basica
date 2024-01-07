#include <iostream>
using namespace std;
int main()
{
    int x, suma=0,cont;
    do
    {
        cout << "\nIngrese su numero:\n";
        cin >> x;
        suma += x;
        cont++;
    } while (x <= 8);
    cout << "\nLa suma es:\n"<< suma;
    return 0;
}