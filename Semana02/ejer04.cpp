#include <iostream>
#include <string>
using namespace std;
enum Estaciones
{
    invierno,
    verano,
    otono,
    primavera
};
int main()
{
    Estaciones estaciones = otono;
    switch (estaciones)
    {
    case verano:
        cout << "estas en el verano";
        break;
    case otono:
        cout << "estas en otoño";
        break;
    case primavera:
        cout << "estas en la primavera";
        break;
    case invierno:
        cout << "estas en el invierno";

    default:
        cout << "No estas en ninguna";
        break;
    }
}