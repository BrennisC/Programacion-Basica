#include <iostream>
#include <memory>

using namespace std;

int main()
{

    unique_ptr<int> uniquePtr = make_unique<int>(42);

    cout << "uniquePtr: " << *uniquePtr << endl;

    shared_ptr<int> sharedPtr = make_shared<int>(42);

    cout << "sharedPtr: " << *sharedPtr << endl;

    return 0;
}