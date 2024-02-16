#include <iostream>
using namespace std;
class Animal
{
private:
    string nombre;
    string raza;
    int edad;

public:
    Animal(string _nombre, string _raza, int _edad) : nombre(_nombre), raza(_raza), edad(_edad) {}
    virtual void informacion();
};
class Gatos : public Animal
{
private:
    string alimentacion;

public:
    Gatos(string nombre, string raza, int edad, string alimentacion) : Animal(nombre, raza, edad), alimentacion(alimentacion) {}
    void informacion() override;
};
void Animal ::informacion()
{
    cout << "Nombre : " << nombre << endl;
    cout << "Raza : " << raza << endl;
    cout << "Edad : " << edad << endl;
}
void Gatos ::informacion()
{
    Animal::informacion();
    cout << "Alimentacion es : " << alimentacion << endl;
}
