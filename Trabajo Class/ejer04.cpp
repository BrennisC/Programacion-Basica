/* Imagina que estás creando un sistema para una biblioteca. Diseña una jerarquía de clases que represente diferentes tipos de recursos bibliográficos, como libros, revistas y periódicos. Utiliza la herencia para compartir propiedades comunes y añade propiedades específicas para cada tipo de recurso. Crea instancias de estas clases y demuestra cómo la herencia simplifica la manipulación de estos recursos en el sistema de la biblioteca. */
#include <iostream>
using namespace std;
class Biblioteca
{
private:
    int cantidad;
    string nombre;

public:
    Biblioteca(int c, string n) : cantidad(c), nombre(n) {}
    int getcantidad() { return cantidad; }
    string getNombre() { return nombre; }
    void mostrar()
    {
        cout << "Nombre: " << nombre << "\t";
        cout << "Cantidad: " << cantidad;
    }
};
class Libro : public Biblioteca
{
};
int main()
{
    return 0;
}