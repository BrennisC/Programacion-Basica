#include <iostream>
#include <vector>
using namespace std;
class Hogar
{
private:
    string direccion;
    int cantidad_pisos;

public:
    Hogar(string d, int cp) : direccion(d), cantidad_pisos(cp) {}
    void registrar()
    {
        cout << "\nMi direccion : " << direccion << endl;
        cout << "Cantidad de pisos : " << cantidad_pisos << endl;
    }
};
class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string n, int e) : nombre(n), edad(e) {}
    virtual void presentarse()
    {
        cout << "Nombre : " << nombre << endl;
        cout << "Edad : " << edad << endl;
    }
};
class Alumno : public Persona
{
private:
    Hogar hogar;
    int nota;

public:
    Alumno(string n, int e, Hogar h, int nt) : Persona(n, e), hogar(h), nota(nt) {}
    Hogar getHogar() { return hogar; }
    void presentarse() override
    {
        Persona ::presentarse();
        cout << "Nota : " << nota;
        hogar.registrar();
    }
    void verNota(float a) { cout << "Mi notal final es : " << a / 4; }
};

class Profesor : public Persona
{
private:
    string profession;
    vector<float> notas;

public:
    Profesor(string n, int e, string p) : Persona(n, e), profession(p) {}
    void presentarse() override
    {
        Persona ::presentarse();
        cout << "Soy un/a " << profession << endl;
    }
    vector<float> getNotas() const { return notas; }
    void agregar(float n) { notas.push_back(n); }
};
class ClasifiacionNotas
{
public:
    static void registroNotas(Profesor &pf)
    {
        int cantidad;
        cout << "Ingrese  cantidad de notas alumno: ";
        cin >> cantidad;
        if (cantidad == 4)
        {
            cout << "Estas en la mitad de semestre pudes ingresar: \n";
            for (int i = 0; i < cantidad; i++)
            {
                float nota;
                cout << "Ingrese la primera nota: ";
                cin >> nota;
                pf.agregar(nota);
            }
        }
        else
        {
            cout << "Son  solo 4 las que se pueden registrar" << endl;
        }
    }
};
int main()
{
    Hogar h("San luis", 3);
    Alumno al("Brennis", 23, h, 20);
    al.presentarse();
    ClasifiacionNotas cf;
    Profesor pf("Juan", 56, "Matematicas");
    pf.presentarse();
    cf.registroNotas(pf);
    return 0;
}