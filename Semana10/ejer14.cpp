#include <iostream>
using namespace std;
class Mostrar;
class Almacenar
{
private:
    int m_valor{};
    double m_dvalor{};

public:
    Almacenar(int mvalor, double dvalor) : m_valor{mvalor}, m_dvalor{dvalor} {}
    friend class Mostrar;
};
class Mostrar
{
private:
    bool m_mostrarIntPrimero;

public:
    Mostrar(bool mostrarIntPrimero) : m_mostrarIntPrimero{mostrarIntPrimero} {}
    void mostrarItem(const Almacenar &almacenar)
    {
        if (m_mostrarIntPrimero)
        {
            cout << almacenar.m_valor << ' ' << almacenar.m_dvalor << '\n';
        }
        else
        {
            cout << almacenar.m_dvalor << ' ' << almacenar.m_valor << '\n';
        }
    }
};
int main()
{
    Almacenar almacenar{5, 5.7};
    Mostrar mostrar{true};
    mostrar.mostrarItem(almacenar);
    return 0;
}