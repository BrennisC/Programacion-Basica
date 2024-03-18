#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Usuario
{
private:
    string user_id;
    string password;
    string LoginStatus;
    string registerDate;

public:
    Usuario(string ui, string pss, string lS, string rD) : user_id(ui), password(pss), LoginStatus(lS), registerDate(rD) {}

    bool verifyLogin()
    {
        return true;
    }
};
class Administrador : public Usuario
{
private:
    string adminName;
    string email;

public:
    Administrador(string ui, string pss, string lS, string rD, string adM, string ema) : Usuario(ui, pss, lS, rD), adminName(adM), email(ema) {}
    bool updateCatalog()
    {
        return true;
    }
};

class InformacionEnvio
{
private:
    int shippingldId;
    string shippingType;
    int shippingCost;
    int shippingRegionId;

public:
    InformacionEnvio(int spI, string shT, int shC, int shR) : shippingldId(spI), shippingType(shT), shippingCost(shC), shippingRegionId(shR) {}
    void updateShippingInfo()
    {
        cout << "Ingrese el id del envio" << endl;
        cin >> shippingldId;
        cout << "Ingrese el tipo de envio" << endl;
        getline(cin, shippingType);
        cout << "Ingrese el costo del envio" << endl;
        cin >> shippingCost;
        cout << "Ingrese la region a la que se dirigira el envío (1-Región 2 - Región 3)" << endl;
        cin >> shippingRegionId;
    }
};

class DetallesPedido
{
private:
    int orderId;
    int productId;
    string productName;
    int quantity;
    float unitCost;
    float subtotal;

public:
    DetallesPedido(int orI, int prI, string pN, int qt, float uC, float st) : orderId(orI), productId(prI), productName(pN), quantity(qt), unitCost(uC), subtotal(st) {}
    void CalcularPrecio()
    {
        cout << "La orden es " << orderId << endl;
        cout << "Nombre del producto " << productId << endl;
        subtotal = quantity * unitCost;
        cout << "El todad de producto es : " << subtotal << endl;
    }
};

class Pedido
{
private:
    int orderID;
    string dateCreated;
    string dateShipped;
    string customerName;
    string customerld;
    string status;
    string shippingld;
    InformacionEnvio envio;
    DetallesPedido detalleEnvio;

public:
    Pedido(int iD, string sC, string dS, string cN, string cI, string st, string sI, InformacionEnvio e, DetallesPedido dE) : orderID(iD), dateCreated(sC), dateShipped(dS), customerName(cN), customerld(cI), status(st), shippingld(sI), envio(e), detalleEnvio(dE) {}
    void placeOrder()
    {
        cout << "ID :" << orderID << endl;
        cout << "Fecha de la creacion " << dateCreated << endl;
        cout << "Fecha de envio " << dateShipped << endl;
        cout << "Nombre del cliente : " << customerName << endl;
        cout << "Telefono : " << customerld << endl;
        cout << "Estado del pedido : " << status << endl;
        cout << "Informacion de envio:" << endl;
        envio.updateShippingInfo();
        detalleEnvio.CalcularPrecio();
    }
};

class Carrito_de_Compras
{
private:
    int cartID;
    int productID;
    int quantity;
    int dateAdded;

public:
    Carrito_de_Compras(int cI, int pD, int qt, int dA) : cartID(cI), productID(pD), quantity(qt), dateAdded(dA) {}
    void addCantItem() {}
    void UpdateQuantity() {}
    void viewCartDetalls() {}
    void checkOut() {}
};

class Cliente : public Usuario
{
private:
    string customerName;
    string address;
    string email;
    string creditCardinfo;
    string shippingInfo;
    string accountBalance;
    vector<Carrito_de_Compras> shoppingCart;
    vector<Pedido> pedidos;

public:
    Cliente(string ui, string pss, string lS, string rD, string cN, string add, string em, string cd, string sI, string aB, vector<Carrito_de_Compras> &sC, vector<Pedido> &p) : Usuario(ui, pss, lS, rD), customerName(cN), address(add), email(em), creditCardinfo(cd), shippingInfo(sI), accountBalance(aB), shoppingCart(sC), pedidos(p) {}
    vector<Pedido> getPedidos() { return pedidos; }
    vector<Carrito_de_Compras> getCarritoCart() { return shoppingCart; }
    void registar() {}
    void login() {}
    void updateProfile() {}
};

int main()
{
    InformacionEnvio e(17, " Ropa", 18.2, 774);
    DetallesPedido dp(7, 350.99, "Negro", 15, 182.6, 18.5);
    vector<Pedido> pedidos;
    for (int i = 0; i < 3; ++i)
    {

        int orderID = i + 1;
        string dateCreated = "2024-03-15";
        string dateShipped = "2024-03-20";
        string customerName = "Cliente " + to_string(i + 1);

        string customerID = "CID" + to_string(i + 1);

        string status = "En proceso";

        string shippingID = "SID" + to_string(i + 1);

        Pedido pedido(orderID, dateCreated, dateShipped, customerName, customerID, status, shippingID, e, dp);
        pedidos.push_back(pedido);

        pedido.placeOrder();
    }

    return 0;
}