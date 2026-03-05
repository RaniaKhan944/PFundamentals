#include <iostream>
using namespace std;
main(){ 

string country;
float ticketprice,discount,newprice;

cout<<"ENTER COUNTRY: ";
cin>>country;
cout<<"ENTER TICKET PRICE: ";
cin>>ticketprice;

if(country == "Ireland"){
    discount = 0.1 * ticketprice;
    newprice = ticketprice - discount;
    cout<<"DISCOUNTED PRICE: "<<newprice;
}
else{
    discount = 0.05 * ticketprice;
    newprice = ticketprice - discount;
    cout<<"DISCOUNTED PRICE: "<<newprice;
}
}