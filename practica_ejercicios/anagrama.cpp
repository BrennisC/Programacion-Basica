#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool anagrama(string &a, string &b)
{

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
}

int main()
{
    string x, y;
    cout << "Ingrese su primera palabra: ";
    cin >> x;

    cout << "\nIngrese su segunda palabra: ";
    cin >> y;

    transform(x.begin(), x.end(), x.begin(), ::tolower);
    transform(y.begin(), y.end(), y.begin(), ::tolower);

    if (anagrama(x, y))
    {
        cout << "Es un anagrama." << endl;
    }
    else
    {
        cout << "No es un anagrama." << endl;
    }

    return 0;
}