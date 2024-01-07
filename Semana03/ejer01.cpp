#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    printf("******El AREA DEL CUADRADO******\n");

    double lado;

    printf("Ingrese el lado del cuadrado: ");
    scanf("%lf", &lado);

    double area = (lado * lado);
    double diagonal = sqrt(pow(lado, 2) + pow(lado, 2));
    double perimetro = 2 * (lado + lado);

    printf("El area del cuadrado es: %f\n", area);
    printf("\nLa diagonal es : %lf", diagonal);
    printf("\nEl perimetro es : %lf", perimetro);

    return 0;
}
