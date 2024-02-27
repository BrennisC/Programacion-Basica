#include <iostream>
#include <vector>
using namespace std;

class Pila1
{
private:
    int valor;
    int dato[10];

public:
    Pila1(int valor) : valor(valor) {}

    void push(int newvalor)
    {
        valor += newvalor;
    }

    void pop(int newvalor)
    {
        if (newvalor > valor)
        {
            cout << "Error: El valor a pop es mayor que el valor actual de la pila" << endl;
            return;
        }
        valor -= newvalor;
    }

    void mostrar()
    {
        cout << "El valor es " << valor << endl;
    }
};

int main()
{
    int n;
    Pila1 p1(0);

    p1.push(4);
    p1.push(4);
    p1.push(4);
    p1.push(4);
    p1.push(4);
    p1.push(4);
    p1.pop(3);
    p1.pop(3);
    p1.pop(3);
    p1.pop(3);
    p1.pop(3);
    p1.pop(3);
    p1.mostrar();
    return 0;
}