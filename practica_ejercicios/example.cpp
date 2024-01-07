#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i = 17, j = 3, k = 20;
    if (i >= 0)
    {
        i = ++i + (i%199)/9;
    }
    cout<<i+k%5;
    return 0;
}