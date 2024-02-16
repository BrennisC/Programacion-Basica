#include <iostream>
using namespace std;
class Soldado
{
private:
    string name;
    int nivel;

public:
    Soldado(string _name) : name(_name), nivel(100) {}
    void setDisparar()
    {
        if (this->nivel > 0)
        {
            nivel -= 50;
            cout << "\nNivel de vida:\t " << this->nivel << endl;
        }
        else
        {
            cout << "Soldo caido! " << endl;
        }
    }
    void show();
};
void Soldado ::show()
{
    cout << "Mi nombre es  " << name << endl;
    cout << "vida " << nivel << endl;
}