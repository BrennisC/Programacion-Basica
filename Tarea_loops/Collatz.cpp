/* Sucesión de Collatz: Escribe un programa que tome un número entero positivo n como entrada y genere la secuencia de Collatz para ese número. La secuencia de Collatz se obtiene siguiendo estas reglas:
a.	Si n es par, divídelo por 2.
b.	Si n es impar, multiplícalo por 3 y suma 1.
c.	Repite el proceso hasta llegar al número 1.
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Ingrese un numero positivo:  ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Por favor ingrese un numero positivo :  ";
        cin >> n;
    }
    cout << "La secuencia de  " << n << " es: " << endl;
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
    }
    cout << n << endl;
    return 0;
}