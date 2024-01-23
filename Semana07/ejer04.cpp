#include <iostream>
using namespace std;
int distancia(int v, int t)
{
    int d;
    cout << "Ingrese la velocidad; ";
    cin >> v;
    cout << "Ingrese el tiempo: ";
    cin >> t;

    d = v * t;

    return d;
}
int main()
{
    int d;
    int v, t;
    d = distancia(v, t);
    cout << "La distancia es : " << d;

    return 0;
}