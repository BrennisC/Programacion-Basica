/* Expresiones lamdba nos ayuda a tener un codigo mas robusto y mantenible a lo largo del uso de nuestro codigo es mas hermoso */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numeros = {5, 4, 3, 6, 7};

    int max_num = *max_element(numeros.begin(), numeros.end(), [](int a, int b)
                               { return a > b; });

    cout << "El maximo numero en el vector es : " << max_num << endl;
}