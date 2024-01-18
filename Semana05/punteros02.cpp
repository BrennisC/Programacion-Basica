#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numeros;

    numeros.push_back(20);
    numeros.push_back(30);

    cout << "Mostra los elementos";

    for (int i = 0; i < numeros.size(); i++)
    {
        cout << " Elemento " << i << " es: " << numeros[i] << endl;
    }

    return 0;
}