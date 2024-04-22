#include <iostream>
#include <string>

using namespace std;

int main()
{
    basic_string<char> str = "String";

    const char *cpstr = "C-string";
    const char carr[] = "Two and one";

    string output;

    output.append(3, '%');

    cout << output << endl;
}
