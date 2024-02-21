#include <iostream>
using namespace std;
class Persona
{
private:
    int valor;

public:
    Persona(int _valor) : valor(_valor) {}
    friend Persona operator+(Persona &p1, Persona &p2);
    void imprimir();
};
Persona operator+(Persona &p1, Persona &p2)
{
    return p1.valor + p2.valor;
}
void Persona ::imprimir()
{
    cout << valor << endl;
}
int main()
{
    Persona p1(4);
    Persona p2(5);

    cout << "Yo tengo en total ";
    p1.imprimir();
    cout << "Yo tengo en total ";
    p2.imprimir();
    Persona sumar = p1 + p2;
    cout << "La suma en conjunto es : ";
    sumar.imprimir();
    return 0;
}