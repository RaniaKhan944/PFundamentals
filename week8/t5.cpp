#include <iostream>
#include <cmath>

using namespace std;
int main(){
     int num1;
    cout<<"ENTER BASE NUMBER: ";
    cin>>num1;
    int num2;
    cout<<"ENTER EXPONENT NUMBER: ";
    cin>>num2;
    cout<<"BASE "<<num1<<" WITH POWER "<<num2<<" IS : "<<pow(num1, num2);

return 0;    
}