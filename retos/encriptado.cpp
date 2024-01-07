#include <iostream>
#include <string.h>
using namespace std;
void codigo(string &texto)
{
    for (char caracter : texto)
    {
        cout << caracter << " : " << static_cast<int>(caracter)<< "\n";
    }
}
int suma(string &texto)
{
    int sumaACSII = 0;
    for (char caracter : texto)
    {
        sumaACSII += static_cast<int>(caracter);
    }
    return sumaACSII;
}

int main()
{
    string texto1 = "Brennis";
    codigo(texto1);
    int sumaTotal = suma(texto1);
    cout << "La suma total de los elementos es : " << sumaTotal;
    return 0;
}