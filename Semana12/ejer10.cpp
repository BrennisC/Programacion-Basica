#include <iostream>
using namespace std;
class Solution
{
private:
    string name;
    int age;

public:
    Solution(string n, int v) : name(n), age(v) {}
    void display() { cout << "Nombre : " << name << "  Age : " << age << endl; }
};
class Derivada : public Solution
{

} int main()
{
    return 0;
}