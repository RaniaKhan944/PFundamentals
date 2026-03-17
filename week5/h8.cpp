#include <iostream>
using namespace std;
main(){
    int num = 0;
    cout<<"enter number: ";
    cin>>num;

    int newnum = num;
    int count = 0;

    while(newnum > 0){
        newnum = newnum / 10;
        count = count + 1;
    }
    cout<<"Total number of digits = "<<count;
}