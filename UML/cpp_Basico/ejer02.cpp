#include <iostream>
#include <thread>
using namespace std;
class Consulta
{
public:
    Consulta(int id) : m_id{id} {}
    void proceso() { cout << "Procesando consulta " << m_id << endl; }

private:
    int m_id;
};
int main()
{
    Consulta cons{100};
    thread t{&Consulta ::proceso, &cons};
    t.join();
}