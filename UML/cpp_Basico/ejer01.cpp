#include <iostream>
#include <thread>
using namespace std;
int main()
{
    int id{1};
    int numIteraciones {5};
    thread ti{[id, numIteraciones]{
        for(int i {0} ; i < numIteraciones  ; ++i)
        {
            cout << "Contador "<< id << " tiene valor "<< i << endl;
        }

    }};
    ti.join();
}