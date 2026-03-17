#include <iostream>
using namespace std;
main(){
    int length;
    cout<<"enter length of fibonacci series: ";
    cin>>length;

    int n1 = 0;
    int n2= 1;
    int sum = 0;

    for (int i=1; i <= length; i++){
        sum = n1 + n2;
       cout<<n1<<" , ";
       n1 = n2;
       n2 = sum;
    }
}