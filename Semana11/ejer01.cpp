#include <iostream>
using namespace std;
class pila
{
private:
    int valor;
    int dato[10];

public:
    pila(int _valor) : valor(_valor) {}
    void push(int x);
    void pop(int x);
    void mostrar();
};
void pila::push(int x)
{
    if (valor == 10)
    {
        cout << "La pila esta llena. ";
    }
    else
    {
        dato[valor] = x;
        valor++;
    }
}
void pila ::pop(int x)
{
    if (valor == 0)
    {
        cout << "Ya no hay elementos. ";
    }
    else
    {
        dato[valor] = x;
        valor--;
    }
}
void pila::mostrar()
{
    for (int i = 0; i < valor; i++)
    {
        cout << dato[i] << " ";
    }
    cout << endl;
}
int main()
{
    pila miPila(0);
    for (int i = 0; i < 11; i++)
    {
        miPila.push(i + 1);
    }
    miPila.mostrar();
    miPila.pop(2);
    miPila.mostrar();

    return 0;
}