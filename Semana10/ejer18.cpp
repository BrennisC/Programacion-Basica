#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria;

class Cuenta
{
public:
    void depositar(CuentaBancaria &cuenta, double cantidad);
    void retirar(CuentaBancaria &cuenta, double cantidad);
    void consultarSaldo(CuentaBancaria &cuenta);
};

class CuentaBancaria
{
private:
    string numeroCuenta;
    double saldo;

public:
    CuentaBancaria(string _numeroCuenta, double _saldo) : numeroCuenta(_numeroCuenta), saldo(_saldo) {}

    friend class Cuenta;

    double getSaldo()
    {
        return saldo;
    }

    void mostrarSaldo()
    {
        cout << "Saldo actual: $" << saldo << endl;
    }

    friend CuentaBancaria operator+(CuentaBancaria &cuenta, double cantidad)
    {
        cuenta.saldo += cantidad;
        return cuenta;
    }
};

void Cuenta::depositar(CuentaBancaria &cuenta, double cantidad)
{
    cuenta.saldo += cantidad;
    cout << "Deposito de $" << cantidad << " realizado correctamente." << endl;
}

void Cuenta::retirar(CuentaBancaria &cuenta, double cantidad)
{
    if (cantidad <= cuenta.saldo)
    {
        cuenta.saldo -= cantidad;
        cout << "Retiro de $" << cantidad << " realizado correctamente." << endl;
    }
    else
    {
        cout << "Saldo insuficiente para realizar el retiro." << endl;
    }
}

void Cuenta::consultarSaldo(CuentaBancaria &cuenta)
{
    cout << "Numero de cuenta: " << cuenta.numeroCuenta << endl;
    cout << "Saldo actual: $" << cuenta.saldo << endl;
}

int main()
{
    CuentaBancaria cuenta("4584413332", 458787);
    Cuenta cliente;

    cliente.depositar(cuenta, 784);
    cliente.retirar(cuenta, 4587);
    cliente.consultarSaldo(cuenta);

    CuentaBancaria nuevaCuenta = cuenta + 45;
    nuevaCuenta.mostrarSaldo();

    return 0;
}
