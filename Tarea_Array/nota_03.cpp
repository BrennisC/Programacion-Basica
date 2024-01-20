#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> carateres;

    while (true)
    {
        char caracter;

        cout << "Ingrese la f para terminar.\n";
        cout << "Ingrese sus caracteres: ";
        cin >> caracter;
        if (caracter == 'f')
            break;

        carateres.push_back(caracter);
    }
    char resultado;

    for (char &caracter : carateres)
    {
        resultado += caracter + ' ';
    }
    unsigned int transfomar = static_cast<int>(resultado);

    cout << "La suma de los carateres son: " << transfomar << endl;

    return 0;
}