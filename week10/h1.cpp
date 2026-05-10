#include <iostream>
#include <windows.h>
using namespace std;

void printMaze()
{
    cout << "#############################################" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#############################################" << endl;
}

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
// player character
char box = 219;
char tank1[6] = {box, box, box, '-', '-', '>'};
char tank2[6] = {'0', ' ', '0', ' ', ' ', ' '};

// enemy character
char enemy1[6] = {' ', ' ', ' ', '-', '-', '-'};
char enemy2[6] = {'<', '=', '=', '(', '-', ')'};
char enemy3[6] = {' ', ' ', ' ', '\\', '@', '/'};
char enemy4[6] = {' ', ' ', ' ', '*', '*', '*'};

//player coordinates
int tankX = 5;
int tankY = 5;

//enemy coordinates
int enemyX = 30;
int enemyY = 10;

void printTank(){
    gotoxy(tankX, tankY);
    for(int index = 0; index < 6; index++){
        cout<<tank1[index];
    }
    gotoxy(tankX,tankY + 1);
    for(int index = 0; index < 6; index++){
        cout<<tank2[index];
    }
}

void printEnemy(){
    gotoxy(enemyX,enemyY);
    for(int index = 0; index < 6; index++){
        cout<<enemy1[index];
    }
    gotoxy(enemyX, enemyY + 1);
    for(int index = 0; index < 6; index ++){
        cout<<enemy2[index];
    }
    gotoxy(enemyX,enemyY + 2);
    for(int index = 0; index < 6; index++){
        cout<<enemy3[index];
    }
    gotoxy(enemyX,enemyY + 3);
    for(int index = 0; index < 6; index++){
        cout<<enemy4[index];
    }
}

void moveTankLeft()
{
    char next = getCharAtxy(tankX - 1, tankY);
    if(next ==' ')
    {
        eraseTank();
        tankX = tankX - 1;
        printTank();
    }
}
void moveTankRight()
{
    char next = getCharAtxy(tankX + 6, tankY);
    if(next == ' '){
        eraseTank();
        tankX = tankX + 1;
        printTank();
    }
}
void moveTankUp()
{
    char next = getCharAtxy(tankX, tankY - 1);
    if(next == ' ')
}
