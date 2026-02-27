#include <iostream>
using namespace std;
main(){

string moviename;
cout<<"ENTER MOVIE NAME: ";
cin>>moviename;

int adultprice;
cout<<"ENTER ADULT TICKET PRICE: $";
cin>>adultprice;

int childprice;
cout<<"ENTER CHILD TICKET PRICE: ";
cin>>childprice;

int adultsold;
cout<<"ENTER ADULT TICKETS SOLD: ";
cin>>adultsold;

int childsold;
cout<<"ENTER CHILDREN TICKETS SOLD: ";
cin>>childsold;

float donation;
cout<<"ENTER % AMOUNT TO DONATE: ";
cin>>donation;

float totalearned;
totalearned = (adultprice*adultsold) + (childprice*childsold);

float donate;
donate=(donation/100) * totalearned;

int remain;
remain = totalearned - donate;

cout<<"--------------------------"<<endl;
cout<<"MOVIE: "<<moviename<<endl;
cout<<"TOTAL AMOUNT EARNED: $"<<totalearned<<endl;
cout<<"DONATE AMOUNT: $"<<donate<<endl;
cout<<"REMAINING AMOUNT: $"<<remain<<endl;

}