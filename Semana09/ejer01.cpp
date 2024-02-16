#include <iostream>
using namespace std;
class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad)
    {
        this->nombre = nombre;
        this->edad = edad;
    }
    void mostrar_informacion()
    {
        cout << "Nombre : " << nombre << " Edad " << edad << endl;
    }
};
class Persona1 : public Persona
{
public:
    Persona1(string nombre, int edad) : Persona(nombre, edad) {}
    void mostrar_informacion1()
    {
        Persona::mostrar_informacion();
    }
};
int main()
{
    Persona p1("Brennis", 20);
    p1.mostrar_informacion();
    Persona1 p2("Benjaminn", 20);
    p2.mostrar_informacion1();
    return 0;
}