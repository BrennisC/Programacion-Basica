#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define lugares_disponibles 5

struct Zoologico
{
    char fecha_ingreso[130];
    char nombre[50];
    float precio;
    int DNI[8];
};

void registroDatosZoo(Zoologico registro[lugares_disponibles])
{
    printf("\t\t\tREGISTRO DE VISITAS\n\n\n");

    for (int i = 0; i < lugares_disponibles; i++)
    {
        printf("Fecha: ");
        scanf("%s", registro[i].fecha_ingreso);
        printf("Nombre: ");
        scanf("%s", registro[i].nombre);
        printf("Precio: ");
        scanf("%f", &registro[i].precio);
        printf("DNI: ");
        scanf("%d", &registro[i].DNI);

        printf("\n\n");
        printf("Personas que ingresaron: %i", lugares_disponibles - i - 1);
        printf("\n\n");
    }
    system("cls");
}

void mostrarRegistro(const struct Zoologico registro[lugares_disponibles])
{
    for (int i = 0; i < lugares_disponibles; i++)
    {
        printf("Todos los registros\n\n");
        printf("\n");

        for (int i = 0; i < lugares_disponibles; i++)
        {
            printf("Fecha de ingreso: %s\n Nombre: %s\n Precio: %f\n DNI%d\n", registro[i].fecha_ingreso, registro[i].nombre, registro[i].precio, registro[i].DNI);
        }
    }
    getch();
    system("cls");
}

void salirdelSistema()
{
    printf("Has salido del sistema.\n");
    exit(0);
}

void errorEleccion()
{
    printf("Esta no es valida.\n");
    exit(1);
}

void MenuRegistro()
{
    int opcion;
    printf("\tMenu de opciones.\n\n");

    do
    {
        printf("Ingrese el numero [1] para el registro.\n");
        printf("Mostrar el registro [2]\n");
        printf("Salir del registro [3]\n");

        printf("Ingrese la opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            system("cls");
            struct Zoologico registro[lugares_disponibles];
            registroDatosZoo(registro);
            break;

        case 2:
            system("cls");
            mostrarRegistro(registro);
            break;
        case 3:
            system("cls");
            salirdelSistema();
        default:
            system("cls");
            errorEleccion();
            break;
        }
    } while (opcion != 4);
}

int main()
{
    printf("\t*********SISTEMA DE REGISTRO DEL ZOOLOGICO********\n\n");
    MenuRegistro();

    return 0;
}