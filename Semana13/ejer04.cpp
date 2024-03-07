#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
using namespace std;
class Avatar
{
private:
    string nombre;
    vector<string> elementos;

public:
    Avatar() : nombre(), elementos() {}
    Avatar(string n, vector<string> &e) : nombre(n), elementos(e) {}
    void setNombre(string &n) { nombre = n; }
    void setElementos(vector<string> &e) { elementos = e; }
    string getNombre() { return nombre; }
    vector<string> getElementos() { return elementos; }
    virtual void imprimirInformacion()
    {
        cout << "Avatar: " << nombre << endl;
        for (auto i : elementos)
        {
            cout << "Los elementos son: \n";
            cout << i << " ";
        }
    }
    void asignarElemento();
};
class Agua : public Avatar
{
private:
    string habilidad;
    int fuerza;

public:
    Agua() : habilidad(), fuerza() {}
    Agua(string n, vector<string> &e, string h, int f) : Avatar(n, e), habilidad(h), fuerza(f) {}
    string getHabilidad() { return habilidad; }
    void setHabilidad(string h) { habilidad = h; }
    void setFuerza(int f) { fuerza = f; }
    void imprimirInformacion() override
    {
        Avatar ::imprimirInformacion();
        cout << "Mi habilidad es : " << habilidad << endl;
        cout << "MI fuerza es de : " << fuerza << endl;
    }
};
class Fuego : public Avatar
{
private:
    bool arma_de_fuego;

public:
    Fuego() : arma_de_fuego() {}
    Fuego(string n, vector<string> &e, bool af) : Avatar(n, e), arma_de_fuego(af) {}
    bool isArma_de_Fuego() { return arma_de_fuego; }
    void isArmaFuego(bool b) { arma_de_fuego = b; }
    void imprimirInformacion() override
    {
        Avatar ::imprimirInformacion();
        cout << "Tengo fuego " << (arma_de_fuego) << endl;
    }
};
class CalcularPoder
{
public:
    static void calcularPoder(Agua &a)
    {
        srand(time(NULL));
        int poderTotal = rand() % 100 + 1;
        cout << "El nuevo poder es : " << poderTotal << endl;
        a.setFuerza(poderTotal);
    }
};
class ExpulsarFuego
{
public:
    static void expulsarFuego(Fuego &f)
    {
        srand(time(NULL));
        int numero, adivinar_numero;
        cout << "Ingrese un numero : ";
        cin >> adivinar_numero;
        numero = rand() % 100 + 1;
        if (adivinar_numero == numero)
        {
            cout << "Usted puede  expulsar el fuego" << endl;
            f.isArmaFuego(true);
        }
        else
        {
            cout << "No pudo expulsar el fuego" << endl;
            f.isArmaFuego(false);
        }
    }
};
class DesignarHabilidad
{
public:
    static void designarHabillidad(Agua &ag)
    {
        string habilidad;
        cout << "Ingrese su habilidad: ";
        cin >> habilidad;
        ag.setHabilidad(habilidad);
    }
};
class CompletarInformacion
{
public:
    static void completarinformacion(Agua &ag, Fuego &fg)
    {
        string nombre1;
        cout << "Ingrese su nombre del  personaje de agua: ";
        cin >> nombre1;
        ag.setNombre(nombre1);
        string nombre2;
        cout << "Ingrese su nombre del personaje de fuego: ";
        cin >> nombre2;
        fg.setNombre(nombre2);
    }
};
void Avatar::asignarElemento()
{
    int cantidad;
    cout << "Ingrese la cantidad de elementos y subelementos: \n";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        string nombre_asignar;
        cout << "Ingrese el nombre de los elementos: \n";
        cin >> nombre_asignar;
        elementos.push_back(nombre_asignar);
    }
}
int main()
{
    Avatar a;
    Agua ag;
    Fuego f;
    CompletarInformacion ci;
    ci.completarinformacion(ag, f);
    return 0;
}