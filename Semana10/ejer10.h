/* Crea una simulación de un juego de estrategia en tiempo real utilizando clases. Deberás diseñar clases para unidades, edificaciones, recursos, etc. Implementa funciones para el movimiento de unidades, la recolección de recursos, la construcción de edificaciones, la estrategia de ataque y defensa, entre otros aspectos del juego. */
#include <iostream>
using namespace std;

class JuegoRol; // Declaración anticipada de la clase JuegoRol

class Unidades
{
private:
    int perdidas_tropa;
    int recursos_ganados;

public:
    Unidades(int _perdidas_tropa, int _recursos_ganados) : perdidas_tropa(_perdidas_tropa), recursos_ganados(_recursos_ganados) {}
    void mostrar_supervivientes(JuegoRol &jr1, JuegoRol &jr2); // Declaración de la función mostrar_supervivientes
    friend void Recoleccion(Unidades &, Unidades &);
};

class JuegoRol
{
private:
    string nombre_tropa;
    int cantidad_tropa;

public:
    JuegoRol(string _nombre_tropa, int _cantidad_tropa) : nombre_tropa(_nombre_tropa), cantidad_tropa(_cantidad_tropa) {}
    friend void enfrentarse(JuegoRol &, JuegoRol &);
    friend class Unidades; // Declaración de Unidades como clase amiga
};
void Recoleccion(Unidades &un1, Unidades &un2)
{
    cout << "Ingrese la cantidad de recursos del jugador uno: ";
    cin >> un1.recursos_ganados;
    cout << "Ingrese la cantidad de recursos del jugador dos: ";
    cin >> un2.recursos_ganados;
}
void enfrentarse(JuegoRol &jr1, JuegoRol &jr2)
{
    cout << "Ingrese el nombre de la tropa: ";
    cin >> jr1.nombre_tropa;
    cout << "Ingresa el numero de tropas de Primer jugador: ";
    cin >> jr1.cantidad_tropa;

    cout << "Ingrese el nombre de la tropa: ";
    cin >> jr2.nombre_tropa;
    cout << "Ingresa el numero de tropas de Segundo jugador: ";
    cin >> jr2.cantidad_tropa;

    if (jr1.cantidad_tropa > jr2.cantidad_tropa)
    {
        cout << "El jugador uno gano. ";
        jr1.cantidad_tropa -= jr2.cantidad_tropa;
        jr2.cantidad_tropa = 0;
    }
    else if (jr2.cantidad_tropa > jr1.cantidad_tropa)
    {
        cout << "El jugador dos gano. ";
        jr2.cantidad_tropa -= jr1.cantidad_tropa;
        jr1.cantidad_tropa = 0;
    }
    else if (jr1.cantidad_tropa == jr2.cantidad_tropa)
    {
        cout << "Hay un empate. ";
        jr1.cantidad_tropa = 0;
        jr2.cantidad_tropa = 0;
    }
}

void Unidades::mostrar_supervivientes(JuegoRol &jr1, JuegoRol &jr2)
{
    cout << "Cantidad de tropas del primer jugador: " << jr1.cantidad_tropa << endl;
    cout << "Cantidad de tropas del segundo jugador: " << jr2.cantidad_tropa << endl;
}
