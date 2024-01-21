#include <iostream>
#include <vector>
using namespace std;

struct Estudiantes
{
    string nombre;
    vector<float> calificaciones;
};

int main()
{
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    vector<Estudiantes> Estudiante(n);
    int suma = 0;

    for (int i = 0; i < n; ++i)
    {
        cout << "Ingrese el nombre del estudiante: ";
        cin >> Estudiante[i].nombre;

        cout << "Ingrese la nota del estudiante: ";
        float nota;
        cin >> nota;

        Estudiante[i].calificaciones.push_back(nota);
        suma += nota;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << "Notas del estudiante " << Estudiante[i].nombre << ": ";
        for (float nota : Estudiante[i].calificaciones)
        {
            cout << nota << " ";
        }
        cout << endl;
    }

    double promedio = static_cast<double>(suma) / n;
    cout << "Promedio: " << promedio;

    return 0;
}