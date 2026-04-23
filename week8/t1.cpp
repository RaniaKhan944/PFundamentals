#include <iostream>
using namespace std;

void add (int num1, int num2);

int main(){
    int num1;
    cout<<"ENTER FIRST NUMBER: ";
    cin>>num1;
    int num2;
    cout<<"ENTER SECOND NUMBER: ";
    cin>>num2;
    add(num1,num2);
    
    
    return 0;
}

void add(int num1, int num2){
    cout<<"SUM: "<<num1 + num2;
}