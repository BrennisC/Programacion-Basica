#include <iostream>
using namespace std;
class Suma
{
private:
    int x;
    int y;

public:
    Suma(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void realizar_suma()
    {
        cout << "La suma es " << x + y << endl;
    }
};
int main()
{
    Suma s1(5, 6);
    s1.realizar_suma();
    return 0;
}