#include <iostream>
#include <vector>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

const string CONTRASENA_CORRECTA = "veviro_unas";

bool verificarContrasena()
{
    string contrasenaIngresada;
    cout << "Ingrese la contraseña: ";
    getline(cin, contrasenaIngresada);
    system("cls");
    return contrasenaIngresada == CONTRASENA_CORRECTA;
}

struct Plantas
{
    string nombre_plantas;
    int cantidad_plantas;
    float precios;
};

void Registro(vector<Plantas> &registro)
{
    cout << "\t\t*****BIENVENIDOS AL REGISTRO*****\n\n";

    int tamano;
    cout << "Ingrese la cantidad de plantas: ";
    cin >> tamano;
    cin.ignore();

    registro.resize(tamano);

    for (int i = 0; i < tamano; i++)
    {
        cout << "Ingrese el nombre de la planta " << i + 1 << ": " << endl;
        getline(cin, registro[i].nombre_plantas);

        cout << "Ingrese la cantidad de plantas " << i + 1 << ": " << endl;
        cin >> registro[i].cantidad_plantas;

        cout << "Ingrese el precio de la planta " << i + 1 << ": " << endl;
        cin >> registro[i].precios;

        cin.ignore();

        cout << "\nRegistro de planta " << i + 1 << " completado.\n\n";
    }
    system("cls");
}

void mostrarRegistro(const vector<Plantas> &registro)
{
    cout << "\t\t*****REGISTRO DE PLANTAS*****\n\n";

    for (size_t i = 0; i < registro.size(); i++)
    {
        cout << "Planta " << i + 1 << ":\n";
        cout << "Nombre: " << registro[i].nombre_plantas << endl;
        cout << "Cantidad: " << registro[i].cantidad_plantas << endl;
        cout << "Precio: " << registro[i].precios << endl;
        cout << "\n";
    }
    system("cls");
}

void salirdelSistema(const vector<Plantas> &registro)
{
    ofstream archivo("registro.txt");

    if (archivo.is_open())
    {
        for (size_t i = 0; i < registro.size(); i++)
        {
            archivo << "Planta " << i + 1 << ":\n";
            archivo << "Nombre: " << registro[i].nombre_plantas << endl;
            archivo << "Cantidad: " << registro[i].cantidad_plantas << endl;
            archivo << "Precio: " << registro[i].precios << endl;
            archivo << "\n";
        }

        archivo.close();
    }
    else
    {
        cout << "Error al abrir el archivo para almacenar los datos.\n";
    }

    cout << "Has salido del sistema.\n";
    getch();
    system("cls");
    exit(0);
}

void Menu()
{
    vector<Plantas> registro;

    if (!verificarContrasena())
    {
        cout << "Contraseña incorrecta. Saliendo del sistema.\n";
        return;
    }

    int opc;
    cout << "\t\t***MENU DE OPCIONES***\n\n";

    do
    {
        cout << "[1] SISTEMA DE REGISTRO: \n";
        cout << "[2] MOSTRAR EL REGISTRO: \n";
        cout << "[3] SALIR DE SISTEMA: \n";
        cout << "Ingrese su opcion : ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            system("cls");
            Registro(registro);
            break;
        case 2:
            system("cls");
            mostrarRegistro(registro);
            break;
        case 3:
            system("cls");
            salirdelSistema(registro);
            break;
        default:
            cout << "Opcion no valida.\n";
            break;
        }
    } while (opc != 3);
}

int main()
{
    cout << "\t\t******VIVERO UNAS ******\n\n";
    Menu();
    return 0;
}
