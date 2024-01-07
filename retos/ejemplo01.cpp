#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena;
    int clave;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    cout << "Ingrese la clave del cifrado César: ";
    cin >> clave;

    for (char &caracter : cadena)
    {
        if (isalpha(caracter))
        {
            char base = isupper(caracter) ? 'A' : 'a';
            caracter = (caracter - base + clave) % 26 + base;
        }
    }

    cout << "\nCadena cifrada: " << cadena << endl;

    return 0;
}