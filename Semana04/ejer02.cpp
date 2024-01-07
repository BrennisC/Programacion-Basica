#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Ingrese su numero primer: ";
    cin >> num1;
    cout << "Su segundo numero: ";
    cin >> num2;
    cout << "Su tercer numero: ";
    cin >> num3;

    int max = num1;

    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    cout << "\nEl numero maximo es " << max;
}