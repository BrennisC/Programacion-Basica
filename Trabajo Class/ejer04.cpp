#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

class Biblioteca
{
private:
    int cantidad;
    string nombre;

public:
    Biblioteca(int c, string n) : cantidad(c), nombre(n) {}
    int getCantidad() { return cantidad; }
    string getNombre() { return nombre; }
    virtual void mostrarDetalles()
    {
        cout << "Nombre: " << nombre << "\t";
        cout << "Cantidad: " << cantidad << endl;
    }
};

class Libro : public Biblioteca
{
private:
    string autor;

public:
    Libro(int cantidad, string nombre, string a) : Biblioteca(cantidad, nombre), autor(a) {}
    void mostrarDetalles() override
    {
        Biblioteca::mostrarDetalles();
        cout << "Autor: " << autor << endl;
    }
    string getAutor() { return autor; }
};

class Revista : public Biblioteca
{
private:
    string date;

public:
    Revista(int cantidad, string nombre, string d) : Biblioteca(cantidad, nombre), date(d) {}
    void mostrarDetalles() override
    {
        Biblioteca::mostrarDetalles();
        cout << "Fecha: " << date << endl;
    }
    string getDate() { return date; }
};

class Periodicos : public Biblioteca
{
private:
    vector<string> numsPublicaciones;

public:
    Periodicos(int c, string n, vector<string> &v) : Biblioteca(c, n), numsPublicaciones(v) {}
    void mostrarDetalles() override
    {
        Biblioteca::mostrarDetalles();
        cout << "Numeros de Publicacion: ";
        for (auto i = numsPublicaciones.begin(); i != numsPublicaciones.end(); ++i)
        {
            cout << *i + " ";
        }
        cout << endl;
    }
    vector<string> getNumPubli() { return numsPublicaciones; }
};

void OrdenarDetalles(Biblioteca &b)
{
    cout << "Mostrando detalles antes de ordenar: " << endl;
    b.mostrarDetalles();
    // Aquí puedes realizar las operaciones para ordenar los detalles del objeto Biblioteca
}

int main()
{
    Libro l1(100, "El Quijote", "Miguel de Cervantes");
    Revista r1(50, "National Geographic", "2024-03");
    vector<string> publicaciones = {"Enero", "Febrero", "Marzo"};
    Periodicos p1(30, "The New York Times", publicaciones);

    // Ordenar detalles de diferentes tipos de recursos bibliográficos
    OrdenarDetalles(l1);
    OrdenarDetalles(r1);
    OrdenarDetalles(p1);

    return 0;
}