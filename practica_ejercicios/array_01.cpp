#include <iostream>
#include <vector>
using namespace std;
struct estadisticas
{
    vector<double> calificaciones;
};
int main()
{
    int cantidad;
    cout << "\nIngrese la cantidad de notas: ";
    cin >> cantidad;
    vector<estadisticas> notas(cantidad);
    float total;
    for (int i = 0; i < cantidad; i++)
    {
        float nota;
        cout << "\nIngrese la nota: ";
        cin >> nota;

        notas[i].calificaciones.push_back(nota);
        total += nota;
    }
    for (int i = 0; i < cantidad; i++)
    {
        for (float total : notas[i].calificaciones)
        {
            cout << "La notas de los estudiantes: " << total<<endl;
        }
    }
    double promedio = static_cast<double>(total) / cantidad;
    cout << "El promedio de los " << promedio;
    return 0;
}