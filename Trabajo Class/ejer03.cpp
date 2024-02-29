/* Crea una situación que requiera el uso de herencia múltiple. Diseña una jerarquía de clases donde una clase base tiene al menos dos clases derivadas. A continuación, crea una clase que herede de ambas clases derivadas. Demuestra cómo se heredan las propiedades y métodos de ambas clases. */
#include <iostream>
using namespace std;
class Base
{
private:
    string nombre;
    int cantidad;

public:
    Base(string n, int c) : nombre(n), cantidad(c) {}
    virtual void Presentar()
    {
        cout << "Mi nombre " << nombre << endl;
        cout << "La cantidad " << cantidad << endl;
    }
    string getNombre() { return nombre; }
    int getCantidad() { return cantidad; }
};
class Derivada1 : public Base
{
private:
    char caracter1;

public:
    Derivada1(string nombre, int cantidad, char c) : Base(nombre, cantidad), caracter1(c) {}
    void Presentar()
    {
        Base ::Presentar();
        cout << "Mi inicial es " << caracter1 << endl;
    }
    char getCaracter() { return caracter1; }
};
class Derivada2 : public Base
{
private:
    char caracter2;

public:
    Derivada2(string nombre, int cantidad, char c2) : Base(nombre, cantidad), caracter2(c2) {}
    void Presentar()
    {
        Base ::Presentar();
        cout << "Mi inicial es " << caracter2 << endl;
    }
    char getCaracter2() { return caracter2; }
};
int main()
{
    Derivada1 d1("Brennis", 2, 'b');
    cout << d1.getCaracter() << endl;
    d1.Presentar();
    cout << d1.getNombre() << endl;
    cout << "\n\n";

    Derivada2 d2("Benjaminn", 18, 'b');
    cout << d2.getCaracter2() << endl;
    d2.Presentar();
    cout << d2.getNombre() << endl;

    return 0;
}