#include <iostream>
using namespace std;
class Pet
{
private:
    int var;

public:
    Pet(int a) : var(a) {}
    void mostrar()
    {
        cout << var << endl;
    }
    void setVar(int a)
    {
        var = a;
    }
};
void modificar(Pet &x)
{
    x.setVar(10);
}
int main()
{
    Pet p(5);
    p.mostrar();
    p.setVar(7);
    modificar(p);
    p.mostrar();
    return 0;
}