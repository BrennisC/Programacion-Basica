#include <iostream>
#include <string>
using std::cout;
using std::endl;
class Foo
{
public:
    Foo(int data) : data(data) {}
    ~Foo(){};
    Food &operator=(const Foo &rhs)
    {
        data = rhs.data;
        return *this;
    }
    int data;
};
int main()
{
    Foo foo(2);
    Foo foo2(42);
    foo = foo2;
    cout << foo.data << endl;
}