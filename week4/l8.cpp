#include <iostream>
using namespace std;
main(){
float bill,discount;
cout<<"enter the bill: ";
cin>>bill;


if(bill<=5000){
    discount = 0.05 * bill;
    bill = bill - discount;
}
else{
    discount = 0.1 * bill;
    bill = bill - discount;
}
cout<< "discounted bill is: "<<bill;
}