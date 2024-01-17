#include <iostream>
using namespace std;
int main()
{
    int i = 8, j = i++, k = --i;
    if (i > 0)
    {
        j++;
        k++;
    }
    else
    {
        k++;
        i++;
    }
    if (k == 0)
    {
        i++;
        j++;
    }
    else
    {
        if (k > 0)
            k--;
        else
            k++;
        i++;
    }
    cout << i * j * k;
}