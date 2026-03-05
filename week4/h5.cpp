#include <iostream>
using namespace std;
main(){

    int holidays;
    cout<<"ENTER HOLIDAYS: ";
    cin>>holidays;

    int workday,currentnorm;
    workday = 365 - holidays;
    currentnorm = 30000;

    float playtime,difference;
    playtime = (workday * 63) + (holidays * 127);
    difference = currentnorm - playtime;

    if(playtime <= currentnorm){
        cout<<"TOM SLEEPS WELL";
        difference = difference/60;
        min = (difference * 100) % 100;
        
    }


}