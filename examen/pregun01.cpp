#include <iostream>
using namespace std;
int main()
{
    int i = 10, j = i++, k = --i;
    //            10       10
    if (i > 0)
        j++; // 10
    else
        k++;
    if (k == 0)
        i++;
    else if (k > 0)
        k--; // 9
    else
        k++;
    cout << i * j * k;
    //      10  11   9
}
