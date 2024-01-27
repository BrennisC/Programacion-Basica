#include <iostream>
#include <vector>
using namespace std;
void mostrar(vector<int> &vector3d)
{
    cout << "EL valor de vector es : " << vector3d.size() << endl;
}
vector<int> completar()
{
    int n;
    cout << "Ingrese el valor : ";
    cin >> n;
    vector<int> vector3d(n);
    if (n == 3)
    {
        for (size_t i = 0; i < vector3d.size(); i++)
        {
            cout << "Ingrese el valor : " << i + 1 << endl;
            cin >> vector3d[i];
        }
    }
    else
    {
        cout << "Solo son tres valores.";
    }
    return vector3d;
}
int main()
{
    vector<int> vector3d = completar();
    mostrar(vector3d);
    return 0;
}