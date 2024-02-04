#include <iostream>
using namespace std;
void sumar(int a, int b);
void mensaje();
int main()
{
    int n, n1;
    cout << "Ingrese sus numero: ";
    cin >> n;
    cout << "Ingrese sus numero: ";
    cin >> n1;
    sumar(n, n1);
    mensaje();
    return 0;
}
void mensaje()
{
    cout << "HELLO YOUTUBE." << endl;
}
void sumar(int a, int b)
{
    int resultado = 0;
    resultado = a + b;
    cout << "La suma es : " << resultado << endl;
}