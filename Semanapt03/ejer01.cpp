#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double num1 = 6.02e23;
    double num2 = 800000000;
    cout << "Numero1 es : " << scientific << num1 << endl;
    cout << "Numero1 es : " << fixed << num1 << endl;
    cout << "Numero2 es : " << scientific << num2 << endl;
    return 0;
}