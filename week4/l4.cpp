#include <iostream>
using namespace std;
main(){
int num;
cout<<"enter a number: ";
cin>>num;

int even;
even = num % 2;
if(even==0){
    cout<<"its an even number!";
}
else{
    cout<<"its an odd number!";
}

}