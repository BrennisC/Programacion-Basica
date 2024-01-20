#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
struct Alumnos
{
    string Nombre;
    int edad;
    float nota;
};
int main()
{
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;
    vector<Alumnos> alumno(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el Nombre: " << endl;
        cin >> alumno[i].Nombre;

        cout << "Ingrese la edad: " << endl;
        cin >> alumno[i].edad;

        cout << "Ingrese la nota: " << endl;
        cin >> alumno[i].nota;
        cout << "\n";
    }
    system("cls");
    cout << "Los alumnos son : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "El nombre es: " << alumno[i].Nombre << endl;

        cout << "La edad es :  " << alumno[i].edad << endl;

        cout << "La nota es : " << alumno[i].nota << endl;

        cout << "\n";
    }

    return 0;
}