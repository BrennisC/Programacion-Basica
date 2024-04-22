#include <iostream>
using namespace std;

template <typename T>

class MyTemplate
{
private:
    T data;

public:
    MyTemplate(T value) : data(value) {}

    void print()
    {
        cout << "Value. " << data << endl;
    }
};

int main()
{
    MyTemplate obj(10);
    obj.print();

    MyTemplate obj2("Hola mundo");
    obj2.print();
    return 0;
}