#include <iostream>
using namespace std;

class Figura
{
public:
    Figura() {}
    virtual void mostrar() { cout << "Soy la clase padre. "; }
};

class Rectangulo : public Figura
{
public:
    void mostrar() override { cout << "Soy la clase hijo. "; }
};

int main()
{
    // Crear un objeto Rectangulo y convertir su puntero a Figura usando dynamic_cast
    Rectangulo rectangulo;
    Figura *ptr = dynamic_cast<Figura *>(&rectangulo);
    if (ptr != nullptr)
    {
        ptr->mostrar();
    }
    else
    {
        cout << "La conversión dynamic_cast ha fallado." << endl;
    }

    cout << endl;

    // Crear un objeto Rectangulo y acceder a su método mostrar
    Rectangulo rectangulo2;
    rectangulo2.mostrar();

    cout << endl;

    // Convertir un puntero de Rectangulo a Figura usando static_cast
    Figura *ptr1 = new Figura();
    Rectangulo *ptr2 = static_cast<Rectangulo *>(ptr1);
    ptr2->mostrar();

    delete ptr1; // Liberar la memoria asignada

    return 0;
}
