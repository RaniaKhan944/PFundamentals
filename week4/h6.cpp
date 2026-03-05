#include <iostream>
using namespace std;
main(){
    int speed;
    cout<<"ENTER SPEED: ";
    cin>>speed;

    if(speed<=10){
        cout<<"SLOW";
    }
    if(speed<=50){
        if(speed>10){
        cout<<"AVERAGE";
        }
    }
    if(speed<=150){
        if(speed>50){
        cout<<"FAST";
        }
    }
    if(speed<=1000){
        if(speed>150){
        cout<<"ULTRA FAST";
        }
    }
    if(speed>1000){
        cout<<"EXTREMELY FAST";
    }
}