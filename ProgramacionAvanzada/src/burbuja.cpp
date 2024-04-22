#include <iostream>
#include <vector>
using namespace std;

void intercambio(int *a, int *b)
{
    int aux = *a;

    *a = *b;

    *b = aux;
}

void Burbuja(vector<int> arreglo)
{
    for (size_t i = 0; i < arreglo.size() - 1; i++)
    {
        for (size_t j = 0; j < arreglo.size() - i + 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                intercambio(&arreglo[j], &arreglo[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arreglo = {12, 34, 400, 6, 12, 123};

    cout << "Arreglo sin modificacion:  \n ";

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i];
        cout << " ";
    }

    Burbuja(arreglo);

    cout << "\nArreglo modificado: \n";

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i];
        cout << " ";
    }

    return 0;
}