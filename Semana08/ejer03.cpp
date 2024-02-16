#include <iostream>
#include <vector>
using namespace std;
void intercambiar(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void realizarCambio(int array[], int longitud)
{
    for (int i = 0; i < longitud - 1; i++)
    {
        for (int j = i; j < longitud - 1; j++)
        {
            if (array[i] < array[j])
            {
                intercambiar(i, j);
            }
            else
            {
                intercambiar(j, i);
            }
        }
    }
}
void mostrarOrdenado(int array[], int longitud)
{
    for (int i = 0; i < longitud; i++)
    {
        cout << array[i] << "\t";
    }
}
int main()
{
    int array[] = {1, 4, 2, 8, 9};
    int longitud = 5;
    realizarCambio(array, 5);
    mostrarOrdenado(array, longitud);
    return 0;
}