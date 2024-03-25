// Opereciones atomicas nos ayudan a  realizar operaciones simples sin tener que crear una función completa para hacerlo.

#include <iostream>
#include <atomic>
#include <thread>

using namespace std;

atomic<int> contador(0);

void incrementar()
{
    for (int i = 0; i < 1000; ++i)
    {
        contador.fetch_add(2, memory_order_relaxed);
    }
}

int main()
{
    thread t1(incrementar);
    thread t2(incrementar);

    t1.join();
    t2.join();

    cout << "El valor final del contador  es: " << contador << endl;

    return 0;
}