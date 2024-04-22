#include <iostream>
#include <thread>
#include <atomic>
using namespace std;
atomic<int> contador(0);

void incremento()
{
    for (int i = 0; i < 100; i++)
    {
        contador.fetch_add(2, memory_order_relaxed);
    }
}
int main()
{
    thread t1(incremento), t2(incremento);

    t1.join();
    t2.join();

    cout << "El valor del contador es " << contador << " ";
    return 0;
}