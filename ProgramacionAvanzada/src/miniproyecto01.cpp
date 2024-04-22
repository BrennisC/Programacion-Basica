#include <iostream>
#include <vector>

using namespace std;

class UsersDatas
{
private:
    string name_user;
    int age_use;

public:
    UsersDatas() = default;
    UsersDatas(string user, int age) : name_user(user), age_use(age) {}
    string getName() { return name_user; }
    int getAge() { return age_use; }
};

class Oficina
{
public:
    virtual void agregarTarea(vector<UsersDatas> &us) = 0;
};

class GestorTareas
{
public:
    virtual void addUserData(vector<UsersDatas> &us) = 0;
    virtual void deleteUser(vector<UsersDatas> &us) = 0;
};

class OperacionAdmi : public GestorTareas
{
public:
    OperacionAdmi() = default;
    void addUserData(vector<UsersDatas> &us) override
    {
        string name;
        int age;
        int cantidad_user;
        cout << "Ingrese el numero de usuarios : ";
        cin >> cantidad_user;
        for (int i = 0; i < cantidad_user; i++)
        {
            cout << "Ingrese nombre y edad del usuario" << endl;
            cin >> name;
            cin >> age;

            us.push_back(UsersDatas(name, age));
        }
    }

    void deleteUser(vector<UsersDatas> &us) override
    {
        string name_search;
        cout << "Ingrese el nombre del usuario a eliminar: ";
        cin >> name_search;

        for (size_t i = 0; i < us.size(); ++i)
        {
            if (us[i].getName() == name_search)
            {
                us.erase(us.begin() + i);
                cout << "Usuario eliminado exitosamente." << endl;
                return;
            }
            else
            {
                cout << "No se encontro el usuario. " << endl;
            }
        }
    }
};

class TareasUsuario : public Oficina
{
public:
    TareasUsuario() = default;
    void agregarTarea(vector<UsersDatas> &us) override
    {
        string name_ec;
        cout << "Ingrese el nombre para encarga una tarea: ";
        cin >> name_ec;

        for (size_t i = 0; i < us.size(); i++)
        {
            try
            {
                if (us[i].getName() == name_ec)
                {
                    string actividad;
                    cout << "Ingrese la funcion de  la actividad: " << name_ec << endl;
                    cin >> actividad;
                    break;
                }
                else
                {
                    cout << "No se encontro el nombre del usuario. " << endl;
                }
            }
            catch (const exception &e)
            {
                cerr << "Error " << e.what() << endl;
            }
        }
    }
};

;
int main()
{
    vector<UsersDatas> us;
    OperacionAdmi ap;
    TareasUsuario tu;

    ap.addUserData(us);

    tu.agregarTarea(us);

    ap.deleteUser(us);

    return 0;
}
