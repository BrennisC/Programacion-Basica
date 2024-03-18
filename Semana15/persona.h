#include <iostream>
using namespace std;
class Persona
{
private:
    string nombre;
    string apellido_1;
    string apellido_2;
    string Date;
    string nacionalidad;

public:
    Persona(string n, string a1, strign a2, string dt, string na) : nombre(n), apellido_1(a1), apellido_2(a2), Date(dt), nacionalidad(na) {}
    virtual void shown()
    {
        cout << "Mi nombre es: " << nombre << endl;
        cout << "Mi primer apellido es: " << apellido_1 << endl;
        cout << "Mi segundo apellido es: " << apellido_2 << endl;
        cout << "Mi  fecha de nacimiento es: " << Date << endl;
        cout << "Soy de: " << nacionalidad << endl;
    }
};
