#include <iostream>
using namespace std;
class Tiempo
{
private:
    int horas, minutos, segundos;

public:
    Tiempo(int, int, int);
    Tiempo(int);
    void mostrarTiempo();
};
Tiempo::Tiempo(int _horas, int _minutos, int _segundos)
{
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}
Tiempo::Tiempo(int tiempoSeg)
{
    horas = tiempoSeg / 3600;
    tiempoSeg %= tiempoSeg / 3600;
    minutos = tiempoSeg / 60;
    segundos = tiempoSeg % 60;
}
void Tiempo ::mostrarTiempo()
{
    cout << "La hora es : " << horas << ":" << minutos << ":" << segundos << endl;
}
int main()
{
    Tiempo horaActual(16, 25, 30);
    Tiempo Actual(5000);
    horaActual.mostrarTiempo();
    Actual.mostrarTiempo();
    return 0;
}