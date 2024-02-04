#include <iostream>
#include <string>
using namespace std;
class
{
    public:
        
};
int main()
{
    int numeros[5];
    for (int i = 0; i < 5; i++)
        numeros[i] = 5;
    int *another = new int[5];
    delete[] another;
    for (int i = 0; i < 5; i++)
        another[i] = 2;
    for (int i = 0; i < 5; i++)
        cout << numeros[i] << " " << endl;
    for (int i = 0; i < 5; i++)
        cout << another[i] << " " << endl;

    cin.get();
    return 0;
}