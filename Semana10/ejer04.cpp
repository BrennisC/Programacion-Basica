/* Diseña un pequeño juego de rol (RPG) en el que los jugadores puedan crear personajes, equiparlos con armas y armaduras, y enfrentarse a enemigos en batallas por turnos. Cada personaje y enemigo puede tener diferentes atributos y habilidades. */
#include <iostream>
using namespace std;
class RPG
{
private:
    string nombre;
    int poder;
    string habilidad;

public:
    RPG(string _nombre, int _poder, string _habilidad) : nombre(_nombre), poder(_poder), habilidad(_habilidad) {}
    virtual void presentarse()
    {
        cout << "Mi nombre es " << nombre << " , mi poder es de " << poder << " y mi habilidad es " << habilidad << endl;
    }
    virtual void habilidades() {}
    virtual void armaduras() {}
};
class Guerrero : public RPG
{
private:
    int poder_especial;

public:
    Guerrero(string nombre, int poder, string habilidad, int _poder_especial) : RPG(nombre, poder, habilidad), poder_especial(_poder_especial) {}
    void presentarse() override
    {
        RPG ::presentarse();
        cout << "Y mi poder especial tiene " << poder_especial << endl;
    }
};
void batalla(RPG &, Guerrero &);
int main()
{
    Guerrero gu1("Brennis", 1559, "Alzar fuego", 1889);
    gu1.presentarse();
    RPG rp1("Benjaminn", 1778, "Salto alto");
    return 0;
}
void batalla(RPG &rp1, Guerrero &gu1)
{
}