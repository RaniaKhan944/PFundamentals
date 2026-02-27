#include <iostream>
using namespace std;
main(){

cout<<"ENTER NUMBER OF WINS: ";
int win;
cin>>win;
win= win*3;

cout<<"ENTER NUMBER OF DRAWS: ";
int draw;
cin>>draw;
draw= draw*1;

cout<<"ENTER NUMBER OF LOSSES: ";
int loss;
cin>>loss;
loss= loss*0;

int total;
total = win + draw + loss;
cout<<"Pakistan obtained "<<total<<"score in the tournament.";

}

