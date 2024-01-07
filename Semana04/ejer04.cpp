#include <iostream>
using namespace std;
int main()
{
    int contador;
    int numero, suma;

    while (true)
    {
        cout << "Ingrese sus numero: \n";
        cin >> numero;
        contador++;
        suma += numero;
        if (contador == 7)
            break;
    }
    cout << "La suma es : " << suma << endl;

    return 0;
}