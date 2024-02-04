#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#define BLUE "\033[34m"
using namespace std;
void gotoxy(int x, int y)
{
    HANDLE hcon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hcon, dwPos);
}
class PUNTOS
{
private:
    int x, y; // coordenadas del punto
public:
    PUNTOS(int _x, int _y);
    void pintar() const;
    void mover();
};
PUNTOS ::PUNTOS(int _x, int _y)
{
    x = _x;
    y = _y;
}
void PUNTOS::pintar() const
{
    gotoxy(x, y);
    BLUE;
    cout << "*";
}
void PUNTOS ::mover()
{
    char tecla = getch();
    if (tecla == 'j')
        x--;
    else if (tecla == 'l')
        x++;
    else if (tecla == 'k')
        y++;
    else if (tecla == 'i')
        y--;
}
int main()
{
    PUNTOS A(10, 10);
    system("cls");
    while (true)
    {

        A.pintar();
        A.mover();
        Sleep(50);
    }

    return 0;
}