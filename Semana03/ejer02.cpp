#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    printf("******El AREA DEL RECTANGULO******\n");

    double altura, base;

    printf("Ingrese la altura del rectangulo: ");
    scanf("%lf", &altura);

    printf("Ingrese la base del rectangulo: ");
    scanf("%lf", &base);

    double area = (base * altura);
    double diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    double perimetro = 2 * (base + altura);

    printf("El area del rectangulo es: %f\n", area);
    printf("\nLa diagonal es : %lf", diagonal);
    printf("\nEl perimetro es : %lf", perimetro);

    return 0;
}
