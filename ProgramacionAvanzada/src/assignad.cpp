#include <type_traits>
#include <iostream>

using namespace std;

template <typename T>

void print_if_intergral(const T &value)
{
    if constexpr (is_integral_v<T>)
    {
        cout << "Value is integral: " << value << endl;
    }
    else
    {
        cout << "Value is not integral: " << value << endl;
    }
}

int main()
{
    print_if_intergral(3);
    print_if_intergral(3.0);

    return 0;
}