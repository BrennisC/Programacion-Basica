/* Números Primos en un Rango: Escribe un programa que solicite al usuario dos números enteros (inicio y fin) y genere un vector con los números primos en ese rango. Utiliza continue para omitir los números no primos. */
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int inicio, fin;
    cout << "Ingrese el numero de inicio: ";
    cin >> inicio;
    cout << "Ingrese el numero de fin: ";
    cin >> fin;

    vector<int> numeros;
    for (int i = inicio; i <= fin; i++)
    {

        bool esPrimo = true;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo)
        {
            numeros.push_back(i);
        }
    }
    cout << "Numeros encontrados en el rango son : ";
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << "\t";

    return 0;
}