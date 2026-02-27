#include <iostream>
using namespace std;
main(){

float bagweight;
cout<<"ENTER BAG WEIGHT (POUNDS): ";
cin>>bagweight;

float bagprice;
cout<<"ENTER BAG PRICE ($): ";
cin>>bagprice;

float area;
cout<<"ENTER AREA (SQUARE FEET) THE BAG COVERS: ";
cin>>area;

float fperp;
fperp= bagprice/bagweight;
cout<<"COST OF FERTILISER PER POUND IS:$"<<fperp;

cout<<endl;
float cpera;
cpera= bagprice/area;
cout<<"PRICE OF FERTILISER PER SQUARE FOOT IS:$ "<<cpera;

}