/* Define una clase Libro que represente un libro con un título y un autor. Sobrecarga el operador << para que puedas imprimir un objeto Libro utilizando cout. Por ejemplo, cout << miLibro; debería imprimir el título y el autor del libro.*/
#include <iostream>
using namespace std;
class Libro
{
private:
    string autor;
    int cantidad_paginas;

public:
    Libro(string _autor, int _cantidad_paginas) : autor(_autor), cantidad_paginas(_cantidad_paginas) {}
    friend ostream &operator<<(ostream &os, Libro &l1)
    {
        os << "El autor es " << l1.autor << " paginas " << l1.cantidad_paginas << endl;
        return os;
    }
    void mostrarInformacion();
};
void Libro ::mostrarInformacion()
{
    cout << "El nombre del autor es " << autor << " y el libro contiene " << cantidad_paginas << endl;
}
int main()
{
    Libro l1("Homero", 1458);
    l1.mostrarInformacion();

    cout << "Informacion del libro: " << l1 << endl;
    return 0;
}