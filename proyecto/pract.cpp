#include <iostream>
using namespace std;

int main()
{

    int number1, number2;

    int max;

    cin >> number1;
    cin >> number2;

    max = number1;

    if (number2 > max)
        max = number2;

    cout << "The larger number is " << max << endl;

    return 0;
}