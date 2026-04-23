#include <iostream>
using namespace std;

bool ish(int num);

int main()
{
    int num = 0;
    cout << "ENTER A 5-DIGIT NUMBER: ";
    cin >> num;

    bool ans = ish(num);
    if (ans == true)
    {
        cout << "EVENISH";
    }
    else
    {
        cout << "ODDISH";
    }
    return 0;
}

bool ish(int num)
{
    int num1 = num % 10;
    int newnum = num / 10;
    int num2 = newnum % 10;
    newnum = newnum / 10;
    int num3 = newnum % 10;
    newnum = newnum / 10;
    int num4 = newnum % 10;
    newnum = newnum / 10;
    int num5 = newnum;

    int sum = num1 + num2 +num3 + num4 + num5;
    if (sum % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

