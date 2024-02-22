/* Define una clase Vector que represente un vector en el espacio tridimensional. Sobrecarga el operador + para que sume dos vectores y devuelva un nuevo vector que sea la suma de los dos vectores dados. */
#include <iostream>
#include <cmath>
using namespace std;
class Vector
{
private:
    int v_valor;

public:
    Vector(int valor) : v_valor(valor) {}
    friend Vector operator+(Vector &, Vector &);
    void Vector_Resultante()
    {
        cout << "El vector resultante es " << v_valor << endl;
    }
};
Vector operator+(Vector &v1, Vector &v2)
{
    return sqrt(pow(v1.v_valor, 2) + pow(v2.v_valor, 2));
}
int main()
{
    Vector v1(4);
    Vector v2(3);
    Vector vectorResultante = v1 + v2;
    vectorResultante.Vector_Resultante();
    return 0;
}