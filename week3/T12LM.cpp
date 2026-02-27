#include <iostream>
using namespace std;

main(){
int pop;
cout<<"ENTER CURRENT POPULATION: ";
cin>>pop;

int birth;
cout<<"ENTER MONTHLY BIRTH RATE: ";
cin>>birth;

int newpop;
newpop = ((birth*12)*30) + pop;
cout<<"POPULATION IN 3 DECADES WILL BE: "<<newpop;
}