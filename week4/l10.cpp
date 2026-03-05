#include <iostream>
using namespace std;
main(){
cout<<"WELCOME TO CALCULATOR: "<<endl;
int num1,num2;
char oper;
float ans;

cout<<"ENTER FIRST NUMBER: ";
cin>>num1;
cout<<"ENTER OPERATOR: ";
cin>>oper;
cout<<"ENTER SECOND NUMBER: ";
cin>>num2;

if(oper == '+'){
  ans = num1 + num2;
}
if(oper == '-'){
    ans = num1 - num2;
}
if(oper == '*' ){
    ans = num1 * num2;
}
if(oper == '/'){
    ans = num1 / num2;
}
cout<<endl;
cout<<"ANSWER IS: "<<ans;
}