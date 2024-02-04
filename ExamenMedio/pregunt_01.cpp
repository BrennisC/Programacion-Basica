#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    vector<char> letras = {'b', 'r', 'e', 'n', 'n', 'i', 's'};

    int vocales = 0;
    int consonantes = 0;

    for (char letra : letras)
    {
        if (tolower(letra) == 'a' || tolower(letra) == 'e' || tolower(letra) == 'i' || tolower(letra) == 'o' || tolower(letra) == 'u')
        {
            vocales++;
        }
        else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z'))
        {
            consonantes++;
        }
    }

    cout << "Número de vocales: " << vocales << endl;
    cout << "Número de consonantes: " << consonantes << endl;

    return 0;
}