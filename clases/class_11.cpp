#include <iostream>

using namespace std;

namespace Universe
{
    int Galaxy = 1;
}
namespace Universe
{
    int Planet = Galaxy + 2;
}
int main()
{
    Universe ::Galaxy *= 2;
    {
        using namespace Universe;
        Planet++;
    }

    cout << Universe ::Galaxy << Universe : : Planet;
}