#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    printf("******El AREA DEL ROMBO******\n");

    double D, d;

    printf("Ingrese el lado menor del rombo: ");
    scanf("%lf", &D);
    printf("Ingrese el lado mayor del rombo ");
    scanf("%lf", &d);

    double area = (D * d) / 2;
    double lado = sqrt(pow(D, 2) / 4 + pow(d, 2) / 4);
    double perimetro = 4 * (lado);

    printf("El area del rombo es: %f\n", area);
    printf("\nLa diagonal es : %lf", lado);
    printf("\nEl perimetro es : %lf", perimetro);

    return 0;
}
