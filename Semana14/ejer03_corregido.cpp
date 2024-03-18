#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class Bloque
{
private:
    float base;
    float altura;
    float x, y, z;

public:
    Bloque(float a, float b, float c, float d, float e) : base(d), altura(e), x(a), y(b), z(c) {}
    ~Bloque() {}
    float getAltura() const { return altura; }
    float getBase() const { return base; }
    void setAltura(float al) { altura = al; }
    void dibujar() const
    {
        cout << "Se ha creado un bloque en la posicion (" << x << ", " << y << ", " << z << ") con una base de " << base << " y con una altura " << altura << endl;
    }
    void setPosicion(float a, float b, float c, float ba, float al)
    {
        x = a;
        y = b;
        z = c;
        base = ba;
        altura = al;
    }
};

class Techo
{
private:
    float x, y, z;
    float base;

public:
    Techo(float a, float b, float c, float bs) : x(a), y(b), z(c), base(bs) {}
    ~Techo() {}
    void setBase(float b) { base = b; }
    void dibujar() const
    {
        cout << "Se ha creado un techo en la posicion (" << x << ", " << y << ", " << z << ") con una base de " << base << endl;
    }
    void setPosicion(float a, float b, float c, float bs)
    {
        x = a;
        y = b;
        z = c;
        base = bs;
    }
};

class Casa
{
private:
    Techo techos;
    Bloque bloques;

public:
    Casa() : techos(0, 0, 0, 0), bloques(0, 0, 0, 0, 0) {}

    bool estaVacia() const
    {
        return bloques.getAltura() == 0 ? true : false;
    }

    void agregarCasa(float ax, float by, float cz, float bs, float al)
    {
        techos.setPosicion(ax, by, cz, bs);
        bloques.setPosicion(ax, by, cz, bs, al);

        techos.dibujar();
        bloques.dibujar();
    }

    void dibujar()
    {
        techos.dibujar();
        bloques.dibujar();
    }
};

class Urbanizacion
{
private:
    vector<vector<Casa>> matriz;
    int filas;
    int columnas;

public:
    Urbanizacion(int f, int c) : filas(f), columnas(c)
    {
        matriz.resize(filas, vector<Casa>(columnas));
    }

    void dibujar() const
    {
        for (int i = 0; i < filas; ++i)
        {
            for (int j = 0; j < columnas; ++j)
            {
                if (matriz[i][j].estaVacia())
                    cout << " [ ] ";
                else
                    cout << " [X] ";
            }
            cout << endl;
        }
    }

    bool estaDisponible(int fila, int columna) const
    {
        return matriz[fila][columna].estaVacia();
    }

    void agregarEnLaUbarnizacion(float ax, float by, float cz, float bs, float al)
    {
        int fila, columna;
        cout << "Ingrese la fila y columna donde desea agregar la casa: ";
        cin >> fila >> columna;

        if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas)
        {
            if (estaDisponible(fila, columna))
            {
                matriz[fila][columna].agregarCasa(ax, by, cz, bs, al);
                cout << "Se ha agregado una casa en la fila " << fila << " y columna " << columna << endl;
            }
            else
            {
                cout << "La ubicacion seleccionada ya esta ocupada." << endl;
            }
        }
        else
        {
            cout << "La fila o columna ingresada esta fuera de rango." << endl;
        }
    }
};

int main()
{
    srand(time(0));

    int filas;
    int columnas;

    float z_aletoria = rand() % 100 + 1;
    float base_aletoria = rand() % 100 + 1;
    float altura_aletoria = rand() % 100 + 1;

    cout << "Ingrese el numero de filas : ";
    cin >> filas;

    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    Urbanizacion urbanizacion(filas, columnas);

    char opcion;
    do
    {
        cout << "Deseas agregar una casa aleatoria? (s/n): ";
        cin >> opcion;

        if (opcion == 's' || opcion == 'S')
        {
            urbanizacion.agregarEnLaUbarnizacion(rand() % filas, rand() % columnas, z_aletoria, base_aletoria, altura_aletoria);
            urbanizacion.dibujar();
        }
        else if (opcion == 'n' || opcion == 'N')
        {
            float ax, by, cz, bs, al;
            cout << "Ingrese la posicion x, y, z, base y altura de la casa: ";
            cin >> ax >> by >> cz >> bs >> al;

            urbanizacion.agregarEnLaUbarnizacion(ax, by, cz, bs, al);
            urbanizacion.dibujar();
        }
    } while (opcion == 's' || opcion == 'S' || opcion == 'n' || opcion == 'N');

    return 0;
}
