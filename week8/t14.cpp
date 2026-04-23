#include <iostream>
using namespace std;

void convert(int num);

int main()
{
    int num = 0;
    cout << "enter 2 digit number: ";
    cin >> num;

    convert(num);

    return 0;
}

void convert(int num)
{

    if (num >= 11 && num <= 19)
    {
        if (num == 11)
            cout << "eleven";
        else if (num == 12)
            cout << "twelve";
        else if (num == 13)
            cout << "thirteen";
        else if (num == 14)
            cout << "fourteen";
        else if (num == 15)
            cout << "fifteen";
        else if (num == 16)
            cout << "sixteen";
        else if (num == 17)
            cout << "seventeen";
        else if (num == 18)
            cout << "eighteen";
        else if (num == 19)
            cout << "nineteen";
    }

    else
    {
        int num1 = num / 10;
        int num2 = num % 10;
        if (num1 == 1)
        {
            cout << "one";
        }
        if (num1 == 2)
        {
            cout << "twenty ";
        }
        if (num1 == 3)
        {
            cout << "thirty ";
        }
        if (num1 == 4)
        {
            cout << "forty ";
        }
        if (num1 == 5)
        {
            cout << "fifty ";
        }
        if (num1 == 6)
        {
            cout << "sixty ";
        }
        if (num1 == 7)
        {
            cout << "seventy ";
        }
        if (num1 == 8)
        {
            cout << "eighty ";
        }
        if (num1 == 9)
        {
            cout << "ninety ";
        }

        if (num1 == 1)
        {
            cout << "one";
        }
        if (num2 == 2)
        {
            cout << "two";
        }
        if (num2 == 3)
        {
            cout << "three";
        }
        if (num2 == 4)
        {
            cout << "four";
        }
        if (num2 == 5)
        {
            cout << "five";
        }
        if (num2 == 6)
        {
            cout << "six";
        }
        if (num2 == 7)
        {
            cout << "seven";
        }
        if (num2 == 8)
        {
            cout << "eight";
        }
        if (num2 == 9)
        {
            cout << "nine";
        }
    }
}