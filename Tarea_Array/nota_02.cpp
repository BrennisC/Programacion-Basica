#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> textos;
    while (true)
    {
        string palabra;
        cout << "Ingrese sus palabras: ";
        cin >> palabra;

        if (palabra == "fin")
        {
            break;
        }

        textos.push_back(palabra);
    }

    string resultado;

    for (string palabra : textos)
    {
        resultado += palabra + " ";
    }
    cout << "La concatenacion es " << resultado << endl;

    return 0;
}