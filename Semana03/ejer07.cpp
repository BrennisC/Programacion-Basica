#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    printf("******El AREA DEL CIRCUNSCRITO******\n");

    double a, b, c, radio;

    printf("Ingrese la lado a: ");
    scanf("%lf", &a);

    printf("Ingrese el lado b: ");
    scanf("%lf", &b);
    printf("Ingrese la lado c : ");
    scanf("%lf", &c);
    printf("Ingrese su radio : ");
    scanf("%lf", &radio);

    double semiperimetro = (a + b + c) / 2;
    double area = (semiperimetro * radio);

    printf("El semi perimetro es : %lf", semiperimetro);
    printf("\nEl area del triangulo circunscrito es: %f\n", area);
    return 0;
}
