#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Carpeta
{
private:
    string name_carpeta;
    float quantity_element;
    string name_usuario;

public:
    Carpeta() = default;
    Carpeta(string n, float qe, string nu) : name_carpeta(n), quantity_element(qe), name_usuario(nu) {}
    string getName() { return name_carpeta; }
    float getQuantiy() { return quantity_element; }
    string getNameUser() { return name_usuario; }
};

class OperacionesCarpetas
{
public:
    virtual void addCarpeta(vector<Carpeta> &c) = 0;
    virtual void asignarCarpeta(vector<Carpeta> &c) = 0;
};

class ManegerCarpetas : public OperacionesCarpetas
{
public:
    ManegerCarpetas() = default;
    void addCarpeta(vector<Carpeta> &c) override
    {
        string name_car, name_user;
        float qua;

        cout << "Ingrese el nombre de carpeta: ";
        cin >> name_car;

        cout << "Ingrese la capacidad de la carpeta: ";
        cin >> qua;

        cout << "Ingrese el nombre de usuario que le va a pertenecer esta carpeta: ";
        cin >> name_user;
        c.push_back(Carpeta(name_car, qua, name_user));
    }

    void asignarCarpeta(vector<Carpeta> &c) override
    {
        string name_asignar;

        cout << "Ingrese el nombre de la persona para asignar una carpeta : ";
        cin >> name_asignar;

        for (size_t i = 0; i < c.size(); i++)
        {
            try
            {
                if (c[i].getNameUser != name_asignar)
                    throw "No se encontro al usuario";

                cout << "El usuario se encontro  correctamente" << endl;
            }
            catch (const exception &e)
            {
                cerr << "Error ! " << e.what() << endl;
            }
        }
    }
};
int main()
{
    vector<Carpeta> ca;

    ManegerCarpetas mc;

    mc.addCarpeta(ca);
    mc.asignarCarpeta(ca);

    return 0;
}