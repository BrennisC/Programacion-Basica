#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
struct Fruta
{
    string nombre;
    float precio;
};

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    int N;
    cout << "Ingrese el número de frutas en la tienda (N): ";
    cin >> N;
    vector<Fruta> registroFrutas(N);

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el nombre de la fruta " << i + 1 << ": ";
        cin >> registroFrutas[i].nombre;

        cout << "Ingrese el precio de la fruta " << i + 1 << ": ";
        cin >> registroFrutas[i].precio;
    }
    system("cls");
    cout << "Registro de frutas:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "Fruta " << i + 1 << ": " << registroFrutas[i].nombre << endl;
        cout << "Precio: $" << registroFrutas[i].precio << endl;
    }

    return 0;
}