#include <iostream>
using namespace std;
class Nombre
{
protected:
    string name;

public:
    Nombre(string n) : name(n) {}
    virtual void mostrar()
    {
        cout << "Mi nombre " << name;
    }
};
class Apellido : public Nombre
{
private:
    string spell;

public:
    Apellido(string name, string sp) : Nombre(name), spell(sp) {}
    void mostrar() override
    {
        cout << "Mi nombre es " << name << " y mi apellido es " << spell << endl;
    }
};
int main()
{
    Nombre *n1;
    Apellido *ap2;
    n1 = ap2 = new Apellido("Maricito", "Garcia");
    n1 = static_cast<Nombre *>(ap2)->mostrar();
    ap2->mostrar();
    n1->mostrar();
    return 0;
}