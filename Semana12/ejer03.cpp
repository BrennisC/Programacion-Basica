#include <iostream>
using namespace std;
class dateBase
{
public:
    void guardar() {}
    void borrar() {}
    void mostrar() {}
};
class Oracle : public dateBase
{
private:
    string cadena;
    int puerto;

public:
    Oracle(string c, int p) : cadena(c), puerto(p) {}
    void temporale()
    {
    }
};
class Mysql : public dateBase
{
private:
    string cadena;
    int puerto;

public:
    Mysql(string c, int p) : cadena(c), puerto(p) {}
};
class Posgret : public dateBase
{
private:
    string cadena;
    int puerto;

public:
    Posgret(string c, int p) : cadena(c), puerto(p) {}
};
int main()
{
    dateBase *p = new Oracle("192.168.0.3", 1521);
    dateBase *r = new Mysql("192.168.0.4", 3306);
    dateBase *s = new Posgret("192.168.0.5", 5432);

    return 0;
}