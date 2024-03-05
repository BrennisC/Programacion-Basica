#include <iostream>
using namespace std;
class SuperHeroes
{
private:
    string nombre;
    int edad;

public:
    SuperHeroes() : nombre(), edad() {}
    SuperHeroes(string n, int e) : nombre(n), edad(e) {}
    virtual void mostrar()
    {
        cout << "Nombre : " << nombre << " Edad :  " << edad << endl;
    }
    string getNombre() { return nombre; }
    int getEdad() { return edad; }
};
class Vengadores : public SuperHeroes
{
private:
    bool volar;
    int cantidad;

public:
    Vengadores() : SuperHeroes(), volar(), cantidad() {}
    Vengadores(string n, int e, bool v, int c) : SuperHeroes(n, e), volar(v), cantidad(c) {}
    void mostrar() override
    {
        SuperHeroes ::mostrar();
    }
    bool getVolar() { return volar = true; }
    void setVolar(bool v) { volar = v; }
    void setCantidad(int e) { cantidad = e; }
    int getCantidad() { return cantidad; }
};
class CalcularPoder
{
public:
    Vengadores vg;
    float calcularPoder()
    {
        int cantidad_poder;
        cout << "Ingrese la cantidad de poder para hacer el calculo: ";
        cin >> cantidad_poder;
        vg.setCantidad(cantidad_poder);
        cout << "Entonces la cantidad de poder es : " << vg.getCantidad() * 1000 << endl;
        return vg.getCantidad() * 1000;
    }
};
class Vuelo
{
public:
    Vengadores vg;
    bool checkVolando()
    {
        if (vg.getVolar())
        {
            cout << "Tu heroe pude volar. ";
        }
        else
        {
            cout << "Tu heroe no puede volar. ";
        }
        return vg.getVolar();
    }
};
int main()
{
    Vengadores vg("Iron", 12, true, 35);
    vg.mostrar();
    CalcularPoder cp;
    Vuelo vl;
    cp.calcularPoder();
    vl.checkVolando();
    vg.mostrar();
    return 0;
}