#include <iostream>
using namespace std;
class Pet
{
private:
    string name;

public:
    Pet(string _name) : name(_name) {}
    void run()
    {
        cout << "I'm running. \n";
    }
};
class cat : public Pet
{
public:
    cat(string n) : Pet(n) {}
    void make_sound()
    {
        cout << "Miau miau\n";
    }
};
class dog : public Pet
{
public:
    dog(string n) : Pet(n) {}
    void make_sound()
    {
        cout << "Wauuu\n";
    }
};
int main()
{
    Pet *a_pet1 = new cat("Whiskers");
    a_pet1->run();
    static_cast<cat *>(a_pet1)->make_sound();
    Pet *a_pet2 = new dog("Buddy");
    a_pet2->run();
    static_cast<dog *>(a_pet2)->make_sound();
    return 0;
}