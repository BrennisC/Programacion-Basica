#include <iostream>
using namespace std;
int fibo(int n)
{
    long long m[n];
    m[0] = 0;
    m[1] = 1;
    for (int i = 2; i < n; i++)
    {
        m[i] = m[i - 1] + m[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << m[i] << " ";
    }
}
int main()
{
    int x;
    x = fibo(50);
    cout << x;

    return 0;
}