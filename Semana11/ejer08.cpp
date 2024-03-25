#include <iostream>
#include <vector>
using namespace std;

class Bloques
{
private:
    int altura, longitud, ancho;

public:
    Bloques(int x, int y, int z) : altura(x), longitud(y), ancho(z) {}

    int getAltura() { return altura; }
    int getLongitud() { return longitud; }
    int getAncho() { return ancho; }
};

class CasaCLient
{
private:
    vector<Bloques> bloques;

public:
    CasaCLient() = default;
    CasaCLient(vector<Bloques> &bl) : bloques(bl) {}
    vector<Bloques> &getBloques() { return bloques; }

    void mostrarHouse()
    {
        for (size_t i = 0; i < bloques.size(); i++)
        {
            cout << "Los bloques de altura son :  " << bloques[i].getAltura() << endl;
            cout << "Los bloques de la base son: " << bloques[i].getAncho() << endl;
            cout << "Los bloques del techo son : " << bloques[i].getLongitud() << endl;
        }
    }
};

class ContruirHouseClient
{
public:
    static void contruir(CasaCLient &cl)
    {
        int cantidad;
        cout << "Ingrese la cantidad de bloques que va a tener su casa: ";
        cin >> cantidad;

        for (int i = 0; i < cantidad; i++)
        {
            int h, l, w;
            cout << "Ingrese la cantidad de bloques en la base " << i + 1 << ": \n";
            cin >> h;

            cout << "Ingrese la cantidad de bloques en la altura " << i + 1 << ":  \n";
            cin >> l;

            cout << "Ingrese la cantidad de bloques que vas a usar en el techo " << i + 1 << ":  \n";
            cin >> w;

            cl.getBloques().push_back(Bloques(h, l, w));
        }
    }
};

int main()
{
    CasaCLient cl;

    ContruirHouseClient::contruir(cl);

    cl.mostrarHouse();
    return 0;
}
