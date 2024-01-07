#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    printf("******El AREA DEL TRIANGULO******\n");
    double a, b, c;
    printf("Ingrese el lado a: ");
    scanf("%lf", &a);
    printf("Ingrese el lado b: ");
    scanf("%lf", &b);
    printf("Ingrese el lado c: ");
    scanf("%lf", &c);

    double sp = (a + b + c) / 2;
    double area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));

    printf("El semi perimetro es: %lf", sp);
    printf("\nEl area triangulo es : %lf", area);

    return 0;
}
