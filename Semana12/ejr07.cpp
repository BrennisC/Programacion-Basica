#include <iostream>
using namespace std;
class Personaje
{
public:
    string nombre;
    int edad;
    Personaje(string n, int e) : nombre(n), edad(e) {}
    string getNombre() { return nombre; }
    void mostrar() { cout << nombre << endl; }
    int getEdad() { return edad; }
};
class Alto_Elfo : public Personaje
{
public:
    double poder;
    string habilidad;
    Alto_Elfo(string nombre, int edad) : Personaje(nombre, edad) {}
    void setPoder(int p) { poder = p; }
    double getPoder() { return poder; }
};
int main()
{
    Alto_Elfo *prt = new Alto_Elfo("Gandalf", 1000);
    prt->nombre = "Frodo";
    prt->mostrar();
}