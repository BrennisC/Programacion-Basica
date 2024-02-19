#include <iostream>
using namespace std;
class B;
class A
{
private:
    string nombre;
    int edad;

public:
    friend void presentarse(A &, B &);
};
class B
{
private:
    string numero_DNI;
    string lugar;

public:
    friend void presentarse(A &, B &);
};
void presentarse(A &a, B &b)
{
    a.edad = 12;
    a.nombre = "Brennis";
    cout << "Mi nombre es " << a.nombre << " y mi edad es " << a.edad << endl;
    b.lugar = "Huanuco";
    b.numero_DNI = "72268378";
    cout << "Vivo en " << b.lugar << " y mi numero de DNI es " << b.numero_DNI << endl;
}
int main()
{
    A a;
    B b;
    presentarse(a, b);
    return 0;
}