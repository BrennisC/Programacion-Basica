#include <cctype>
#include <climits>
#include <iostream>
using namespace std;

int main()
{
    for (int c = 0; UCHAR_MAX >= c; ++c)
        if (isxdigit(c))
            cout << static_cast<float>(c);

    cout << '\n';
}