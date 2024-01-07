/*Juego de Preguntas y Respuestas: Crea un juego de preguntas y respuestas donde el programa haga preguntas al usuario y luego evalúe las respuestas. Mantén un contador de respuestas correctas e incorrectas. */
#include <iostream>
using namespace std;
int main()
{
    int contadorCorrecto = 0;
    int contadorIncorrecto = 0;

    cout << "¿Cual es la capital del Peru?\n";
    cout << "a) La Paz\tb) Buenos Aires\tc) Lima" << endl;

    char respuesta1;
    cin >> respuesta1;
    if (respuesta1 == 'c' || respuesta1 == 'C')
    {
        cout << "Respuesta correcta!" << endl;
        contadorCorrecto++;
    }
    else
    {
        cout << "Respuesta incorrecta." << endl;
        contadorIncorrecto++;
    }

    cout << "¿Cual es el oceano mas grande del mundo?\n";
    cout << "a) Oceano Pacifico\tb) Oceano Indico\tc) Oceano Atlantico" << endl;

    char respuesta2;
    cin >> respuesta2;
    if (respuesta2 == 'a' || respuesta2 == 'A')
    {
        cout << "Respuesta correcta!" << endl;
        contadorCorrecto++;
    }
    else
    {
        cout << "Respuesta incorrecta." << endl;
        contadorIncorrecto++;
    }

    cout << "¿Cual es el pais mas grande del mundo? \n";
    cout << "a) China\tb) Rusia\tc) India" << endl;

    char respuesta3;
    cin >> respuesta3;
    if (respuesta3 == 'b' || respuesta3 == 'B')
    {
        cout << "Respuesta correcta!" << endl;
        contadorCorrecto++;
    }
    else
    {
        cout << "Respuesta incorrecta." << endl;
        contadorIncorrecto++;
    }

    cout << "¿Cual es el pais que tiene forma de bota?\n";
    cout << "a) España\tb) Honduras\tc) Italia" << endl;

    char respuesta4;
    cin >> respuesta4;
    if (respuesta4 == 'c' || respuesta4 == 'C')
    {
        cout << "Respuesta correcta!" << endl;
        contadorCorrecto++;
    }
    else
    {
        cout << "Respuesta incorrecta." << endl;
        contadorIncorrecto++;
    }

    cout << "La respuestas correctas son : " << contadorCorrecto << endl;
    cout << "La repuestas incorrectas son : " << contadorIncorrecto << endl;
    return 0;
}