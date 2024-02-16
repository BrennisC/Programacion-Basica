#include <iostream>
using namespace std;
int main()
{
    int n, contador = 0, suma = 0, i;
    cout << "Ingrese sus numeros";
    cin >> n;
    while (n != 10)
    {
        suma += n;
        i++;
    }
    cout << "La suma es " << suma << endl;
}