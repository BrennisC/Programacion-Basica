/*Palíndromos: Desarrolla un programa que verifique si una palabra ingresada por el usuario es un palíndromo (se lee igual de izquierda a derecha que de derecha a izquierda). Usa un bucle while o for para comparar los caracteres. */
#include <iostream>
using namespace std;
bool palabraPalindromos(const string &palabra)
{
    int longitud = palabra.length();
    for (int i = 0; i < longitud / 2; ++i) {
        if (palabra[i] != palabra[longitud - i - 1]) {
            return false;
        }
    }
    return true;
}
int main()
{
    string palabra = "somos";

    if (palabraPalindromos(palabra)){
        cout<<"La palabra es palindromo"<<endl;
    }else{
        cout<<" La palabra no es palidromo"<<endl;
    }
    return 0;
}