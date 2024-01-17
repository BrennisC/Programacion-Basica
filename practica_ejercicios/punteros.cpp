#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Nodo
{
    char dato;
    Nodo *siguiente;
};

void insertaCola(Nodo *&frente, Nodo *&fin, char n);
void mostrarCola(Nodo *&frente, Nodo *&fin, char &n);
bool colaVacia(Nodo *frente);
void Menu(Nodo *&frente, Nodo *&fin, int n);

int main()
{
    Nodo *frente = nullptr;
    Nodo *fin = nullptr;

    int opcion;

    do
    {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Insertar elemento en la cola" << endl;
        cout << "2. Mostrar cola" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        Menu(frente, fin, opcion);

    } while (opcion != 3);

    return 0;
}

void Menu(Nodo *&frente, Nodo *&fin, int n)
{
    char dato;

    switch (n)
    {
    case 1:
        cout << "Ingrese el dato a insertar en la cola: ";
        cin >> dato;
        insertaCola(frente, fin, dato);
        system("cls");
        break;

    case 2:
        if (!colaVacia(frente))
        {
            cout << "Mostrando cola: ";
            mostrarCola(frente, fin, dato);
            cout << endl;
        }
        else
        {
            cout << "La cola está vacía." << endl;
        }
        getch();

        break;

    case 3:
        cout << "Saliendo del programa." << endl;
        system("cls");

        break;

    default:
        cout << "Opción no válida. Intente nuevamente." << endl;
    }
}

void insertaCola(Nodo *&frente, Nodo *&fin, char n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = nullptr;

    if (colaVacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;

    cout << "Elemento insertado en la cola." << endl;
}

void mostrarCola(Nodo *&frente, Nodo *&fin, char &n)
{
    while (frente != nullptr)
    {
        n = frente->dato;
        cout << n << " ";
        frente = frente->siguiente;
    }
}

bool colaVacia(Nodo *frente)
{
    return (frente == nullptr);
}