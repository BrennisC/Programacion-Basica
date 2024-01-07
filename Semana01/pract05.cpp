#include <iostream>
using namespace std;

int main(){
    int edad;
    cout<<"Ingrese su edad: ";
    cin>>edad;

    if((edad>=18)&&(edad<=25)){
        cout<<"Su edad se encuentra en el rango de [18,20]. ";
    }else{
        cout<<"Su edad no esta en el rango. ";
    }

    return 0;
}