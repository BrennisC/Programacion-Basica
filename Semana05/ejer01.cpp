#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main()
{
    vector<int> numero;

    numero.push_back(23);
    numero.push_back(20);
    numero.push_back(17);
    numero.push_back(91);
    numero.push_back(10);
    numero.push_back(45);

    int *p = &numero[0];
    for (int i = 0; i < numero.size(); i++)
    {
        cout << *(p + i) << " ";
    }
    return 0;
}