// Algoritmos de STL esto los ayuda lo dicho anteriormente y tambien es un de los algoritmos que son una manera de simplificar el codigo y hacerlo mas robusto

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numero = {1, 2, 4, 5, 6};

    vector<int> cuadrados;

    transform(numero.begin(), numero.end(), back_inserter(cuadrados), [](int num_cuadras) 3
              { return num_cuadras * num_cuadras; });

    for (int num : cuadrados)
    {
        cout << num << endl;
    }

    return 0;
}