#include <iostream>
using namespace std;
class Persona
{
private:
    string name;
    int edad;

public:
    Persona(string _name, int _edad) : name(_name), edad(_edad) {}
    virtual void presentacion();
};
class Alumno : public Persona
{
private:
    string codigo;
    string dni;

public:
    Alumno(string name, int edad, string _codigo, string _dni) : Persona(name, edad), codigo(_codigo), dni(_dni) {}
    void presentacion() override;
};
void Alumno ::presentacion()
{
    Persona::presentacion();
    cout << "Mi codigo es " << codigo << " y mi dni es " << dni << endl;
}
void Persona ::presentacion()
{
    cout << "Mi nombre es " << name << " y tengo " << edad << " anios " << endl;
}