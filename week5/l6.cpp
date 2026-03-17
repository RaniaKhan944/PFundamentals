#include <iostream>
using namespace std;
main(){
int correctpin = 1234;
int balance = 0;
int choice = 0;
int depositmoney = 0;
int withdrawmoney = 0;
int pin;

for(int i = 1; i<=3; i++){
    cout<<"ENTER PIN: ";
    cin>>pin;

    if(pin == correctpin){
        cout<<"LOGIN SUCCESSFUL!\n";
        cout<<endl;
        break;
    }
    else{
        cout<<"WRONG PIN\n";
    }

    if(i == 3 && !(pin == correctpin)){
    cout<<"TOO MANY ATTEMPTS. PROGRAM ENDED.";
    }
}

 if(pin ==correctpin){
     for( int j=1; j<=5; j++){

        cout<<"1. CHECK BALANCE\n";
        cout<<"2. DEPOSIT MONEY\n";
        cout<<"3. WITHDRAW CASH\n";
        cout<<"4. EXIT\n";
        cin>>choice;

        if(choice == 1){
            cout<<"BALANCE: "<<balance<<endl;
        }
        else if(choice == 2){
            cout<<"DEPOSIT AMOUNT: ";
            cin>>depositmoney;
            balance = balance + depositmoney;
            cout<<"NEW BALANCE: "<<balance<<endl;
        }
        else if(choice ==3){
            cout<<"WITHDRAW AMOUNT: ";
            cin>>withdrawmoney;

            if ((balance > 0) && (balance >=withdrawmoney)){
            balance = balance - withdrawmoney;
            cout<<"NEW BALANCE: "<<balance<<endl;
             }
            else{
            cout<<"INSUFFICIENT BALANCE!\n";
          }

         }
         else if(choice == 4){
            cout<<"PROGRAM TERMINATED!\n";
         }
        }
}
}