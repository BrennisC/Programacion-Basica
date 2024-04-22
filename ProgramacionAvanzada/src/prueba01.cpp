#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    time_t result = time(nullptr);
    cout << asctime(localtime(&result)) << result << " seconds since the Epoch\n";

    return 0;
}