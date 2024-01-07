#include <iostream>
using namespace std;
void multFint()
{
    int n;
    do
    {
        cout << "Ingrese su numero: ";
        cin >> n;
        for (int i = 1; i < 100; i++)
        {
            cout << "La multiplicacion es : " << n * i << endl;
        }

    } while (n != 0);
};
int main()
{
    multFint();
    return 0;
}