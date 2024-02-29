#include <iostream>
using namespace std;

class Valor
{
private:
    int var1;
    int var2;

public:
    Valor(int v1, int v2) : var1(v1), var2(v2) {}
    int getVar1() { return var1; }
    int getVar2() { return var2; }

    // Overloading the + operator
    friend Valor operator+(const Valor &a, const Valor &b)
    {
        int sumVar1 = a.var2 + b.var1;
        int sumVar2 = a.var1 + b.var2;
        return Valor(sumVar1, sumVar2);
    }
};

int main()
{
    Valor x(5, 7);
    Valor y(3, 9);

    Valor suma = x + y; // Using the overloaded + operator
    cout << "La suma de estos es: " << suma.getVar1() << ", " << suma.getVar2() << endl;

    return 0;
}
