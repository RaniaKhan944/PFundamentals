#include <iostream>
using namespace std;
main(){
string studentname;
cout<<"ENTER STUDENT NAME: ";
cin>>studentname;

float matricm, interm, ecatm, aggregate;
cout<< "ENTER MATRIC MARKS(out of 1100): ";
cin>>matricm;

cout<< "ENTER INTER MARKS(out of 550): ";
cin>>interm;

cout<<"ENTER ECAT MARKS(out of 400): ";
cin>>ecatm;

cout<<endl;
float one= (ecatm/400)*50;
cout<<one<<endl;

float two= (interm/550)*40;
cout<<two<<endl;

float three= (matricm/1100)*10;
cout<<three<<endl;



cout<<endl;
float answer; 
answer= one + two +three;
cout<<"aggregate is: "<<answer<<"%";

}
