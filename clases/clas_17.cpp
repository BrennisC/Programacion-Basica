#include <iostream>
#include <conio.h>
using namespace std;
class Ejemplo
{
private:
    int Atribi1, Atribi2;

public:
    Ejemplo();
    Ejemplo(int, int);
    void Imprime();
    friend int suma(int, Ejemplo);
};
Ejemplo::Ejemplo()
{
}
Ejemplo::Ejemplo(int x, int y)
{
    Atribi1 = x;
    Atribi2 = y;
}
void Ejemplo::Imprime()
{
    cout << "El valor de primer numero es: " << Atribi1 << endl;
    cout << "El valor de segundo numero es: " << Atribi2 << endl;
}
int suma(int dato, Ejemplo valor)
{
    return (dato + valor.Atribi1 + valor.Atribi2);
}
void UsaFuncionAmiga()
{
    int resultado;
    Ejemplo miClase(2, 5);
    resultado = suma(5, miClase);
    cout << "El resultado de la suma es: " << resultado << endl;
}
int main()
{
    UsaFuncionAmiga();
    getch();
    return 0;
}