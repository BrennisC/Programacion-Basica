#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    printf("******El AREA DEL TRIANGULO INSCRITO******\n");

    double a, b, c, radio;

    printf("Ingrese la lado a: ");
    scanf("%lf", &a);

    printf("Ingrese el lado b: ");
    scanf("%lf", &b);
    printf("Ingrese la lado c : ");
    scanf("%lf", &c);
    printf("Ingrese su radio : ");
    scanf("%lf", &radio);

    double area = (a*b*c)/ (4 * radio);
    double perimetro = a + b + c;

    printf("El area del triangulo inscrito es: %f\n", area);
    return 0;
}
