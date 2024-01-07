#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> miCola;

    miCola.push("Brennis Castro");
    miCola.push("Benjaminn Cano");
    miCola.push("Simon Puerta");

    cout << "Cola actual:\n";
    while (!miCola.empty())
    {
        cout << miCola.front() << "\n";
        miCola.pop();
    }
    cout << endl;
}