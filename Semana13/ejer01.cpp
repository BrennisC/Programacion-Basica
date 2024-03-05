#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Producto
{
private:
    int id_producto;
    string descripcion;
    string fecha;
    float precio;

public:
    Producto() : id_producto(0), descripcion(""), fecha(""), precio(0.0) {}
    Producto(int i, const string &d, const string &f, float p) : id_producto(i), descripcion(d), fecha(f), precio(p) {}

    int obtenerId() const { return id_producto; }
    string obtenerDescripcion() const { return descripcion; }
    string obtenerFecha() const { return fecha; }
    float obtenerPrecio() const { return precio; }

    void ingresarInformacion()
    {
        cout << "Ingrese el ID del producto: ";
        cin >> id_producto;
        cout << "Ingrese la descripcion del producto: ";
        cin.ignore();
        getline(cin, descripcion);
        cout << "Ingrese la fecha del producto: ";
        getline(cin, fecha);
        cout << "Ingrese el precio del producto: ";
        cin >> precio;
    }

    void mostrarInformacion() const
    {
        cout << "ID del producto: " << id_producto << endl;
        cout << "Descripcion: " << descripcion << endl;
        cout << "Fecha: " << fecha << endl;
        cout << "Precio: " << precio << endl;
    }
};

class Venta
{
private:
    Producto producto;
    int id_venta;
    int cantidad;

public:
    Venta() : producto(), id_venta(0), cantidad(0) {}
    Venta(const Producto &prod, int i_v, int c) : producto(prod), id_venta(i_v), cantidad(c) {}

    Producto obtenerProducto() const { return producto; }
    int obtenerIdVenta() const { return id_venta; }
    int obtenerCantidad() const { return cantidad; }

    void ingresarInformacion()
    {
        cout << "Ingrese el ID de la venta: ";
        cin >> id_venta;
        cout << "Ingrese la cantidad vendida: ";
        cin >> cantidad;
        producto.ingresarInformacion();
    }

    void mostrarInformacion() const
    {
        cout << "ID de la venta: " << id_venta << endl;
        cout << "Cantidad vendida: " << cantidad << endl;
        producto.mostrarInformacion();
    }
};

class Vendedor
{
private:
    int id_vendedor;

public:
    Vendedor() : id_vendedor(0) {}
    Vendedor(int id_vd) : id_vendedor(id_vd) {}

    int obtenerIdVendedor() const { return id_vendedor; }

    void ingresarInformacion()
    {
        cout << "Ingrese el ID del vendedor: ";
        cin >> id_vendedor;
    }

    void mostrarInformacion() const
    {
        cout << "ID del vendedor: " << id_vendedor << endl;
    }
};

class Persona
{
private:
    Vendedor vendedor;
    int id;
    string apellido;
    string nombre;
    string DNI;
    string direccion;
    vector<Venta> ventas;

public:
    Persona() : id(0), apellido(""), nombre(""), DNI("") {}
    Persona(int id_vendedor, int i, const string &a, const string &n, const string &dni, const string &dir) : vendedor(id_vendedor), id(i), apellido(a), nombre(n), DNI(dni), direccion(dir) {}

    void agregarVenta(const Venta &venta) { ventas.push_back(venta); }

    float calcularTotalVentas() const
    {
        float total = 0.0;
        for (const auto &venta : ventas)
        {
            total += venta.obtenerProducto().obtenerPrecio() * venta.obtenerCantidad();
        }
        return total;
    }

    void mostrarVentas() const
    {
        cout << "Ventas realizadas por " << nombre << " " << apellido << ":" << endl;
        for (const auto &venta : ventas)
        {
            venta.mostrarInformacion();
            cout << endl;
        }
    }

    void ingresarInformacion()
    {
        cout << "Ingrese el ID de la persona: ";
        cin >> id;
        cout << "Ingrese el apellido de la persona: ";
        cin.ignore();
        getline(cin, apellido);
        cout << "Ingrese el nombre de la persona: ";
        getline(cin, nombre);
        cout << "Ingrese el DNI de la persona: ";
        getline(cin, DNI);
        cout << "Ingrese la direccion de la persona: ";
        getline(cin, direccion);
        vendedor.ingresarInformacion();
    }

    void mostrarInformacion() const
    {
        cout << "ID de la persona: " << id << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "DNI: " << DNI << endl;
        cout << "Direccion: " << direccion << endl;
        vendedor.mostrarInformacion();
        cout << "Total de ventas: " << calcularTotalVentas() << endl;
    }
};

int main()
{
    Producto producto1;
    cout << "Ingrese la informacion del primer producto:" << endl;
    producto1.ingresarInformacion();
    cout << endl;

    Venta venta1;
    cout << "Ingrese la informacion de la primera venta:" << endl;
    venta1.ingresarInformacion();
    venta1.ingresarInformacion();
    cout << endl;

    Persona persona1;
    cout << "Ingrese la informacion de la primera persona:" << endl;
    persona1.ingresarInformacion();
    cout << endl;

    cout << "Informacion del primer producto:" << endl;
    producto1.mostrarInformacion();
    cout << endl;

    cout << "Informacion de la primera venta:" << endl;
    venta1.mostrarInformacion();
    cout << endl;

    cout << "Informacion de la primera persona:" << endl;
    persona1.mostrarInformacion();
    cout << endl;

    return 0;
}
