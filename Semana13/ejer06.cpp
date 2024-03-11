#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

class Contactable
{
public:
    virtual vector<string> obtenerInformacionContacto() const = 0;
    virtual void modificarInformacionContacto(const vector<string> &nuevaInfo) = 0;
};

class Persona : public Contactable
{
private:
    int identificador;
    string apellidos;
    string nombre;
    string direccion;
    vector<string> informacionContacto;

public:
    Persona(int id, string apellidos, string nombre, string direccion, const vector<string> &contacto)
        : identificador(id), apellidos(apellidos), nombre(nombre), direccion(direccion), informacionContacto(contacto) {}

    vector<string> obtenerInformacionContacto() const override
    {
        return informacionContacto;
    }

    void modificarInformacionContacto(const vector<string> &nuevaInfo) override
    {
        informacionContacto = nuevaInfo;
    }

    void mostrarInformacion() const
    {
        cout << "ID: " << identificador << endl;
        cout << "Nombre: " << nombre << " " << apellidos << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Contacto: ";
        for (const auto &contacto : informacionContacto)
        {
            cout << contacto << " ";
        }
        cout << endl;
    }
};

class Departamento
{
private:
    int codigo;
    string nombre;

public:
    Departamento(int codigo, string nombre) : codigo(codigo), nombre(nombre) {}

    int getCodigo() const
    {
        return codigo;
    }

    string getNombre() const
    {
        return nombre;
    }

    void mostrarInformacion() const
    {
        cout << "Codigo de Departamento: " << codigo << endl;
        cout << "Nombre del Departamento: " << nombre << endl;
    }
};

class Empleado
{
public:
    virtual void calcularSalario() = 0;
    virtual void mostrarInformacion() const = 0;
};

class EmpleadoBase : public Persona, public Empleado
{
private:
    int codigoEmpleado;
    float costoHora;
    Departamento *departamento;

public:
    EmpleadoBase(int id, string apellidos, string nombre, string direccion, const vector<string> &contacto,
                 int codigo, float costo, Departamento *dept)
        : Persona(id, apellidos, nombre, direccion, contacto), codigoEmpleado(codigo), costoHora(costo), departamento(dept) {}

    void calcularSalario() override
    {
        cout << "Calculando salario para empleado base..." << endl;
    }

    void mostrarInformacion() const override
    {
        cout << "Empleado Base:" << endl;
        Persona::mostrarInformacion();
        cout << "Codigo de Empleado: " << codigoEmpleado << endl;
        cout << "Costo por Hora: " << costoHora << endl;
        cout << "Departamento: ";
        if (departamento != nullptr)
        {
            departamento->mostrarInformacion();
        }
        else
        {
            cout << "No asignado" << endl;
        }
    }
};

class Gerente : public EmpleadoBase
{
private:
    int bono;

public:
    Gerente(int id, string apellidos, string nombre, string direccion, const vector<string> &contacto,
            int codigo, float costo, Departamento *dept, int bono)
        : EmpleadoBase(id, apellidos, nombre, direccion, contacto, codigo, costo, dept), bono(bono) {}

    void calcularSalario() override
    {
        cout << "Calculando salario para gerente..." << endl;
    }
};

class Ingeniero : public EmpleadoBase
{
private:
    int horasExtra;

public:
    Ingeniero(int id, string apellidos, string nombre, string direccion, const vector<string> &contacto,
              int codigo, float costo, Departamento *dept, int horas)
        : EmpleadoBase(id, apellidos, nombre, direccion, contacto, codigo, costo, dept), horasExtra(horas) {}

    void calcularSalario() override
    {
        cout << "Calculando salario para ingeniero..." << endl;
    }
};

class CalculadoraSalario
{
public:
    static void calcular(Empleado &empleado)
    {
        empleado.calcularSalario();
    }
};

class Utilidad
{
public:
    static int generarCodigo()
    {
        return rand() % 20 + 1;
    }
};

int main()
{
    Departamento departamentoIT(1, "Tecnologias de la Informacion");
    vector<string> contacto = {"correo@example.com", "1234567890"};
    Gerente gerente(1, "Doe", "John", "123 Calle Principal", contacto, Utilidad::generarCodigo(), 50.0, &departamentoIT, 1000);
    Ingeniero ingeniero(2, "Smith", "Jane", "456 Calle Elm", contacto, Utilidad::generarCodigo(), 40.0, &departamentoIT, 10);

    vector<string> nuevoContacto = {"nuevo_correo@example.com", "0987654321"};
    gerente.modificarInformacionContacto(nuevoContacto);

    gerente.mostrarInformacion();
    cout << endl;
    ingeniero.mostrarInformacion();

    return 0;
}
