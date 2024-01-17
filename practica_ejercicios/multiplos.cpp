#include <iostream>
using namespace std;
int numers(string a, string b)
{
    int y = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << a << "  " << b << endl;
        }
        if (i % 3 == 0)
        {
            cout << a << endl;
        }
        if (i % 5 == 0)
        {
            cout << b << endl;
        }
        else
        {
            cout << i << endl;
            y++;
        }
    }
    return y;
}
int main()
{
    int s = 0;
    string a = "Bre";
    string b = "nnis";
    s = numers(a, b);
    cout << "El total que aparecen estos numeros son: " << s;
    return 0;
}