#include <iostream>
using namespace std;

class Punto
{
private:
    int x, y;

public:
    Punto();
    Punto(int, int); // Agregamos un nuevo constructor
    void setPunto(int, int);
    int getX();
    int getY();
};

Punto::Punto()
{
}

Punto::Punto(int _x, int _y)
{
    x = _x;
    y = _y;
}

void Punto::setPunto(int _x, int _y)
{
    x = _x;
    y = _y;
}

int Punto::getX()
{
    return x;
}

int Punto::getY()
{
    return y;
}

int main()
{
    Punto punto1(1, 2);
    cout << punto1.getX() << endl;
    cout << punto1.getY() << endl;

    return 0;
}
