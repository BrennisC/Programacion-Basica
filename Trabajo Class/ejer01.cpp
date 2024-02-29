#include <iostream>
#include <stdlib.h>
using namespace std;
class Vehiculo
{
private:
    string nombre_v;
    int recorrido_v;

public:
    Vehiculo(string n, int r) : nombre_v(n), recorrido_v(r) {}
    virtual void mostrarModelo()
    {
        cout << "Nombre del vehiculo : " << nombre_v << endl;
        cout << "Recorrido del vehiculo : " << recorrido_v << endl;
    }
    string getNombre() { return nombre_v; }
    int getRecorrido() { return recorrido_v; }
};
class Automovil : public Vehiculo
{
private:
    string color_a;

public:
    Automovil(string nombre_v, int recorrido_v, string c) : Vehiculo(nombre_v, recorrido_v), color_a(c) {}
    void mostrarModelo() override
    {
        Vehiculo::mostrarModelo();
        cout << "Soy un automovil de color " << color_a << endl;
    }
    void setColor(string c) { color_a = c; }
};
class Motocicleta : public Vehiculo
{
private:
    string marca_m;

public:
    Motocicleta(string nombre_v, int recorrido_v, string m) : Vehiculo(nombre_v, recorrido_v), marca_m(m) {}
    void mostrarModelo() override
    {
        Vehiculo::mostrarModelo();
        cout << "La marca de la motocicleta es : " << marca_m << endl;
    }
    void setMarca(string m) { marca_m = m; }
};
void IngreserAutomovil();
void IngreserMotocicleta();
int main()
{
    int opc;
    do
    {
        cout << "[1]Ingrese en el automovil: \n";
        cout << "[2] Ingrese en la motocicleta: \n";
        cout << "[3] Salir: \n";
        cout << "Ingrese su opcion : \n";
        cin >> opc;
        switch (opc)
        {
        case 1:
            system("cls");
            IngreserAutomovil();
            break;
        case 2:
            system("cls");
            IngreserMotocicleta();
            break;
        case 3:
            cout << "Saliendo ...";
            break;
        default:
            cout << "Opcion no validad. ";
            break;
        }
    } while (opc != 3);
    return 0;
}
void IngreserAutomovil()
{
    int opcion;

    Automovil a1("Minivan", 1558, "azul");
    a1.mostrarModelo();

    cout << "Deseas cambiar el color de vehiculo presione 2 \n";
    cin >> opcion;
    if (opcion == 2)
    {
        string color;
        cout << "Ingrese el nuevo color : \n";
        cin >> color;
        a1.setColor(color);
    }
    else
    {
        cout << "No se realizaron cambios" << endl;
    }
    a1.mostrarModelo();
    system("pause");
    system("cls");
}
void IngreserMotocicleta()
{
    Motocicleta m1("Deportivo", 1569, "yanana");
    m1.mostrarModelo();
    char verificar;
    cout << "Deseas cambiar el modelo s/y : ";
    cin >> verificar;
    if (verificar == 'y' || verificar == 'Y')
    {
        string cambiar;
        cout << "Ingrese el nueva marca: " << endl;
        cin >> cambiar;
        m1.setMarca(cambiar);
    }
    m1.mostrarModelo();
    system("pause");
    system("cls");
}