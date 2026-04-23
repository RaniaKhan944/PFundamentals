#include <iostream>
using namespace std;

float totalwaterfilled(float p1, float p2, int h);
float percentage(int v, int h, float p1, float p2, float totalwater);
float overflow(int v, int totalwater, float p1,float p2);

int main()
{
    float v = 0, p1 = 0, p2 = 0;
    int h = 0;
    cout << "Volume of pool(litres) = ";
    cin >> v;
    cout << "Flow rate of first piper(per hour) = ";
    cin >> p1;
    cout << "Flow rate of second piper(per hour) = ";
    cin >> p2;
    cout << "Hours for worker's absence = ";
    cin >> h;

    float waterfilled = totalwaterfilled(p1, p2, h);
    if (waterfilled <= v)
    {
         percentage(v, h, p1, p2,waterfilled);
    }
    else
    {
        overflow(v, waterfilled, p1, p2);
    }
    return 0;
}

float totalwaterfilled(float p1, float p2, int h)
{
    float totalwater = (p1 + p2) * h;
    return totalwater;
}
float percentage(int v, int h, float p1, float p2, float totalwater)
{
    float poolpercent = (totalwater / v) * 100;
    float p1percent = ((p1 * h) / totalwater) * 100;
    float p2percent = ((p2 * h) / totalwater) * 100;
    cout << "POOL IS " << poolpercent << "% FILLED. PIPE 1: " << p1percent << "% AND PIPE 2: " << p2percent << "%";
    return 0.00;
}
float overflow(int v, int totalwater, float p1, float p2)
{
    float over = totalwater - v;
    float extraHours = over / (p1 + p2);
    cout << "Overflow by " << over << " litres for " << extraHours << " hours.";
}