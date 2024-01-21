// Crea un vector de strings y permite al usuario ingresar palabras.
// Luego, muestra la longitud de cada palabra en el vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> textos;
    string palabras;
    int n;
    cout << "Ingrese la cantidad de palabras: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Ingrese tus palabras: ";
        cin >> palabras;

        textos.push_back(palabras);
    }
    for (int i = 0; i < textos.size(); i++)
    {
        cout << textos[i] << " ";
    }
    for (string palabras : textos)
    {
        cout << palabras << " ";
    }

    return 0;
}
