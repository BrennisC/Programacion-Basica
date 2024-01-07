#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int maximo = 10, minimo = 1, sum = 0;
    int v[20];
    for (size_t i = 0; i < 20; i++)
    {
        v[i] = rand() % (maximo - minimo + 1) + minimo;
    }
    for (size_t i = 0; i < 20; i++)
    {
        if (v[i] % 2 == 0)
            continue;
        sum += v[i];
        cout << v[i] << "\t";
    }
    cout << "\nLa suma es: " << sum << endl;
    return 0;
}