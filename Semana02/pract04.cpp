#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int suma, D, n;
    do
        cin>>n;
        while(n<=0);
        D= 0; suma =0;

    while(D<n){
        D+= 1;
        suma +=D;
    }
    cout<<suma;
    return 0;
}