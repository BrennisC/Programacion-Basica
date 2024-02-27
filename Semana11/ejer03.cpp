#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre;

public:
    Persona(string _nombre) : nombre(_nombre) {}
    virtual void Registrar()
    {
        cout << "Ingrese el nombre: ";
        cin >> nombre;
    }
    virtual void Consultar()
    {
        cout << "Nombre: " << nombre << endl;
    }
    virtual void Sueldo() = 0;
};

class Docente : public Persona
{
private:
    string cargo;
    int HorasTrabajadas;

public:
    Docente(string nombre, string _cargo, int _HorasTrabajadas) : Persona(nombre), cargo(_cargo), HorasTrabajadas(_HorasTrabajadas) {}
    void Registrar() override
    {
        Persona::Registrar();
        cout << "Ingrese el cargo del docente: ";
        cin >> cargo;
    }
    void Consultar() override
    {
        Persona::Consultar();
        cout << "El cargo: " << cargo << endl;
        cout << "Horas trabajadas: " << HorasTrabajadas << endl;
    }
    void Sueldo() override
    {
        cout << "Ingrese las horas Trabajadas: ";
        cin >> HorasTrabajadas;
    }
};

int main()
{
    Docente D1("Villegas", "Profesor", 25);
    D1.Registrar();
    D1.Sueldo();
    D1.Consultar();

    return 0;
}
