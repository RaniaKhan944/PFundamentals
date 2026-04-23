#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER OF RESISTORS ABOVE 0: ";
    cin>> n;

    int arr[n];
    cout<<"ENTER RESISTANCE (OHMS) OF "<<n<< " RESISTORS, 1 PER LINE: "<<endl;
    for(int i =0; i < n; i++){
        cin>>arr[i];
    }

    int sum =0;
    for(int idx =0; idx < n; idx++){
        sum = sum + arr[idx];
    }
    cout<<"TOTAL RESISTANCE IS: "<<sum<<" OHMS.";

    return 0;}