#include <iostream>

using namespace std;

int incrementarPorValor(int numero)
{
    numero++;
    return numero;
}
void incrementarPorReferencia(int &numero)
{
    numero++;
}

int main()
{
    int numeroOriginal = 7;

    int resultadoPasoPorValor = incrementarPorValor(numeroOriginal);
    cout << "Valor original: " << numeroOriginal << endl;
    cout << "Por valor: " << resultadoPasoPorValor << endl;

    int numeroReferencia = 7;
    incrementarPorReferencia(numeroReferencia);
    cout << "Por referencia: " << numeroReferencia << endl;

    return 0;
}