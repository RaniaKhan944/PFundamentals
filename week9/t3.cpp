#include <iostream>
using namespace std;
void toyotablue(int cars[][5], int rowsize);
void redcars(int cars[][5], int rowsize);
void nissancars(int cars[][5], int rowsize);
void converter(int cars[][5], int rowsize, string color);
void flip(int cars[][5], int rowsize);

int main()
{
    const int rowsize = 5;
    const int colsize = 5;
    int cars[rowsize][colsize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}};

    cout << "BLUE TOYOTAS: ";
    toyotablue(cars, rowsize);
    cout << "\nTOTAL RED CARS: ";
    redcars(cars, rowsize);
    cout << "\nTOTAL NISSAN CARS: ";
    nissancars(cars, rowsize);
    string color;
    cout << "\nENTER COLOR: ";
    cin >> color;
    converter(cars, rowsize, color);

    cout << "\nFlipped matrix: "<<endl;
    flip(cars, rowsize);

    return 0;
}

void toyotablue(int cars[][5], int rowsize)
{
    cout << cars[2][3];
}
void redcars(int cars[][5], int rowsize)
{
    int sum = 0;
    for (int row = 0; row < 5; row++)
    {
        sum = sum + cars[row][0];
    }
    cout << sum;
}
void nissancars(int cars[][5], int rowsize)
{
    int sum = 0;
    for (int col = 0; col < 5; col++)
    {
        sum = sum + cars[5][col];
    }
    cout << sum;
}

void converter(int cars[][5], int rowsize, string color)
{
    int sum = 0;

    if (color == "red")
    {

        for (int row = 0; row < 5; row++)
        {
            sum = sum + cars[row][0];
        }
        cout << "total red = " << sum;
    }
    else if (color == "black")
    {

        for (int row = 0; row < 5; row++)
        {
            sum = sum + cars[row][1];
        }
        cout << "total black = " << sum;
    }
    else if (color == "brown")
    {
        for (int row = 0; row < 5; row++)
        {
            sum = sum + cars[row][2];
        }
        cout << "total brown = " << sum;
    }

    else if (color == "blue")
    {
        for (int row = 0; row < 5; row++)
        {
            sum = sum + cars[row][3];
        }
        cout << "total blue = " << sum;
    }
    if (color == "grey")
    {
        for (int row = 0; row < 5; row++)
        {
            sum = sum + cars[row][4];
        }
        cout << "total grey = " << sum;
    }
}

void flip(int cars[][5], int rowsize)
{
    for (int x = 0; x < rowsize; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cars[y][x] = cars[x][y];
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << cars[y][x] << "\t";
                
                    
                }
                cout<<endl;
            }
        }
    }
}
