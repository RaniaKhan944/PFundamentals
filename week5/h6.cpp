#include <iostream>
using namespace std;
main(){
    int num = 1;
    cout<<"enter number: ";
    cin>>num;

    int i = 1;
    while(i <=10){
    int ans = num * i;
    cout<<num<<" x "<<i<<" = "<<ans<<endl;
    i = i +1;
    }
}