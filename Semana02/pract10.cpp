/*
Crea una función que reciba dos cadenas de texto casi iguales,
a excepción de uno o varios caracteres.
La función debe encontrarlos y retornarlos en formato lista/array.
- Ambas cadenas de texto deben ser iguales en longitud.
- Las cadenas de texto son iguales elemento a elemento.
- No se pueden utilizar operaciones propias del lenguaje
que lo resuelvan directamente.

Ejemplos:
- Me llamo mouredev / Me llemo mouredov -> ["e", "o"]
- Me llamo.Brais Moure / Me llamo brais moure -> [" ", "b", "m"]
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> encontrarDiferencias(string cadena1, string cadena2)
{
    if (cadena1.length() != cadena2.length())
    {
        throw invalid_argument("Las cadenas deben tener la misma longitud");
    }
    vector<char> diferencias;

    for (int i = 0; i < cadena1.length(); i++)
    {
        if (cadena1[i] != cadena2[i])
        {
            diferencias.push_back(cadena1[i]);
        }
    }

    return diferencias;
}

int main()
{
    try
    {
        string cadena1 = "Me llamo mouredev";
        string cadena2 = "Me llemo mouredov";

        vector<char> diferencias = encontrarDiferencias(cadena1, cadena2);

        cout << "Diferencias: ";
        for (char diferencia : diferencias)
        {
            cout << diferencia << " ";
        }
        cout << std::endl;
    }
    catch (const std::invalid_argument &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}