#include <iostream>
#include <cmath>
using namespace std;

void areaCircular()
{
    float r, longitud;

    cout << "Ingrese el radio ";
    cin >> r;

    longitud = 2.0 * M_PI * r;
    cout << "La longitud es : " << longitud << endl;
}
int main()
{

    areaCircular();

    return 0;
}