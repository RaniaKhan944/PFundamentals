#include <iostream>
using namespace std;
int main(){

    while(true){
    
    cout<<"------simple calculator-----\n";
    cout<<"1. add\n";
    cout<<"2.subtract\n";
    cout<<"3.multiply\n";
    cout<<"4.divide\n";
    cout<<"5.clear screen\n";
    cout<<"6.exit\n";

    int n1 = 0, n2= 0, opr= 0;
    cout<<"enter choice (1-6): ";
    cin>>opr;
    cout<<"enter first number: ";
    cin>>n1;
    cout<<"enter second number: ";
    cin>>n2;

    int ans = 0;
        if(opr == 1){
            ans = n1 + n2;
            cout<<"result ="<<ans<<endl; 
        }
        else if(opr ==2){
            ans = n1 - n2;
            cout<<"result ="<<ans<<endl; 
        }
        else if(opr ==3){
            ans = n1*n2;
            cout<<"result ="<<ans<<endl; 
        }
        else if(opr == 4){
            if (n2 ==0 || n1 ==0){
                cout<<" zero is not valid input.";
                continue;
            }
            else{ 
                ans = n1/n2;
                cout<<"result = "<<ans<<endl; 
            }
        }
        else if(opr ==5){
            cout<<"screen cleared\n";
        }
        else if(opr ==6){
            cout<<"exiting. goodbye\n";
            break;
        }
    }

    
    return 0;
}