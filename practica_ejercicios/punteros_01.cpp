#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Introduzca el numero de filas: ";
    cin >> n;

    vector<vector<long>> pascal(n, vector<long>(n, 0));

    for (int i = 0; i < n; i++)
    {
        pascal[0][i] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}