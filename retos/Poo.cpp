#include <iostream>
using namespace std;
class Operaciones
{
public:
    int primer;
    int segundo;
    int resultado;

    void sumar()
    {
        resultado = primer + segundo;
        cout << resultado << endl;
    }
    void resta()
    {
        resultado = primer - segundo;
    }
    Operaciones(int, int);
};
Operaciones::Operaciones(int a, int b)
{
    primer = a;
    segundo = b;
}
int main()
{
    Operaciones Objeto_01(20, 21);
    Objeto_01.sumar();

    return 0;
}