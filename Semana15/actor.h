#include <iostream>
#include "persona.h"
using namespace std;
class Autor : public Persona
{
public:
    Autor(string n, string a1, stirng a2, string dt, string na) : Persona(n, a1, a2, dt, na) {}
    void shown() override
    {
        Persona::shown();
    }
};