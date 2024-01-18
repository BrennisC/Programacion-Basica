#include <iostream>
#include <string>
#include <stfd
using namespace std;
struct Perro
{
    string nombre;
    int edad;
    string raza;
};

int main()
{
    int cantidad = 1;
    Perro b[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese el nombre del animal: ";
        cin >> b[i].nombre;
        cout << "Ingrese la edad del animal: ";
        cin >> b[i].edad;
        cout << "Ingrese la raza del animal: ";
        cin >> b[i].raza;
    }
    system("cls");
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Nombre de la aminal:" << b[i].nombre << endl;
        cout << "Edad del animal: " << b[i].edad << endl;
        cout << "Raza de la raza: " << b[i].raza << endl;
    }

    return 0;
}