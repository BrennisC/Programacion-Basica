#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void mostrar(vector<double> &radios)
{
    double area = 0.0;
    for (size_t i = 0; i < radios.size(); i++)
    {
        area += pow(radios[i], 2) * M_PI;
        cout << "El area de " << i + 1 << " circulo es : " << area << endl;
    }
}
vector<double> completar()
{
    int numCirculos;
    cout << "Ingrese la cantidad de radios: ";
    cin >> numCirculos;
    vector<double> radios(numCirculos);
    for (int i = 0; i < numCirculos; i++)
    {
        cout << "Ingrese el radio del circulo: ";
        cin >> radios[i];
    }
    return radios;
}
int main()
{
    vector<double> radios = completar();
    mostrar(radios);
    return 0;
}
