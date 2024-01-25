#include <iostream>
using namespace std;
class Persona
{
protected:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad)
    {
        this->nombre = nombre;
        this->edad = edad;
    }
    string getNombre(string nombre)
    {
        return nombre;
    }
    int getEdad(int edad)
    {
        return edad;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    void setEdad(int _edad)
    {
        edad = _edad;
    }
    void Presentarse()
    {
        cout << "Mi nombre es: " << nombre << " y tengo " << edad << " anios." << endl;
    }
};
class Profesor : public Persona{
    private:
        int clases;
        string materia;
    public:
        Profesor(string nombre, int edad, int clases, string materia) : Persona(nombre,edad)
        {
            this->clases = clases;
            this->materia = materia;
        }
        int getClases()
        {
            return clases ;
        } 
        string getMateria(){
            return materia;
        }
        
};
int main()
{
    Persona p1("Brennis", 20);
    Persona p2("Dayiro", 10);
    Persona p3("Milvia", 38);
    Persona p4("Miler", 41);

    Persona persona[] = {p1, p2, p3, p4};
    for (int i = 0; i < 3; i++)
    {
        persona[i].Presentarse();
    }

    return 0;
}