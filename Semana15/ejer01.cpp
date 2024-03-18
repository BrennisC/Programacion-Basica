#include <iostream>
#include <cmath>
using namespace std;
float noRaiz(float a)

{
    if (a < 0)
        throw "No hay raiz negativa. ";
    return sqrt(a);
}
int main()
{
    float num;
    cout << "Ingrese su numero: ";
    cin >> num;
    try
    {
        float total = noRaiz(num);
        cout << "La raiz de " << num << " es " << total << endl;
    }
    catch (const char *e)
    {
        cerr << "Error " << e;
    }

    return 0;
}