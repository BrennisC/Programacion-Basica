#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t tiempoActual = time(0);
    tm *fecha = localtime(&tiempoActual);
    if (fecha != nullptr)
    {
        int dia = fecha->tm_mday;
        int mes = fecha->tm_mon + 1;
        int anio = fecha->tm_year + 1900;
        cout << "Fecha del sistema: ";
        cout << (dia < 10 ? "0" : "") << dia << "-";
        cout << (mes < 10 ? "0" : "") << mes << "-";
        cout << anio << endl;
    }
    else
    {
        cerr << "Error al obtener la hora actual." << endl;
    }
    return 0;
}