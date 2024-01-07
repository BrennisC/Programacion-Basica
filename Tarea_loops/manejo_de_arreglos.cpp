/* Manejo de Arreglos: Escribe un programa que solicite al usuario ingresar 10 números enteros. Luego, encuentra el promedio de los números ingresados y muestra cuántos números son mayores que el promedio. */
#include <iostream>
using namespace std;
int main()
{
    int n[10], contador = 0;
    do
    {
        cout << "Ingrese su numero " << contador + 1 << endl;
        cin >> n[contador];
        contador++;
    } while (contador < 10);

    int suma = 0;
    contador = 0;
    do
    {
        suma += n[contador];
        contador++;
    } while (contador < 10);

    float promedio = static_cast<float>(suma) / 10;

    int cantidad_numMax = 0;
    contador = 0;
    while (contador < 10)
    {
        if (n[contador] > promedio)
        {
            cantidad_numMax++;
        }
        contador++;
    }
    cout << "El promedio de las numeros es : \n" << promedio;
    cout << "\nEncontramos " << cantidad_numMax << " mayores que el promedio " << endl;

    return 0;
}