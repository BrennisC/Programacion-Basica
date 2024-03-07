#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <string>
using namespace std;
class CaballerosZodiaco
{
private:
    string nombre;
    int edad;
    int poder;

public:
    CaballerosZodiaco() : nombre(), edad(), poder() {}
    CaballerosZodiaco(string n, int e, int p) : nombre(n), edad(e), poder(p) {}
    string getNombre() { return nombre; }
    void setNombre(string n) { nombre = n; }
    int getEdad() { return edad; }
    void setEdad(int e) { edad = e; }
    int getPoder() { return poder; }
    void setPoder(int p) { poder = p; }
    virtual void imprimirInformacion()
    {
        cout << "Caballero Zodiaco " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Poder: " << poder << endl;
    }
};
class CaballerosPlanta : public CaballerosZodiaco
{
private:
    string clase;

public:
    CaballerosPlanta() : clase() {}
    CaballerosPlanta(string n, int e, int p, string cl) : CaballerosZodiaco(n, e, p), clase(cl) {}
    string getClase() { return clase; }
    void setClase(string cl) { clase = cl; }
    void imprimirInformacion() override
    {
        CaballerosZodiaco ::imprimirInformacion();
        cout << "CLASE : " << clase;
    }
};
class AumentarPoder
{
public:
    int newpower;
    void leerAumento(CaballerosPlanta cp)
    {
        srand(time(NULL));
        char resp;
        cout << "Ingrese quieres un aumento de poder automatico: s/n";
        cin >> resp;
        if (resp == 's' || resp == 'S')
        {
            newpower = rand() % 200 + 1;
        }
        else
        {
            cout << "Ingrese el poder que deseas: ";
            cin >> newpower;
        }
        cp.setPoder(newpower);
    }
};
int main()
{
    CaballerosPlanta cpa("Cella", 19, 5, "Tierra");
    cpa.imprimirInformacion();

    char opc;
    cout << "Desaes cambiar el poder: s/n";
    cin >> opc;

    if (opc == 's' || opc == 'S')
    {
        AumentarPoder au;
        au.leerAumento(cpa);
    }
    else
    {
        cout << "No se haran  cambios en los datos.";
    }
    cpa.imprimirInformacion();
    return 0;
}