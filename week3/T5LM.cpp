#include <iostream>
using namespace std;
main(){

cout<<"ENTER CHARGE (Q) IN COULOMBS: ";
float charge;
cin>>charge;

cout<<"ENTER TIME (t) IN SECONDS: ";
float time;
cin>>time;

float current;
current = charge/time;
cout<<"THE CURRENT (I) IS: " <<current<< " Amperes";
}