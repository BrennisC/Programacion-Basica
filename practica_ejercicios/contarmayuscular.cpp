/*
 * Crea un programa que cuente cuantas veces se repite cada palabra
 * y que muestre el recuento final de todas ellas.
 * - Los signos de puntuación no forman parte de la palabra.
 * - Una palabra es la misma aunque aparezca en mayúsculas y minúsculas.
 * - No se pueden utilizar funciones propias del lenguaje que
 *   lo resuelvan automáticamente.
 */
#include <iostream>
#include <string>
using namespace std;
void contarMayusculasyMinisculas(string texto)
{
    int contadormayuscula = 0;
    int contadorminiscula = 0;
    for (size_t i = 0; i < texto.length(); i++)
    {
        if ('a' >= texto[i] || 'z' <= texto[i])
        {
            contadorminiscula++;
        }
        else if ('A' >= texto[i] || 'Z' <= texto[i])
        {
            contadormayuscula++;
        }
    }
    cout << contadormayuscula << endl;
    cout << contadorminiscula << endl;
}
int main()
{
    string texto;
    cout << "Ingrese su palabra; ";
    getline(cin, texto);
    contarMayusculasyMinisculas(texto);
    return 0;
}