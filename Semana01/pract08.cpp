#include <iostream>
#include <conio.h>
using namespace std;
struct
{
    char nombre[20];
    float salario;
} emp[100];
int main()
{
    int n_empleados, posM, posm;
    float mayor = 0, menor = 99999;

    cout << "Ingrese el numero de empleados";
    cin >> n_empleados;

    for (int i = 0; i < n_empleados; i++)
    {
        fflush(stdin);
        cout << i + 1 << "Ingrese el nombre: ";
        cin.getline(emp[i].nombre, 20, '\n');
        cout << i + 1 << "Ingrse el salario: ";
        cin >> emp[i].salario;

        if (emp[i].salario > mayor)
        {
            mayor = emp[i].salario;
            posM = i;
        }
        if (emp[i].salario < menor)
        {
            menor = emp[i].salario;
            posm = i;
        }

        cout << '\n';
    }
    cout<<"\n:Datos del empleado con  mayor salario:\n ";
    cout<<"Nombre: "<<emp[posM].nombre<<endl;
    cout<<"Salario: "<<emp[posM].salario<<endl;

    cout<<"\n. :Datos del empleado con menor salario\n";
    cout<<"Nombre: "<<emp[posm].nombre<<endl;
    cout<<"Salario: "<<emp[posm].salario<<endl;

    getch();
    return 0;
}