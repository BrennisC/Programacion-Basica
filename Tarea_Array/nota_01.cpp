#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numeros = {1, 6, 7, 4, 3, 2, 8, 9};

    cout << "Ingrese valores (ingrese un valor negativo para terminar):" << endl;

    int valor;
    while (true)
    {
        cin >> valor;
        if (valor < 0)
            break;

        numeros.push_back(valor);
    }

    sort(numeros.begin(), numeros.end());

    cout << "Vector ordenado: ";
    for (size_t i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }

    return 0;
}