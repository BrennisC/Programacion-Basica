/*Mayor Elemento en un Vector: Crea un programa que encuentre el mayor elemento en un vector de números enteros. Utiliza un bucle for y break para salir del bucle tan pronto como encuentres el mayor elemento. */
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> n = {10, 6 , 2 ,1 ,18, 14};
    int mayorVector = n[0];
    for (int i = 1; i < n.size(); ++i)
    {
        if (n[i] >= mayorVector)
        {
            mayorVector = n[i];
            break;
        }
    }
    cout << "El numero mayor es: " << mayorVector;

    return 0;
}