#include <iostream>
#include <iterator>
#include <vector>
#include <cstdlib>
#define N 5
using namespace std;

void llenar(int v[])
{
    int M = 10, m = 1;
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        v[i] = m + (rand() % (M - m + 1));
    }
}
void mostrar(const int *inicio, const int *fin)
{
    for (const auto &elemento : vector<int>(inicio, fin))
        cout << elemento << "\t";
}
void ordenarBurbuja(int v[])
{
    bool band = true;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            if (v[i] < v[j])
            {
                band;
                intercambiar(v[i], v[j]);
            }
            else if (v[i] > v[j])
            {
                band;
                intercambiar(v[j], v[i]);
            }
        }
    }
}
void intercambiar(int &a, int &b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int vector[N];
    llenar(vector);
    mostrar();
    return 0;
}