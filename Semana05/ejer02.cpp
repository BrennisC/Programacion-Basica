#include <iostream>
#include <string>
#include <vector>
using namespace std;
enum DiasSemana
{
    lunes,
    martes,
    miercoles,
    jueves,
    viernes,
    sabado,
    domingo
};
int main()
{
    DiasSemana dia;
    cout << "Ingrese un opcion: ";

    switch (dia)
    {
    case 1:
        cout << "Opcion 1 seleccionada.";
        break;
    case 2:
        cout << "Opcion 2 seleccionada.";
        break;
    default:
        cout << "Opcion no valida.";
    }
    return 0;
}