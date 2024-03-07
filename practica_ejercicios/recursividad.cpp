#include <iostream>
using namespace std;
void cuenAtras(int cuenta)
{
    cout << "coloca " << endl;
    cuenAtras(cuenta - 1);
}
int main()
{
    cuenAtras(6);

    return 0;
}