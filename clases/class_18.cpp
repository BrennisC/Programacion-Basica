#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));
    setlocale(LC_ALL, "es_ES.UTF-8");
    int numAleatorio = rand() % 100 + 1;
    int numeroUsuario;
    int i;

    cout << "Bienvenido al juego Adivina el Número!" << endl;

    for (i = 1; i <= 10; ++i)
    {

        cout << "Intento " << i << ": Ingresa un número entre 1 y 100: ";
        cin >> numeroUsuario;

        if (numeroUsuario == numAleatorio)
        {
            cout << "¡Felicidades! Has adivinado el número en " << i << " intentos " << endl;
            break;
        }
        else if (numeroUsuario > numAleatorio)
        {
            cout << "Demasiado alto. Intenta nuevamente." << endl;
        }
        else
        {
            cout << "Demasiado bajo. Intenta nuevamente." << endl;
        }
    }

    if (i > 10)
    {
        cout << "Lo siento, has agotado tus 10 ii. El número era: " << numAleatorio << endl;
    }

    return 0;
}
