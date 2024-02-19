#include <iostream>
using namespace std;
class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string _nombre) : nombre(_nombre), edad(0) {}
    void Presentarse()
    {
        cout << "Mi nombre " << nombre << endl;
    }
    void age()
    {
        cout << "Mi edad es " << edad << endl;
    }
    friend void edad(Persona &);
};
void edad(Persona &p1)
{
    p1.edad = 12;
}
int main()
{
    Persona p1("Brennis");
    p1.age();
    p1.Presentarse();
    edad(p1);
    p1.age();
    return 0;
}