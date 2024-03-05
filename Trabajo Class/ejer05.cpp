#include <iostream>
using namespace std;
class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona() : nombre(""), edad(0) {}
    Persona(string n, int e) : nombre(n), edad(e) {}
    virtual void mostrar()
    {
        cout << "Nombre : " << nombre;
        cout << " EDAD: " << edad;
    }
};
class Profesion : public Persona
{
private:
    string titulo;

public:
    Profesion() : titulo() {}
    Profesion(string n, int a, string t) : Persona(n, a), titulo(t) {}
    string getTitulo() { return titulo; }
    void mostrar() override
    {
        Persona ::mostrar();
        cout << " Ocupacion : " << titulo;
    }
    void referancia(Profesion &);
};
class Atleta : public Persona
{
private:
    string habilidad;

public:
    Atleta(string n, int e, string h) : Persona(n, e), habilidad(h) {}
    string getHabilidad() { return habilidad; }
    void mostrar() override
    {
        Persona ::mostrar();
        cout << " Ocupacion : " << habilidad;
    }
    void valor(Atleta);
};
void Profesion ::referancia(Profesion &pl)
{
    string cambio;
    cout << "Ingrese su nueva profesion: ";
    cin >> cambio;
    pl.titulo = cambio;
}
void Atleta ::valor(Atleta al)

{
    string cambio;
    cout << "Ingrese su  nueva habilidad: ";
    cin >> cambio;
    al.habilidad = cambio;
}
int main()
{
    Profesion pl("Brennis", 25, "Desarrollador");
    Atleta atl("Juan", 30, "Atletico");
    cout << endl;
    pl.mostrar();
    cout << endl;
    atl.mostrar();
    cout << endl;
    pl.referancia(pl);
    cout << endl;
    atl.valor(atl);
    return 0;
}