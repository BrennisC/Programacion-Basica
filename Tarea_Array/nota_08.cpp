#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;
struct Libros
{
    string Nombre;
    string Autor;
    string anio;
};
int main()
{
    int cantidad;
    cout << "Ingrese la cantidad de libros: ";
    cin >> cantidad;
    vector<Libros> libro(cantidad);
    cin.ignore();
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese el Nombre del libro: ";
        getline(cin, libro[i].Nombre);
        cout << "Ingrese el Nombre del autor: ";
        getline(cin, libro[i].Autor);
        cout << "Ingrese el Nombre el anio del libro: ";
        getline(cin, libro[i].anio);
    }
    system("cls");
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Nombre del Libro: " << libro[i].Nombre << endl;
        cout << "Autor: " << libro[i].Autor << endl;
        cout << "El anio : " << libro[i].anio << endl;
        cout << "\n";
    }
    return 0;
}