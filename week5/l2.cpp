#include <iostream>
using namespace std;
main(){
int num,digit,finddigit;
cout<<"ENTER NUMBER: ";
cin>>num;
cout<<"ENTER DIGIT: ";
cin>>digit;

int oldnum = num;
int count = 0;

for(int i = 1; num != 0; i++){
 finddigit = num % 10;
if (finddigit == digit){
    count = count + 1;
}
 num = num/10;
}

cout<<"FREQUENCY OF "<<digit<<" IS "<<count<<" TIMES IN "<< oldnum;
}