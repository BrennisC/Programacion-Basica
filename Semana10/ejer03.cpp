#include <iostream>
using namespace std;
class Animal
{
private:
    string nombre;
    int edad;

public:
    Animal(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}
    void mostrar()
    {
        cout << "Mi nombre es " << nombre << " y mi edad es : " << edad << endl;
    }
};
class Manifero : public Animal
{
private:
    int numPatas;
    bool tienePelaje;

public:
    Manifero(string nombre, int edad, int _numPatas, bool _tienePelaje) : Animal(nombre, edad), numPatas(_numPatas), tienePelaje(_tienePelaje) {}
    void aumentar()
    {
        Animal::mostrar();
        cout << " estoy tanto cria" << endl;
    }
    void informacion();
};
void Manifero ::informacion()
{
    Animal::mostrar();
    cout << "Numero de patas es " << numPatas << endl;
    if (tienePelaje)
    {
        cout << "Tiene pelo " << endl;
    }
    else
    {
        cout << "No tiene pelo " << endl;
    }
}
int main()
{
    Manifero m1("Leon", 12, 4, true);
    m1.informacion();
    m1.aumentar();
    return 0;
}