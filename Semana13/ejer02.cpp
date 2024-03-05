#include <iostream>
#include <time.h>
#include <cstdlib>
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
    float calcularPoder(Vengadores vg)
    {
        srand(time(NULL));

        int cantidad_poder = rand() % 100 + 1;

        vg.setCantidad(cantidad_poder);
        cout << "Entonces la cantidad de poder es : " << vg.getCantidad() * 1000 << endl;
        return vg.getCantidad() * 1000;
    }
};
class Vuelo
{
public:
    bool checkVolando(Vengadores vg)
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
    cp.calcularPoder(vg);
    vl.checkVolando(vg);
    vg.mostrar();
    return 0;
}