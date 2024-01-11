/* Contador de vocales: Desarrolla un programa que cuente la cantidad de a, e, i, o, u en una oración ingresada por el usuario. */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string oracion;
    int conteo_a = 0, conteo_e = 0, conteo_i = 0, conteo_o = 0, conteo_u = 0;

    cout << "Ingrese su oracion : ";
    getline(cin, oracion);

    for (char letra : oracion)
    {
        letra = tolower(letra);

        switch (letra)
        {
        case 'a':
            conteo_a++;
            break;
        case 'e':
            conteo_e++;
            break;
        case 'i':
            conteo_i++;
            break;
        case 'o':
            conteo_o++;
            break;
        case 'u':
            conteo_u++;
            break;
        }
    }
    cout << "Cantidad de vocales en la oracion: " << endl;
    cout << " a " << conteo_a << endl;
    cout << " e " << conteo_e << endl;
    cout << " i " << conteo_i << endl;
    cout << " o " << conteo_o << endl;
    cout << " u " << conteo_u << endl;

    return 0;
}