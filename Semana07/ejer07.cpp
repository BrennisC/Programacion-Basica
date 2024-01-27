#include <iostream>
using namespace std;
void porvalor(int a , int b)
{
    a *=2;
    b *=2;
}
void porReferencia(int &a, int &b)
{
    a*=2;
    b*=2;
}
void mostrar(int a,int b)
{
    cout << "EL valor de a "<<a << " y el valor de b es "<<b<<" es" ;
}
int main()
{
    int a = 5;
    int b = 10;
    porvalor(a, b);
    mostrar(a, b);
    porReferencia(a, b);
    mostrar(a, b);
    return 0;
}