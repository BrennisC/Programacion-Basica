#include <iostream>
using namespace std;
class Dispositivo
{
private:
    string nombre;
    int cantidad;

public:
    Dispositivo(string n, int c) : nombre(n), cantidad(c) {}
    void Presentar()
    {
        cout << "Nombre : " << nombre << endl;
        cout << "Cantidad : " << cantidad << endl;
    }
};
class Sistema
{
private:
    Dispositivo &dispositivos;

public:
    Sistema(Dispositivo &d) : dispositivos(d) {}
    void display()
    {
        dispositivos.Presentar();
    }
};
int main()
{
    Dispositivo dp("Monitor", 23);
    Sistema sp(dp);
    sp.display();
    return 0;
}