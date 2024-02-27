#include <iostream>
using namespace std;
class Super
{
private:
    int x;

public:
    void setX(int new_x)
    {
        x = new_x;
    }
    int get()
    {
        return x;
    }
};
class sub : private Super
{
};
class sub2 : sub
{
public:
    void show() {}
};
int main()
{
    sub2 p;
    p.show();

    return 0;
}