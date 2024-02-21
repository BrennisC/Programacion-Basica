#include <iostream>
using namespace std;
class Datos;
class CuentaBancaria
{
private:
    int saldo;
    int almacenar;

public:
    friend void mostrarSaldo(CuentaBancaria &);
    friend void retirarSaldo(CuentaBancaria &);
    friend class Datos;
};
class Datos
{
private:
    string nombre;
    string numero_identidad;

public:
    Datos(string _nombre, string _numero_identidad) : nombre(_nombre), numero_identidad(_numero_identidad) {}
    void mostrarDatos()
    {
        cout << "NOMBRE : " << nombre << endl;
        cout << "DNI : " << numero_identidad << endl;
    }
};
void mostrarSaldo(CuentaBancaria &cb1)
{
    cb1.saldo = 15588;
    cb1.almacenar = cb1.saldo;
    cout << "Usted tiene es su cuenta: \n";
    cout << cb1.saldo;
}
void retirarSaldo(CuentaBancaria &cb1)
{
    cout << "\nIngrese la cantidada que desea retirar: \n";
    cin >> cb1.saldo;
    if (cb1.saldo == cb1.almacenar)
    {
        cout << "\nSu tarjeta sera sobrecargada. \n";
    }
    else if (cb1.saldo > cb1.almacenar)
    {
        cout << "\nUsted no cuenta con ese dinero. \n";
    }
    else
    {
        cout << "\nImprimiendo boleta. \n";
        Datos d1("Brennis", "7228378");
        d1.mostrarDatos();
    }
}
int main()
{
    CuentaBancaria cb1;
    mostrarSaldo(cb1);
    retirarSaldo(cb1);

    return 0;
}