#include <iostream>
using namespace std;
main(){

while(true){
    cout<<"----RESTAURANT MANAGEMENT SYSTEM-----\n";
    cout<<"1.VIEW MENU\n";
    cout<<"2.PLACE ORDER\n";
    cout<<"3.VIEW ORDER STATUS\n";
    cout<<"4.GENERATE BILL\n";
    cout<<"5.CONTACT STAFF\n";
    cout<<"6.EXIT\n";
cout<<endl;
    int choice;
    cout<<"ENTER CHOICE NO. ";
    cin>>choice;

    if(choice == 1){
        cout<<"YOU SELECTED: VIEW MENU\n";
    }
    else if(choice == 2){
        cout<<"YOU SELECTED: PLACE ORDER\n";
    }
    else if (choice == 3){
        cout<<"YOU SELECTED: VIEW ORDER STATUS\n";
    }
    else if(choice == 4){
        cout<<"YOU SELECTED: GENERATE BILL\n";
    }
    else if (choice == 5){
        cout<<"YOU SELECTED: CONTACT STAFF\n";
    }
    else{
        cout<<"YOU SELECTED: EXIT\n";
        cout<<"EXITING SYSTEM. THANK YOU.\n";
        break;
    }
}

}