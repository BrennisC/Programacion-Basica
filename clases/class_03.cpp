#include <iostream>

#include <string>

using namespace std;

int main(void)
{
    string the_string;
    for (char c = 'A'; c <= 'Z'; c++)
        the_string.push_back(c);
    cout << the_string << endl;
    return 0;
}