#include <iostream>
using namespace std;
int main(void)
{
    int *t[2] = {new int[2], new int[2]};
    for (int i = 0; i < 4; i++)
        t[i % 2][i / 2] = i;
    cout << t[0][1] + t[1][0] << endl;
    delete[] t[0];
    delete[] t[1];
    return 0;
}