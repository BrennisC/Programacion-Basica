#include <iostream>
using namespace std;
class movil;
class Android
{
private:
    string name_version;
    float ram;

public:
    Android() = default;
    Android(string nv, float rm) : name_version(nv), ram(rm) {}
    friend class movil;
};
class movil
{
private:
    string model_movil;

public:
    movil() = default;
    movil(string mm) : model_movil(mm) {}
    void strat_movil(movil &mv, Android &b)
    {
        cout << "Ingresa la version de andriod para movil: ";
        cin >> b.name_version;

        cout << "Ingresa cuanto de ram deseas almacenar : ";
        cin >> b.ram;

        cout << "Ingresa el modelo del celular : ";
        cin >> mv.model_movil;
    }
};
int main()
{
    movil mv;
    Android ad;
    mv.strat_movil(mv, ad);
    return 0;
}