#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    string text = "Hello, my email is example@emial.com and my phone number is 123-456-7890";

    regex __empty_not_finals = regex("([a-zA-Z0-9]+)@([a-zA-Z0-9]+)(\\.)([a-zA-Z0-9]+)");

    smatch match;

    if (regex_search(text, match, __empty_not_finals))
    {
        cout << "Email found: " << match[0] << endl;
    }
    return 0;
}
