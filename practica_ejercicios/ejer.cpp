#include <iostream>
using namespace std;
class A
{
public:
    int a;
    A() { a = 0; }
    A(int b) { a = b + 1; }
};
class B
{
public:
    A a;
    B() : a(0) {}
};
int main()
{
    B *b = new B();
    cout << b->a.a << endl;
}