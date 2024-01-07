#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    printf("******El AREA DEL TRIANGULO******\n");

    double a, b, c, altura;

    printf("Ingrese la lado a: ");
    scanf("%lf", &a);

    printf("Ingrese el lado b: ");
    scanf("%lf", &b);
    printf("Ingrese la lado c : ");
    scanf("%lf", &c);
    printf("Ingrese su altura : ");
    scanf("%lf", &altura);

    double area = (b * altura) / 2;
    double perimetro = a + b + c;

    printf("El area del triangulo es: %f\n", area);
    printf("\nEl perimetro es : %lf", perimetro);

    return 0;

}