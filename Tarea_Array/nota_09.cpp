#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Estudiante
{
    string nombre;
    vector<float> calificaciones;
};

int main()
{
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    vector<Estudiante> estudiantes(n);

    for (int i = 0; i < n; ++i)
    {
        cout << "Ingrese el nombre del estudiante: ";
        cin >> estudiantes[i].nombre;

        cout << "Ingrese las calificaciones del estudiante " << estudiantes[i].nombre << ":" << endl;
        for (int j = 0; j < 5; j++)
        {
            float calificacion;
            cout << "Ingrese la nota " << j + 1 << ": ";
            cin >> calificacion;
            estudiantes[i].calificaciones.push_back(calificacion);
        }
    }

    cout << "\nPromedio de calificaciones para cada estudiante:" << endl;

    for (int i = 0; i < n; ++i)
    {
        float suma = 0;
        for (float nota : estudiantes[i].calificaciones)
        {
            suma += nota;
        }

        double promedio = suma / estudiantes[i].calificaciones.size();

        cout << "Estudiante: " << estudiantes[i].nombre << " - Promedio: " << promedio << endl;
    }

    return 0;
}
