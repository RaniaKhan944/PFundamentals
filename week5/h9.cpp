#include <iostream>
using namespace std;
main(){
    int num = 0;
    cout<<"enter number: ";
    cin>>num;
    
    int newnum = num;
    int sum = 0;

    while(newnum > 0){
        int n1 = newnum % 10;
         sum = sum + n1;
         newnum = newnum / 10;
       
    } 
    cout<<"sum is "<<sum;
}