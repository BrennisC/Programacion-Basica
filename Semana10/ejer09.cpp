#include <iostream>
using namespace std;
class Jugador;
class Estadio
{
private:
    string nombre;
    int cantidad;

public:
    friend void acceder(Jugador &);
    friend class Jugador;
};
class Jugador
{
private:
    int numero_camiseta;

public:
    void presentarEstadio(Estadio &e1)
    {
        e1.nombre = "El Monumental";
        e1.cantidad = 12234;
        cout << "El nombre del estadio es " << e1.nombre << " y la capacidad es " << e1.cantidad << endl;
    }
    friend void acceder(Jugador &);
};
void acceder(Jugador &j1)
{
    Estadio e1;
    j1.numero_camiseta = 10;
    j1.presentarEstadio(e1);
    cout << "El numerode camiseta es " << j1.numero_camiseta << endl;
}
int main()
{
    Jugador j1;
    acceder(j1);
    return 0;
}