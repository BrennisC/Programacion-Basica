#include <iostream>
using namespace std;
class Acout
{
private:
    string name;
    string lastname;
    int age;

public:
    Acout(string n, string ln, int a) : name(n), lastname(ln), age(a) {}
    string getName() { return name; }
    string getLastName() { return lastname; }
};
int main()
{
    return 0;
}