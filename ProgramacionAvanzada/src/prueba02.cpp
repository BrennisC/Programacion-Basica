#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<float> numeros = {1.23, 234.56, 656.7};
    float num_max = *max_element(numeros.begin(), numeros.end(), [](int a, int b)
                                 { return a < b; });

    cout << "El numero mayor es " << num_max << " \n";
    return 0;
}