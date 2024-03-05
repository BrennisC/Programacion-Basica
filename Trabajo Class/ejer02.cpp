#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Vehiculo
{
private:
    vector<string> nombre_v;
    vector<int> recorrido_v;

public:
    Vehiculo() : nombre_v(), recorrido_v() {}
    Vehiculo(const vector<string> &n, const vector<int> &r) : nombre_v(n), recorrido_v(r) {}
    virtual void mostrarModelo()
    {
        cout << "Nombre del vehiculo : ";
        for (const auto &nombre : nombre_v)
        {
            cout << nombre << " ";
        }
        cout << endl;
        cout << "Recorrido del vehiculo : ";
        for (const auto &recorrido : recorrido_v)
        {
            cout << recorrido << " ";
        }
        cout << endl;
    }
    virtual void Completar() {}
    vector<string> getNombre() { return nombre_v; }
    vector<int> getRecorrido() { return recorrido_v; }
};

class Automovil : public Vehiculo
{
private:
    string color_a;

public:
    Automovil(const vector<string> &nombre_v, const vector<int> &recorrido_v, const string &c) : Vehiculo(nombre_v, recorrido_v), color_a(c) {}
    void mostrarModelo() override
    {
        Vehiculo::mostrarModelo();
        cout << "Soy un automovil de color " << color_a << endl;
    }
    void setColor(const string &c) { color_a = c; }
    friend void Registrar(Automovil &a);
};

class Motocicleta : public Vehiculo
{
private:
    string marca_m;

public:
    Motocicleta(const vector<string> &nombre_v, const vector<int> &recorrido_v, const string &m) : Vehiculo(nombre_v, recorrido_v), marca_m(m) {}
    void mostrarModelo() override
    {
        Vehiculo::mostrarModelo();
        cout << "La marca de la motocicleta es : " << marca_m << endl;
    }
    void setMarca(const string &m) { marca_m = m; }
};

void Registrar(Automovil &a)
{
    string color;
    cout << "Ingrese el nuevo color : ";
    cin >> color;
    a.setColor(color);
}

void IngreserAutomovil()
{
    Automovil a1({"Minivan"}, {1558}, "azul");
    a1.mostrarModelo();

    int opcion;
    cout << "Deseas cambiar el color de vehiculo presione 2: ";
    cin >> opcion;
    if (opcion == 2)
    {
        Registrar(a1);
    }
    else
    {
        cout << "No se realizaron cambios" << endl;
    }
    a1.mostrarModelo();
}

void IngreserMotocicleta()
{
    Motocicleta m1({"Deportivo"}, {1569}, "yanana");
    m1.mostrarModelo();
    char verificar;
    cout << "Deseas cambiar el modelo s/y : ";
    cin >> verificar;
    if (verificar == 'y' || verificar == 'Y')
    {
        string cambiar;
        cout << "Ingrese el nueva marca: ";
        cin >> cambiar;
        m1.setMarca(cambiar);
    }
    m1.mostrarModelo();
}

int main()
{
    int opc;
    do
    {
        cout << "[1]Ingrese en el automovil\n";
        cout << "[2]Ingrese en la motocicleta\n";
        cout << "[3]Salir\n";
        cout << "Ingrese su opcion: ";
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
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion no valida.\n";
            break;
        }
    } while (opc != 3);
    return 0;
}
