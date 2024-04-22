#include <iostream>
#include <thread>

using namespace std;
void thread_function()
{
    cout << "Hola" << endl;
}
int main()
{

    thread t(thread_function);

    t.join();

    return 0;
}