#include <iostream>
#include <vector>
using namespace std;
struct Persona
{
    string nombre;
    int edad;
    float peso;
    float altura;
};
int main()
{
    int n;
    cout << "Ingrese la cantidad de personas: ";
    cin >> n;
    vector<Persona> atributos(n);
    int atributo;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre: ";
        cin >> atributos[i].nombre;

        cout << "Ingrese su edad: ";
        cin >> atributos[i].edad;

        cout << "Ingrese su peso: ";
        cin >> atributos[i].peso;

        cout << "Ingrese su altura: ";
        cin >> atributos[i].altura;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Nombre :" << atributos[i].nombre;

        cout << "Edad: " << atributos[i].edad;

        cout << "Peso: " << atributos[i].peso;

        cout << "Altura: " << atributos[i].altura;
    }

    return 0;
}