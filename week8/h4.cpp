#include <iostream>
using namespace std;

int calculateSalary(float base, int score, int experience);

int main()
{
    float base = 0.00;
    int score = 0, experience = 0;

    cout << "ENTER BASE, SCORE AND EXPERIENCE IN YEARS: ";
    cin >> base;
    cin >> score;
    cin >> experience;

    int answer = calculateSalary(base, score, experience);
    cout << "FINAL SALARY: " << answer;

    return 0;
}
int calculateSalary(float base, int score, int experience)
{
    float bonus = 0.00;
    float expbonus = 0.00;
    if (score >= 90)
    {
        bonus = base * 0.2;
    }
    else if (score >= 75 && score <= 89)
    {
        bonus = base * 0.1;
    }
    else
    {
        bonus = base * 0.05;
    }
    if (experience >= 5)
    {
        expbonus = base * 0.05;
    }
    int finalsalary = base + bonus + expbonus;
    return finalsalary;
}