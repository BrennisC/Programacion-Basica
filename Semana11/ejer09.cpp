#include <iostream>
#include <vector>

using namespace std;

class House
{
private:
    string name_house;
    string name_dir;
    float quantity_house;

public:
    House() = default;
    House(string nh, string nd, float qh) : name_house(nh), name_dir(nd), quantity_house(qh) {}
    string getHome() { return name_house; }
    string getHomeDir() { return name_dir; }
    int getQuantity() { return quantity_house; }
};

class HouseRegistry
{
private:
    vector<House> houses;

public:
    HouseRegistry() = default;
    HouseRegistry(vector<House> h) : houses(h) {}
    vector<House> getHouses() { return houses; }
    static void houseRegistry()
    {
        int quantity;

        cout << "Ingrese el numero de casas: ";
        cin >> quantity;

        for (int i = 0; i < quantity; i++)
        {
            string name_house, name_dir;
            float quantity_house;

            cout << "Ingrese el nombre de la casa: ";
            cin >> name_house;

            cout << "Ingrese la direccion de la casa: ";
            cin >> name_dir;

            cout << "Ingrese el precio de la casa: ";
            cin >> quantity_house;

            HouseRegistry hr;

            hr.getHouses().push_back(House(name_house, name_dir, quantity_house));
        }
    }
};

int main()
{

    HouseRegistry ::houseRegistry();
    return 0;
}