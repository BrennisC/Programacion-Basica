#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> miPila;

    miPila.push("Brennis");
    miPila.push("Castro");
    miPila.push("Benjaminn");


    cout<<"Elemento en la cima de la pila: "<<miPila.top()<<endl;

    miPila.pop();

    if(miPila.empty()){
        cout<<"La pila esta vacia. "<<endl;

    }else{
        cout<<"La pila no esta vacia"<<endl;
    }

    return 0;
}