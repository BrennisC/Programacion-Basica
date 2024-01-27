#include <iostream>
#include <vector>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

const string CONTRASENA_CORRECTA = "vivero_unas"; // para poder accerder a los metodos de la clase que hereda la estructura

bool verificarContrasena()
{
    string contrasenaIngresada;
    cout << "Ingrese la contraseña: ";
    getline(cin, contrasenaIngresada);
    system("cls"); // para limpiar el buffer
    return contrasenaIngresada == CONTRASENA_CORRECTA;
}

struct Plantas //  estructura de plantas para el vivero
{
    string nombre_plantas;
    int cantidad_plantas;
    vector<float> precios;
};
struct Adono
{
    string nombre_abono;
    float precio_adono;
};
void Registro(vector<Plantas> &registro) // registro de las plantas de vivero
{
    cout << "\t\t*****BIENVENIDOS AL REGISTRO*****\n\n";

    int tamanio;
    cout << "Ingrese la cantidad de plantas: ";
    cin >> tamanio;
    cin.ignore();

    registro.resize(tamanio);

    for (int i = 0; i < tamanio; i++)
    {
        float pago;
        cout << "Ingrese el nombre de la planta " << i + 1 << ": " << endl;
        getline(cin, registro[i].nombre_plantas);

        cout << "Ingrese la cantidad de plantas " << i + 1 << ": " << endl;
        cin >> registro[i].cantidad_plantas;
        for (int j = 0; j < registro[i].cantidad_plantas; j++)
        {
            cout << "Ingrese el precio de la planta " << j + 1 << ": " << endl;
            cin >> pago;
            registro[i].precios.push_back(pago);
        }

        cin.ignore();

        cout << "\nRegistro de planta " << i + 1 << " completado.\n\n";
    }
    system("cls");
}

void mostrarRegistro(const vector<Plantas> &registro) // muestra los datos a ingresar al usuario
{
    cout << "\t\t*****REGISTRO DE PLANTAS*****\n\n";

    for (size_t i = 0; i < registro.size(); i++)
    {
        cout << "Planta " << i + 1 << ":\n";
        cout << "Nombre: " << registro[i].nombre_plantas << endl;
        cout << "Cantidad: " << registro[i].cantidad_plantas << endl;
        for (float precio : registro[i].precios)
        {
            cout << "Precio: S/. " << precio << endl;
        }
        cout << "\n";
    }
    getch();
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
            archivo << "Precios:" << endl;
            for (float dato : registro[i].precios)
            {
                archivo << dato << endl;
                float pago;
                float total = static_cast<float>(dato) * registro[i].cantidad_plantas;
                archivo << "El pago total es : " << total;
            }
            archivo << "\n-----------------------------\n";
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
    exit(0);
    system("cls");
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
    } while (opc != 4);
}

int main()
{
    cout << "\t\t******VIVERO UNAS ******\n\n";
    Menu();
    return 0;
}
