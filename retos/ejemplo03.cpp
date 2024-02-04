#include <iostream>
using namespace std;
int Multiply(int a, int b)
{
    return a * b;
}
int main()
{
    int resultado;
    resultado = Multiply(2, 4);
    cout << "El resultado es: " << resultado;

    return 0;
}