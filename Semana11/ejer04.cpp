#include <iostream>
using namespace std;
class Punto
{
private:
    int x;
    int y;

public:
    Punto(int a, int b) : x(a), y(b) {}
    void show()
    {
        cout << x << " " << y << endl;
    }
    void set_x(int a)
    {
        this->x = a;
    }
    void set_y(int b)
    {
        this->y = b;
    }
};
void modificar(Punto &p)
{
    p.set_x(100);
    p.set_y(200);
}
int main()
{
    Punto p1(5, 10);
    p1.show();
    modificar(p1);
    p1.show(); 
    return 0;
}