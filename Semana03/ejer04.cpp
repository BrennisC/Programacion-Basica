#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    printf("******El AREA DEL CUADRADO******\n");

    double ladoB, ladob, altura;

    printf("Ingrese la lado mayor: ");
    scanf("%lf", &ladoB);

    printf("Ingrese el lado menor: ");
    scanf("%lf", &ladob);
    printf("Ingrese la altura : ");
    scanf("%lf", &altura);

    double area = ((ladoB + ladob) * altura) / 2;

    printf("El area del trapecio es: %f\n", area);

    return 0;
}
