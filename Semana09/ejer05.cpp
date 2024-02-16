#include <iostream>
using namespace std;
class Numero
{
private:
    string nombre;
    int numero;

public:
    Numero(string nombre, int numero) : nombre(nombre), numero(numero) {}
    string getNombre()
    {
        return nombre;
    }
    int getNumero()
    {
        return numero;
    }
    void mostrar();
};
class numeroNaturales : public Numero
{
private:
    string posicion;

public:
    numeroNaturales(string nombre, int numero, string posicion) : Numero(nombre, numero), posicion(posicion) {}
    string getPosicion()
    {
        return posicion;
    }
    void informacion();
};
void Numero ::mostrar()
{
    cout << "El nombre es :" << nombre << " y su valor es : " << numero << endl;
}
void numeroNaturales ::informacion()
{
    Numero::mostrar();
    cout << "Se encuentra en la posicion " << posicion << endl;
}
int main()
{
    Numero *p1 = new Numero("Primero", 1);
    p1->mostrar();
    numeroNaturales *n1 = new numeroNaturales("Veinte", 20, "quinto");
    n1->informacion();
    return 0;
}