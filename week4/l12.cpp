#include <iostream>
using namespace std;
main(){
    string n1,n2,n3;
    int a1,a2,a3;

    cout<<"ENTER NAME OF FIRST BROTHER: ";
    cin>>n1;
    cout<<"ENTER AGE OF FIRST BROTHER: ";
    cin>>a1;

    cout<<"ENTER NAME OF SECOND BROTHER: ";
    cin>>n2;
    cout<<"ENTER AGE OF SECOND BROTHER: ";
    cin>>a2;

    cout<<"ENTER NAME OF THIRD BROTHER: ";
    cin>>n3;
    cout<<"ENTER AGE OF THIRD BROTHER: ";
    cin>>a3;

    if(a1 < a2){
        if(a1 < a3){
            cout<<n1<<" is the youngest.";
        }
    }

    if(a2 < a1){
        if(a2 < a3){
            cout<<n2<<" is the youngest.";
        }
    }
    if(a3 < a2){
        if(a3 < a1){
            cout<<n3<<" is the youngest.";
        }
    }
}