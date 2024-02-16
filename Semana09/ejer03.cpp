#include <iostream>
using namespace std;
class Perro
{
private:
    string nombre;
    int edad;
    string raza;

public:
    Perro(string nombre, int edad, string raza)
    {
        this->nombre = nombre;
        this->edad = edad;
        this->raza = raza;
    }
    string getNombre()
    {
        return this->nombre = nombre;
    }
    void setRaza(string raza)
    {
        cout << "Ahora mi raza es: " << raza << endl;
    }
    void mostrar()
    {
        cout << "Mi nombre es : " << nombre << " , raza es " << raza << " y mi edad es " << edad << endl;
    }
};
int main()
{
    Perro p1("Boby", 12, "chusco");
    p1.mostrar();
    p1.setRaza("chusco mejorado");
    cout << p1.getNombre();
    return 0;
}