#include <iostream>
using namespace std;

int timetravel(int h, int m);

int main(){
    int hours =0, mins = 0;
    cout<<"ENTER HOURS (24-HOUR FORM): ";
    cin>>hours;
    cout<<"ENTER MINUTES: ";
    cin>>mins;

    timetravel(hours,mins);


    return 0;}

int timetravel(int hours, int mins){
    mins = mins + 15;
      if(mins>=60){
        mins = mins - 60;
        hours = hours + 1;
    }
    if(hours>=24){
        hours = hours - 24;
    }
   
    if(hours<10){
        cout<<"0";
    }
    cout<<hours<<":";

    if(mins<10){
        cout<<"0";
    }
    cout<<mins;

  
return 0;
}
