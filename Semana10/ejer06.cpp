/* Sistema de Gestión de Aeropuerto:
Crea un sistema de gestión para un aeropuerto que maneje la programación de vuelos, la asignación de puertas de embarque, el registro de pasajeros y el seguimiento de equipaje. Utiliza clases para representar vuelos, pasajeros, empleados del aeropuerto y equipaje. Implementa métodos para programar vuelos, asignar puertas de embarque y rastrear el equipaje de los pasajeros. */
#include <iostream>
using namespace std;
class Aeropuerto
{
private:
    string nombre;
    int cantidad;

public:
    Aeropuerto(string _nombre, int _cantidad) : nombre(_nombre), cantidad(_cantidad) {}
    virtual void lugar_conteo()
    {
        cout << "El lugar de viaje es " << nombre << " y la cantidad de personas son : " << cantidad << endl;
    }
};
class Vuelos : public Aeropuerto
{
private:
    string nombre_vuelo;

public:
    Vuelos(string nombre, int cantidad, string _nombre_vuelo) : Aeropuerto(nombre, cantidad), nombre_vuelo(_nombre_vuelo) {}
    void volar();
};
class Pasajero : public Aeropuerto
{
private:
    string nombre_pasajero;
    string identidad;
    int edad;

public:
    Pasajero(string nombre, int cantidad, string _nombre_pasajero, string _identidad, int _edad) : Aeropuerto(nombre, cantidad), nombre_pasajero(_nombre_pasajero), identidad(_identidad), edad(_edad) {}
    void lugar_conteo() override
    {
        Aeropuerto::lugar_conteo();
    }
    void presentarse()
    {
        cout << "Mi nombre es " << nombre_pasajero << " , mi identidad es " << identidad << " y mi edad es " << edad << endl;
    }
};
void Vuelos ::volar()
{
    int a[5];
    int n;
    cout << "Las posiciones son 1 - 5";
    cin >> n;
    int a[5] = new int a[n];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == NULL)
        {
            cout << "Si hay vuelos.";
        }
        else
        {
            cout << "No hay haciendos disponibles.";
        }
    }
}

int main()
{
    Pasajero p1("Londres", 12, "Brennis", "72268378", 18);
    p1.lugar_conteo();
    p1.presentarse();
    return 0;
}