#include <iostream>
using namespace std;

// Definición de la estructura Point para representar un punto en el plano cartesiano
struct Point
{
    int x;
    int y;
};

int main()
{
    const int numPoints = 3;

    // Creación de un array de punteros a estructuras Point
    Point *pointArray[numPoints];

    // Asignación dinámica de memoria para cada punto en el array
    for (int i = 0; i < numPoints; i++)
    {
        pointArray[i] = new Point;
    }

    // Inicialización de los puntos con valores específicos
    pointArray[0]->x = 1;
    pointArray[0]->y = 2;

    pointArray[1]->x = 3;
    pointArray[1]->y = 4;

    pointArray[2]->x = 5;
    pointArray[2]->y = 6;

    // Imprimir los puntos almacenados en el array
    for (int i = 0; i < numPoints; i++)
    {
        cout << "Punto " << i + 1 << ": (" << pointArray[i]->x << ", " << pointArray[i]->y << ")" << endl;
    }

    // Liberar la memoria asignada dinámicamente
    for (int i = 0; i < numPoints; i++)
    {
        delete pointArray[i];
    }

    return 0;
}