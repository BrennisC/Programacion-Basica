#include <iostream>
using namespace std;

class Animal
{
private:
    int age;

public:
    Animal(int);
    virtual void comer();
};

class Humano : public Animal
{
private:
    string nombre;

public:
    Humano(int, string);
    void comer() override;
};

class Perro : public Animal
{
private:
    string nombre, raza;

public:
    Perro(int, string, string);
    void comer() override;
};

Animal::Animal(int _age) : age(_age)
{
    age = _age;
}

void Animal::comer()
{
    cout << "Este animal se come carne" << endl;
}

Humano::Humano(int _age, string _nombre) : Animal(_age), nombre(_nombre)
{
}

void Humano::comer()
{
    cout << "En una mesa" << endl;
}

Perro::Perro(int _age, string _nombre, string _raza) : Animal(_age), nombre(_nombre), raza(_raza)
{
}

void Perro::comer()
{
    cout << "En el suelo con su plato" << endl;
}

int main()
{
    Animal *animales[2];
    animales[0] = new Perro(5, "Rex", "Labrador");
    animales[1] = new Humano(30, "Juan");

    for (int i = 0; i < 2; i++)
        animales[i]->comer();

    return 0;
}
