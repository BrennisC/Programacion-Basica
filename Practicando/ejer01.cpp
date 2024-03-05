#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

class Autor
{
private:
    string nombre;
    string nacionalidad;
    string fecha_nacimiento;

public:
    Autor() : nombre(""), nacionalidad(""), fecha_nacimiento("") {}
    Autor(string n, string nc, string fn) : nombre(n), nacionalidad(nc), fecha_nacimiento(fn) {}

    void mostrar()
    {
        cout << "Nombre : " << nombre << endl;
        cout << "Nacionalidad : " << nacionalidad << endl;
        cout << "Fecha de nacimiento: " << fecha_nacimiento << endl;
    }
};

class Libro
{
private:
    string titulo;
    string fecha_publicacion;
    float precio;
    Autor autor;

public:
    Libro() : titulo(""), fecha_publicacion(""), precio(0.0) {}
    Libro(string t, string fp, float p, Autor a) : titulo(t), fecha_publicacion(fp), precio(p), autor(a) {}
    Autor getAutor() { return autor; }
    string getTitulo() { return titulo; }
    void setTitulo(string t) { titulo = t; }
    void setFecha(string fp) { fecha_publicacion = fp; }
    void setPrecio(float p) { precio = p; }
};

class Biblioteca
{
private:
    vector<Libro> libros;

public:
    void agregarLibro(Libro l)
    {
        libros.push_back(l);
    }

    void mostrar()
    {
        cout << "Libros en la biblioteca: " << endl;
        for (auto &libro : libros)
        {
            cout << "Titulo: " << libro.getTitulo() << endl;
            cout << "Precio: " << libro.setPrecio() << endl;
        }
    }
};

class RegistrarLibro : public Libro
{
private:
    int codigo_venta;

public:
    RegistrarLibro() : codigo_venta(0) {}
    RegistrarLibro(string t, string fp, float p, Autor a, int c) : Libro(t, fp, p, a), codigo_venta(c) {}

    void ingresarlibro(Libro &l)
    {
        srand(time(NULL));
        string text;
        cout << "Ingrese el titulo del libro: " << endl;
        getline(cin, text);
        string fecha;
        cout << "Ingrese la fecha de publicacion: " << endl;
        getline(cin, fecha);
        int price = 10 + rand() % 256;
        cout << "El precio del libro es : " << price << endl;

        l.setTitulo(text);
        l.setFecha(fecha);
        l.setPrecio(price);
    }
};

int main()
{
    Autor a("Juan Perez", "Mexicana", "01/01/1980");
    Libro l1("El libro", "01/01/2022", 20.0, a);
    RegistrarLibro rl;
    rl.ingresarlibro(l1);
    cout << endl;
    Biblioteca b1;
    b1.agregarLibro(l1);
    cout << endl;
    b1.mostrar();
    a.mostrar();
    return 0;
}
