#include <iostream>
using namespace std;
inline int sumar(int, int);
int main()
{
    int resultado = sumar(5, 4);
    cout << "El resultado es : " << resultado;
    return 0;
}
inline int sumar(int a, int b)
{
    return a + b;
}