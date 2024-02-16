#include <iostream>
#include "personas.h"
#include "animales.h"
using namespace std;
int main()
{
    Persona *p1 = new Persona("Brennis", 20);
    p1->presentacion();

    Animal *a1 = new Animal("Boby", "Chusco", 12);
    a1->informacion();
    Gatos *g1 = new Gatos("Perchas", "Finaza", 8, "crochetas");
    g1->informacion();

    Alumno *al1 = new Alumno("Brennis", 12, "123645", "75822689");
    al1->presentacion();
    return 0;
}