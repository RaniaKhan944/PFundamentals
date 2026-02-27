#include <iostream>
using namespace std;
main(){
cout<<"ENTER VOLTAGE (volts): ";
float volt;
cin>>volt;

cout<<"ENTER CURRENT (amperes): ";
float current;
cin>>current;

cout<<endl;

float power;
power= current*volt;
cout<<"POWER IS: "<<power<<" watts";

}