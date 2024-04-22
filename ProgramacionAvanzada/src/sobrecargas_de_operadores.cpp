#include <iostream>
#include <stdexcept>
#include <stdexcept>
using namespace std;

struct IntComprobado
{
    IntComprobado(unsigned int valor) : valor2{valor} {}

    IntComprobado const operator+(unsigned int otro)
    {

        IntComprobado resultado{valor2 + otro};
        if (resultado.valor2 > 100)
        {
            throw std ::overflow_error{"Desbordamiento"};
        }
        return resultado;
    }

    const unsigned int valor2;
};

int main()
{

    IntComprobado a{10};
    auto b = a + 100;

    printf("a + 200 + %u", b.valor2);
    try
    {
        auto c = a + std::numeric_limits<unsigned int>::max();
    }
    catch (const std ::overflow_error &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}