#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
struct Node
{
    string texto;
    int cantidad;
};
int main()
{

    setlocale(LC_ALL, "es_ES.UTF-8");
    int ingreso;
    cout << "Ingrese el tamaño del vector: ";
    cin >> ingreso;
    vector<Node> vectorNode(ingreso);
    for (int i = 0; i < ingreso; i++)
    {
        cout << "Ingrese su nombre: ";
        cin >> vectorNode[i].texto;

        cout << "Ingrese la cantidad: ";
        cin >> vectorNode[i].cantidad;
    }
    ofstream myDocumento("example.txt");
    if (myDocumento.is_open())
    {
        for (int i = 0; i < ingreso; i++)
        {
            myDocumento << "Nombre: " << vectorNode[i].texto << endl;
            myDocumento << "Cantidad: " << vectorNode[i].cantidad << endl;
        }
    }
    myDocumento.close();
    return 0;
}