#include <iostream>
#include <cmath>
using namespace std;

int main (){
    printf("*****Calculo_del_Area_Trapecio*****\n");

    int B, b, h;
    float area;

    cout<<"Ingrese la base mayor: ";
    cin>>B;

    cout<<"Ingrese la base menor: ";
    cin>>b;

    cout<<"Ingrese su altura: ";
    cin>>h;

    area=((b + B)*h)/2;

    cout<<"El area del trapecio es : "<<area<<endl;

    return 0;
}