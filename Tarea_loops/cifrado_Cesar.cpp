/* Cifrado Cesar: Implementa un programa que realice un cifrado César. Solicita al usuario ingresar una cadena y un número (la clave del cifrado). Luego, cifra la cadena desplazando cada letra en la cadena por la cantidad especificada en la clave. */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string texto = "Holamundo";
    int clave;
    cout << "El texto cifrado es : " << texto<<endl;
    cout << "Ingrese su clave: ";
    cin >> clave;
    for (char &caracter : texto)
    {
        if (isalpha(caracter))
        {
            char base = isupper(caracter) ? 'A' : 'a';
            caracter = (caracter - base + clave) % 26 + base;
        }
    }

    cout<<"\nCadena del cifrado es: "<<texto;

    return 0;
}