#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    printf("Ingrese su lado del cuadrado ");
    scanf("%d", &n);
    int area = n * n;
    int prim = area * 4;
    printf("El area de cuadrado es: %d", area);
    printf("\n  EL perimetro es: %d", prim);

    return 0;
}