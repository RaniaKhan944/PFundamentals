#include <iostream>
using namespace std;
main(){
int number;
cout<<"ENTER A 4-DIGIT NUMBER: ";
cin>>number;

int num1,num2, num3, num4;
int n1,n2,n3,n4;

num1 = number % 10;
n1 = number / 10;
cout<<num1<<endl;

num2 = n1 % 10;
n2 = n1 / 10;
cout<<num2<<endl;

num3 = n2 % 10;
n3 = n2 / 10;
cout<<num3<<endl;

num4 = n3 % 10;
n4 = n3 / 10;
cout<<num4<<endl;

int sum;
sum = num1 + num2 + num3 +num4;
cout<<sum;


}