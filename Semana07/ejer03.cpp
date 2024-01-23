#include <iostream>
#include <string>
using namespace std;
string saludar(string b)
{
    return b;
}
int main()
{
    string a;
    string j = "hola";
    a = saludar(j);
    cout << a;
    return 0;
}