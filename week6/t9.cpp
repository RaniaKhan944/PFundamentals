#include <iostream>
using namespace std;
int main(){
   float money[4];
   cout<<"ENTER QUARTERS: ";
   cin>>money[0];
   cout<<"ENTER DIMES: ";
   cin>>money[1];
   cout<<"ENTER NICKELS: ";
   cin>>money[2];
   cout<<"ENTER PENNIES: ";
   cin>>money[3];

   float amountdue =0;
   cout<<"ENTER DUE AMOUNT: ";
   cin>>amountdue;
   
    money[0]= money[0] * 0.25;
    money[1] = money[1] * 0.10;
    money[2] = money[2] *  0.05;
    money[3] = money[3] * 0.01;

    float sum =0;
    for( int idx = 0; idx < 4; idx ++){
        sum = sum + money[idx];
    }
    cout<<"CAN YOU PAY THE AMOUNT?  ";

    if(sum >= amountdue){
        cout<<"YES CAN PAY!";
    }
    else{
        cout<<"nahi, ghareeb log";
    }



    
    
    
    
    return 0;}