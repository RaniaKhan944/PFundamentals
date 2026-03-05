#include <iostream>
using namespace std;
main(){

float rprice,wprice,tprice;
float p1,p2,p3,price,discount,newprice;
int f1,f2,f3;

rprice = 2;
wprice = 4.1;
tprice = 2.5;

cout<<"RED ROSE: ";
cin>> f1;
p1 = f1 * rprice;

cout<<"WHITE ROSE: ";
cin>>f2;
p2 = f2 * wprice;

cout<<"TULIP: ";
cin>>f3;
p3 = f3 * tprice;

price = p1 + p2 + p3;
cout<<"ORIGINAL PRICE: $"<<price;

if(price > 200){
    discount = 0.2 * price;
    newprice = price - discount;
    cout<<endl;
    cout<<"DISCOUNTED PRICE: "<<newprice;
}
}