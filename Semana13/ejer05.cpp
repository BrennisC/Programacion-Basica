#include <iostream>
using namespace std;
class Bird
{
public:
    virtual void eat() {}
    virtual void walk() {}
};
class Eagle : public Bird
{
public:
    void fly() {}
    void eat() override { cout << "I am eating fish." << endl; }
    void walk() override {}
};
class Penguin : public Bird
{
public:
    void eat() override { cout << "I am eating fish. " << endl; }
    void walk() override { cout << "I am walking on the ice." << endl; }
};
class Ostrich : public Bird
{
public:
    void eat() override { cout << "I am eating plants." << endl; }
    void walk() override { cout << "I am walking slowly." << endl; }
};
class Flynot
{
public:
    static void flynot(Penguin &pe, Ostrich &os)
    {
        cout << "The penguin not fly" << endl;
        cout << "Ostrich not fly " << endl;
    }
};
class Fly
{
public:
    static void fly(Eagle &ea)
    {
        cout << "This is an eagle flying." << endl;
        ea.fly();
    }
};
int main()
{
    cout << "Eagle. " << endl;
    Eagle ea;
    ea.eat();
    ea.fly();
    ea.walk();
    cout << "Penguin. " << endl;
    Penguin pg;
    pg.eat();
    pg.walk();
    cout << "Ostrich. " << endl;
    Ostrich os;
    os.eat();
    os.walk();
    Flynot::flynot(pg, os);
    Fly ::fly(ea);
    return 0;
}