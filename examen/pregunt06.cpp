#include <iostream>
using namespace std;
int main()
{
    int i = 5, j = -1;
    do
    {
        i--;
        j++;
    } while (i >= 0);
    cout << j;
}