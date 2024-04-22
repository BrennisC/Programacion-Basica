#include <stdio.h>

void intercambiar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenarBurbuja(int arreglo[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                intercambiar(&arreglo[j], &arreglo[j + 1]);
            }
        }
    }
}

int main()
{
    int arreglo[] = {12, 344, 5, 5, 67, 7};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Arreglo original: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arreglo[i]);
        printf(" ");
    }
    printf("\n");

    ordenarBurbuja(arreglo, n);

    printf("Arreglo ordenado : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arreglo[i]);
        printf(" ");
    }

    printf("\n");

    return 0;
}