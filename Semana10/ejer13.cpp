#include <iostream>
using namespace std;
class Euros
{
private:
    int m_euros;

public:
    Euros(int euros) : m_euros{euros} {}
    friend Euros operator+(const Euros &c1, int valor);
    friend Euros operator+(int valor, const Euros &c1);

    int getEuros() const { return m_euros; }
};
Euros operator+(const Euros &c1, int valor)
{
    return c1.m_euros + valor;
}
Euros operator+(int valor, const Euros &c1)
{
    return valor + c1.m_euros;
}

int main()
{
    Euros c1{Euros{7} + 5};
    Euros c2{3 + Euros{8}};
    cout << "Tengo " << c1.getEuros() << endl;
    cout << "Tengo " << c2.getEuros() << endl;
    return 0;
}