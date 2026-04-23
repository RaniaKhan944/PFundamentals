#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER NUMBER OF ELEMENTS: ";
    cin>> num;

    int array[num];
    cout<<"ENTER "<<num<<" NUMBERS"<<endl;
    for(int i = 0; i < num; i++){
        cin>>array[i];
    }

    int sum=0;
    for(int i = 0; i < num; i++){
        sum = sum + array[i];
    }
    cout<<"SUM OF ALL ELEMENTS: "<<sum;


    
    return 0;}