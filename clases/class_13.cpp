#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
};
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *, int);
void menu();
Nodo *arbol = NULL;
int main()
{
    menu();
    return 0;
}
void menu()
{
    int dato, opc, contador = 0;
    do
    {
        cout << "\tMENU:" << endl;
        cout << "1. Insertar Dato" << endl;
        cout << "2. Mostrar arbol" << endl;
        cout << "3. Salir " << endl;
        cout << "Opcion: " << endl;
        cin >> opc;
        system("cls");
        switch (opc)
        {
        case 1:
            cout << "Ingrese un numero: ";
            cin >> dato;
            insertarNodo(arbol, dato);
            cout << "\n";
            system("cls");
            break;
        case 2:
            cout << "\nMostrando el arbol completo:\n\n";
            mostrarArbol(arbol, contador);
            cout << endl;
            getch();
            break;
        default:
            break;
        }
        system("cls");
    } while (opc != 3);
}
Nodo *crearNodo(int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    return nuevo_nodo;
}
void insertarNodo(Nodo *&arbol, int n)
{
    if (arbol == NULL)
    {
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }
    else
    {
        int valorRaiz = arbol->dato;
        // si el elemento es menor que elemento insertamos a la  izquierda
        if (n < valorRaiz)
        {
            insertarNodo(arbol->izq, n);
        }
        else
        {
            insertarNodo(arbol->der, n);
        }
    }
}
void mostrarArbol(Nodo *arbol, int cont)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        mostrarArbol(arbol->der, cont + 1);
        for (int i = 0; i < cont; i++)
        {
            cout << " ";
        }
        cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, cont + 1);
    }
}