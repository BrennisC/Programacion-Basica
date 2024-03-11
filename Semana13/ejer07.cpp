#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class TipoContacto
{
private:
    int id;
    string correo;
    string telefono;

public:
    TipoContacto(int i, string c, string t) : id(i), correo(c), telefono(t) {}
};

class Persona
{
private:
    string identificador;
    string apellidos;
    string nombres;
    string direccion;
    vector<TipoContacto> contactos;

public:
    Persona(string i, string a, string n, string d, vector<TipoContacto> tc) : identificador(i), apellidos(a), nombres(n), direccion(d), contactos(tc) {}

    void getTipoContacto() { contactos.push_back(TipoContacto(0, "", "")); }

    virtual void presentarse()
    {
        cout << "IDENTIFICADOR: " << identificador << endl;
        cout << "APELLIDOS: " << apellidos << endl;
        cout << "NOMBRES: " << nombres << endl;
        cout << "DIRECCION: " << direccion << endl;
    }
};

class Departmento
{
private:
    float codigo_dep;
    string nombre_dep;

public:
    Departmento(float cd, string nd) : codigo_dep(cd), nombre_dep(nd) {}
};

class Empleado : public Persona
{
private:
    int codigo;
    float costo_hh;
    Departmento departamentos;
    float salario;

public:
    Empleado(string i, string a, string n, string d, vector<TipoContacto> tc, int co, float chh, Departmento dp, float sa) : Persona(i, a, n, d, tc), codigo(co), costo_hh(chh), departamentos(dp), salario(sa) {}

    Departmento getDepartamento() { return departamentos; }

    void presentarse() override
    {
        Persona::presentarse();
        cout << "CODIGO: " << codigo << endl;
        cout << "COSTO: " << costo_hh << endl;
        cout << "SALARIO: " << salario << endl;
    }

    virtual void calcularSalario()
    {
        salario = rand() % 100 + 1;
        cout << salario * 100;
    }
};

class Ingeniero : public Empleado
{
private:
    int bono;

public:
    Ingeniero(string i, string a, string n, string d, vector<TipoContacto> tc, int co, float chh, Departmento dp, float sa, int b) : Empleado(i, a, n, d, tc, co, chh, dp, sa), bono(b) {}

    void presentarse() override
    {
        Empleado::presentarse();
        cout << "BONO: " << bono << endl;
    }
    void calcularSalario() override
    {
        bono = rand() % 100 - 1;
        Empleado::calcularSalario();
    }
};

class Gerente : public Empleado
{
public:
    int horas_extra;

public:
    Gerente(string i, string a, string n, string d, vector<TipoContacto> tc, int co, float chh, Departmento dp, float sa, int he) : Empleado(i, a, n, d, tc, co, chh, dp, sa), horas_extra(he) {}

    void presentarse() override
    {
        Empleado::presentarse();
        cout << "HORAS EXTRAS : " << horas_extra << endl;
    }

    void calcularSalario() override
    {
        horas_extra = rand() % 100 - 1;
        Empleado::calcularSalario();
        cout << horas_extra;
    }
};

int main()
{

    vector<TipoContacto> contactos;
    contactos.push_back(TipoContacto(1, "correo@ejemplo.com", "123456789"));
    Departmento dp(12, "FLORES");
    Gerente gr("2", "Brennis", "Castro", "san luis", contactos, 2, 23.2, dp, 89, 89);
    gr.presentarse();
    gr.calcularSalario();
    cout << endl;
    Departmento dp1(19, "SAN JUAN");
    Ingeniero in("7", "Benjaminn", "Cano", "los olivos", contactos, 2, 23.2, dp1, 20, 70);
    in.presentarse();
    in.calcularSalario();
}