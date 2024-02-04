#include <iostream>
using namespace std;
class Personaje
{
    friend void modificar(Personaje &, int, int);

public:
    Personaje(int a, int b)
    {
        ataque = a;
        defensa = b;
    }
    void mostrarDatos()
    {
        cout << "Ataque " << ataque << endl;
        cout << "Defensa " << defensa << endl;
    }

private:
    int ataque;
    int defensa;
};
void modificar(Personaje &p, int at, int def)
{
    p.ataque = at;
    p.defensa = def;
}
int main()
{
    Personaje principal(100, 90);
    principal.mostrarDatos();
    modificar(principal, 20, 50);
    principal.mostrarDatos();
    return 0;
}