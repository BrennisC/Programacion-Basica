#include <iostream>
using namespace std;
int main(){
    float num1, num2;
    char opc;

    cout<<"Ingrese su operacion *, /, +, -";
    cin>>opc;

    cout<<"Ingrese su primer numero: ";
    cin>>num1;

    cout<<"Ingrese su segundo numero: ";
    cin>>num2;

    switch (opc)
    {
    case '+':
        cout<<"La suma es : "<<num1 + num2<<endl;
        break;
    
    case '-':
        cout<<"La resta es : "<<num1 - num2<<endl;
        break;
    case '/':
        if (num2!=0){
            cout<<"La division es : "<<num1/num2<<endl;
        }else {
            cout<<"Error";
        }
    case '*':
        cout<<"La multiplcacion es : "<<num1*num2;

    
    default:
        break;
    }

    return 0;
}