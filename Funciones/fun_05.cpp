/*
 * Crea un programa que analice texto y obtenga:
 * - Número total de palabras.
 * - Longitud media de las palabras.
 *
 * Todo esto utilizando un único bucle.
 */
#include <iostream>
#include <vector>
using namespace std;
void Mostrar(vector<string> &texto)
{
    cout << "El numero de palabra : " << texto.size() << endl;
    cout << "La longitud media es : " << texto.size() / 2;
}
vector<string> completar()
{
    int cantidad;
    cout << "Ingrese la cantidad : ";
    cin >> cantidad;
    vector<string> textos(cantidad);
    for (size_t i = 0; i < textos.size(); i++)
    {
        cout << "El texto es : " << endl;
        cin >> textos[i];
    }
    return textos;
}
int main()
{
    vector<string> textos = completar();
    Mostrar(textos);
    return 0;
}