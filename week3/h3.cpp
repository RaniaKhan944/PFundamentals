#include <iostream>
using namespace std;
main(){

 float i;
 cout<<"ENTER INITAL VELOCITY (m/s)= ";
 cin>>i;

 float a;
 cout<<"ENTER ACCELERATION (m/s^2)= ";
 cin>>a;

 float t;
 cout<<"ENTER TIME (s)= ";
 cin>>t;

 float v;
 v= (a*t)+i;

 cout<<endl; 

 cout<<"FINAL VELOCITY= "<<v;


}