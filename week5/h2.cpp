#include <iostream>
using namespace std;
main(){
    int sum = 0;
    int num = 0;

    cout<<"ENTER NUMBER: ";
    cin>>num;

    while(num >=0){
        sum = num + sum;
        cout<<"ENTER NEXT NUMBER: ";
        cin>>num;
        if(num<0){
            cout<<"SUM IS: "<<sum<<endl;
            break;
        }
    }
}