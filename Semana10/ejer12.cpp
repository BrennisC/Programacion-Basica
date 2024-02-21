#include <iostream>
using namespace std;
class Euros
{
private:
    int m_euros{};

public:
    Euros(int euros) : m_euros{euros} {}
    // sumar Euros + Euros usando una funcion amiga
    friend Euros operator+(const Euros &e1, const Euros &e2);
    int getEuros() const { return m_euros; }
};
// esta funcion no es funcion miembro
Euros operator+(const Euros &e1, const Euros &e2)
{
    // usan el constructor Euros y operador (int, int, double)
    // podemos acceder a m_euros directamente a la atributos de la clase
    return Euros{e1.m_euros + e2.m_euros};
}
int main()
{
    Euros euros1{6};
    Euros euros2{8};
    Euros sumareEuros{euros1 + euros2};
    cout << "Tengo " << sumareEuros.getEuros() << " euros.\n";
    return 0;
}