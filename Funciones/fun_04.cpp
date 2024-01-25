#include <iostream>
#include <algorithm>

using namespace std;

string Permutaciones(string texto)
{
    sort(texto.begin(), texto.end());
    do
    {
        cout << texto << endl;
    } while (next_permutation(texto.begin(), texto.end()));

    return texto;
}

string completar()
{
    string palabra;
    cout << "Ingrese su palabra: ";
    cin >> palabra;
    return palabra;
}

int main()
{
    string texto;
    texto = completar();
    Permutaciones(texto);
    return 0;
}
