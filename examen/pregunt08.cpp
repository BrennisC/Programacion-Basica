#include <iostream>
using namespace std;
int main()
{
    for (float val = -100.0; val < 100.0; val = -val * 2)
        cout << "*";
}