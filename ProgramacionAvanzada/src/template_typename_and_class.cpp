#include <iostream>
#include <vector>
using namespace std;

template <typename T>

void printValue(const T &value)
{
    typename T::value_type v = value[3];

    cout << "Value: " << v << endl;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    printValue(vec);

    return 0;
}