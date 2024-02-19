#include <iostream>
using namespace std;
class Vehiculos
{
private:
    string n;
    int cantidad;

public:
    Vehiculos(string _n) : n(_n), cantidad(0) {}
    void presentarse()
    {
        cout << "El nombre del vehiculo es " << n << " y la cantidad que hay son " << cantidad << endl;
    }
    friend void mostrarCantidad(Vehiculos &);
};
void mostrarCantidad(Vehiculos &v1)
{
    v1.cantidad = 25;
    cout << "Ahora son : " << v1.cantidad << endl;
}
int main()
{
    Vehiculos v1("Toyota");
    v1.presentarse();
    mostrarCantidad(v1);
    v1.return 0;
}
