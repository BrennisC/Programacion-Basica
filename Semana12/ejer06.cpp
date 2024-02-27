#include <iostream>
using namespace std;
class Pet
{
private:
    string name;
    int age;

public:
    Pet(string n, int a) : name(n), age(a) {}
    virtual void mostrar()
    {
        cout << "Mi nombre es " << name << " y mi edad e s" << age << endl;
    }
};
class Dog : public Pet
{
private:
    string raza;

public:
    Dog(string name, int age, string _raza) : Pet(name, age), raza(_raza) {}
    void mostrar() override
    {
        Pet ::mostrar();
        cout << "Soy un perro de raza " << raza << endl;
    }
};
class GermanShepherd : public Pet
{
private:
    string color;

public:
    GermanShepherd(string name, int age, string c) : Pet(name, age), color(c) {}
    void mostrar() override
    {
        Pet ::mostrar();
        cout << "Tengo el color " << color << endl;
    }
};
int main()
{
    Dog d("Buddy", 5, "Labrador");
    GermanShepherd gs("Max", 3, "Negro");
    d.mostrar();
    gs.mostrar();
    return 0;
}