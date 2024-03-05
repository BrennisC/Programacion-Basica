#include <iostream>
using namespace std;
float show(float a, float b)
{
    if (b == 0)
        throw string("Error! Division by zero");
    return a / b;
}
int main()
{
    float a, b;
    while (cin >> a)
    {
        try
        {
            cin >> b;
            cout << show(a, b) << endl;
        }
        catch (string &problem)
        {
            cout << "Look what you did, you bad";
            cout << problem << endl;
        }
    }
}