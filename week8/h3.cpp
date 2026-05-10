#include <iostream>
#include <cmath>
using namespace std;

string projectTimeCalculation(float hours, int days, int workers);

int main()
{
    float hours;
    int days, workers;
    cout << "ENTER NEEDED HOURS: ";
    cin >> hours;
    cout << "ENTER DAYS: ";
    cin >> days;
    cout << "ENTER NO. OF WORKERS: ";
    cin >> workers;

    projectTimeCalculation(hours, days, workers);

    return 0;
}

string projectTimeCalculation(float hours, int days, int workers)
{
    float newdays = 0.90 * days;
    float totalhours = newdays * 10;

    if (totalhours < hours)
    {
        float extratime = hours - totalhours ;
        extratime = floor(extratime);
        cout << "NOT ENOUGH! " << extratime << " HOURS ARE NEEDED!";
    }
    else
    {
        float remainingtime = totalhours - hours;
        remainingtime = floor(remainingtime);
        cout << "YES! " << remainingtime << " HOURS ARE LEFT!";
    }
    return "DONE";
}
