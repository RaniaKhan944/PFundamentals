#include <iostream>
using namespace std;
main(){

string name;
cout<<"ENTER NAME: ";
cin>>name;

float wloss;
cout<<"ENTER TARGET WEIGHT LOSS IN KGS: ";
cin>>wloss;

float days;
days = wloss * 15;

cout<<endl;
cout<<name<<" will need "<<days<<" days to lose "<<wloss<<"kgs.";

}