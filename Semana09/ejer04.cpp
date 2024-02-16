#include <iostream>
using namespace std;
class Valor
{
private:
    int var1;
    int var2;

public:
    Valor(int var1, int var2)
    {
        this->var1 = var1;
        this->var2 = var2;
    }
    void setVar2(int _var2)
    {
        cout << _var2 << endl;
    }
    int getVar1()
    {
        return var1;
    }
    void informacion()
    {
        cout << "EL valor1 de " << var1 << " y el valor2 " << var2 << endl;
    }
};
int main()
{
    Valor p1(1, 2);
    p1.informacion();
    p1.setVar2(3);
    cout << p1.getVar1();
    return 0;
}