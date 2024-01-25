#include <string>
#include <iostream>
using namespace std;
class Perro
{
private:
    string raza;
    int dulsura;

public:
    Perro(string raza, int dulsura)
    {
        this->raza = raza;
        this->dulsura = dulsura;
    }
    void mostrar();
    string getRaza()
    {
        return raza;
    }
    int getDulsura()
    {
        return dulsura;
    }
    void setRaza()
    {
        cout << "Mi raza es : " << raza << endl;
    }
    void setDulsura()
    {
        cout << "Mi dulsura es: " << dulsura << endl;
    }
};
