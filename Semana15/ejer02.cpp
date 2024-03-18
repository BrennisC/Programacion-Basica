#include <iostream>
using namespace std;
int main()
{
    double n;
    cout << "ingrese un numero: ";
    cin >> n;
    try
    {
        if (n < 0)
            throw "error, noy raiz"
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}