/*
 *Hacer en la clase urbanizacion en un modo vector para poder mostrar si se encuentra en el matriz o no esta en esa matriz.
 *Hacar una programa para ver si se encuentra si se encuentra en en la matriz o no
 *Mostrar los lotes de la matriz para ver si tiene dueño o no
 */
#include <iostream>
#include <vector>
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
    void setAltura(float al) { altura = al; }
    void dibujar() const
    {
        cout << "Se ha creado un bloque en la posicion (" << x << ", " << y << ", " << z << ") con una base de " << base << " y con una altura " << altura << endl;
    }
    void setPosicion(float a, float b, float c, float ba, float al)
    {
        char opc;
        cout << "Deseas cambiar las posiciones: s/n ";
        cin >> opc;
        if (opc == 's' || opc == 'S')
        {
            cin >> a;
            x = a;
            cin >> b;
            y = b;
            cin >> c;
            z = c;
            cin >> ba;
            base = ba;
            cin >> al;
            altura = al;
        }
    }
};

class Techo
{
private:
    float x, y, z;
    float base;

public:
    Techo(float a, float b, float c, float bs) : x(a), y(b), z(c), base(bs) {}
    void dibujar() const
    {
        cout << "Se ha creado un techo en la posicion (" << x << ", " << y << ", " << z << ") con una base de " << base << endl;
    }
    void setPosicion(float a, float b, float c, float bs)
    {
        char opc;
        cout << "Deseas cambiar las posiciones: s/n ";
        cin >> opc;
        if (opc == 's' || opc == 'S')
        {
            cin >> a;
            x = a;
            cin >> b;
            y = b;
            cin >> c;
            z = c;
            cin >> bs;
            base = bs;
        }
    }
    ~Techo() {}
};

class Casa
{
private:
    vector<Techo> techos;
    vector<Bloque> bloques;

public:
    Casa(const vector<Techo> &ths, const vector<Bloque> &bl) : techos(ths), bloques(bl) {}
    vector<Techo> getTechos() const { return techos; }
    vector<Bloque> getBloques() const { return bloques; }
    ~Casa() {}
    void dibujar() const
    {
        for (const auto &techo : techos)
        {
            techo.dibujar();
        }
        for (const auto &bloque : bloques)
        {
            bloque.dibujar();
        }
    }
    void setPosicion(float x, float y, float z, float base)
    {
        for (auto &techo : techos)
        {
            techo.setPosicion(x, y, z, base);
        }
    }
};

class Urbanizacion
{
private:
    vector<Casa> casas;

public:
    Urbanizacion(const vector<Casa> &cas) : casas(cas) {}
    ~Urbanizacion() {}
    void dibujar() const
    {
        for (const auto &casa : casas)
        {
            casa.dibujar();
        }
    }
    void setPosicion(float x, float y, float z, float base)
    {
        for (auto &casa : casas)
        {
            casa.setPosicion(x, y, z, base);
        }
    }
};

int main()
{
    vector<Casa> casas;
    for (int i = 0; i < 2; ++i)
    {
        Bloque bl(4.7 + i * 5, 4.8 + i * 5, 16, 14.4, 45);
        Techo th(45 + i * 5, 45 + i * 5, 78, 47);
        th.setPosicion(45 + i * 5, 45 + i * 5, 78, 47);

        vector<Techo> techos;
        techos.push_back(th);
        vector<Bloque> bloques;
        bloques.push_back(bl);

        Casa cas(techos, bloques);
        casas.push_back(cas);
    }

    Urbanizacion ur(casas);
    ur.dibujar();
    return 0;
}
