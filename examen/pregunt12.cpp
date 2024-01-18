#include <iostream>
using namespace std;
int main()
{

    int a = 4;
    switch (a << a)
    {
    case 8:
        a++;
    case 4:
        a++;
    case 2:
        break;
    case 1:
        a--;
    }
    cout << a;

    return 0;
}