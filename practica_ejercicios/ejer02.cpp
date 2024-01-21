// Crea un vector de caracteres y solicita al usuario ingresar un carácter.
// Cuenta y muestra cuántas veces aparece ese carácter en cada palabra del vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> caracteres;
    char caracter;
    int n;
    cout << "Ingrese la cantidad de caracteres: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese sus carateres: ";
        cin >> caracter;

        caracteres.push_back(caracter);
    }
    int suma = 0;
    int total = 0;
    for (char caracter : caracteres)
    {
        cout << caracter << " ";
        suma += caracter;
        total = static_cast<int>(suma);
    }
    cout << "La suma de los carateres es: " << total;
    return 0;
}
