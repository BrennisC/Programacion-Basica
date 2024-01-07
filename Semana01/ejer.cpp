#include <iostream>

using namespace std; 
const float PI = 3.14;
void areaCircular(){
    float r, longitud;

    cout<<"Ingrese el radio ";
    cin>>r;

    longitud=2*PI*r;
    cout<<"La longitud es : "<<longitud<<endl;
}
int main(){

    areaCircular();

    return  0;

}