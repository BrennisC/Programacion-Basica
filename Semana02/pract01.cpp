#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> miVector = {1, 2, 3, 4, 5};

    cout << "Elemento en la posicion: ";

    miVector.insert(miVector.begin() + 5, 50);
    cout << "Vector despues de la insercion: ";
    for (int elemento : miVector)
    {
        cout << elemento << "\n";
    }
    cout << endl;

    miVector.erase(miVector.begin() + 4);
    cout << "Vector despues de la eliminacion: ";
    for (int elemento : miVector)
    {
        cout << elemento << "\n";
    }
    cout << endl;

    return 0;
}