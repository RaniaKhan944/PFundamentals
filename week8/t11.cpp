#include <iostream>
using namespace std;

bool issymmetric(int num);

int main()
{
    int num;
    cout << "ENTER 3 DIGIT NUMBER: ";
    cin >> num;

    bool ans = issymmetric(num);
    if (ans == true)
    {
        cout << "is symmetric";
    }
    else
    {
        cout << "not symmetric";
    }

    return 0;
}

bool issymmetric(int num)
{
    int num1 = num % 10;
    int newnum = num / 10;
    int num2 = num % 10;
    newnum = newnum / 10;
    int num3 = newnum;

    if (num1 == num3)
    {
        return true;
    }
    else
    {
        return false;
    }
}
