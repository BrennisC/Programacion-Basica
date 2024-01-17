#include <iostream>
using namespace std;
int main()
{
    double big = 1.2356e6;
    double small = 1e-4;
    cout << fixed << big + small;
}