#include <iostream>
#include <exception>
using namespace std;
int main()
{
    try
    {
        throw 7;
    }
    catch (double x)
    {
        cout << "Capturamos una excepcion : ";
    }
    catch (...)
    {
        cout << "Es un entero: ";
    }

    return 0;
}