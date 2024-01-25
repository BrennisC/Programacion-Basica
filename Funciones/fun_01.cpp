/*
 * Crea una función que calcule el valor del parámetro perdido
 * correspondiente a la ley de Ohm.
 * - Enviaremos a la función 2 de los 3 parámetros (V, R, I), y retornará
 *   el valor del tercero (redondeado a 2 decimales).
 * - Si los parámetros son incorrectos o insuficientes, la función retornará
 *   la cadena de texto "Invalid values".
 */

#include <iostream>
using namespace std;
float Ohm(float *i, float *r)
{
    int respuesta;
    respuesta = *i * *r;
    return respuesta;
}
float llenar()
{
    int t;
    cout << "Ingrese el valor: ";
    cin >> t;
    return t;
}
void motrar(float voltaje)
{
    cout << "El valor es: " << voltaje;
}
int main()
{
    float v, i, r;
    i = llenar();
    r = llenar();
    v = Ohm(&i, &r);
    motrar(v);
    return 0;
}