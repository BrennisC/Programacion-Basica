#include <iostream>
using namespace std;

template <class T>

class ValueData
{
private:
    T value;

public:
    ValueData(T value) : value(value) {}
    T getValue() { return value; }
};

int main()
{
    ValueData<int> v(10);

    cout << "The value is : " << v.getValue() << endl;
    return 0;
}