#include <iostream>

#include <string>

using namespace std;

int main(void)
{
    string the_string;
    cout << "Ingrese su palabra: ";
    getline(cin, the_string);
    for (int i = 0; i < the_string.length(); i++)
        the_string[i] = the_string[i] - 'a' + 'A';
    cout << the_string << endl;
    return 0;
}