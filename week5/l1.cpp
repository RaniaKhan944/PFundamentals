#include <iostream>
using namespace std;
main(){
int table,n1,n2,n3;
table = 1;
n1 = 24;
n2 = 50;
n3 = 29;

cout<<"TABLE OF "<<n1<<endl;
for(int i = 1; i <=10; i++){
    table = n1 * i;
    cout<< n1 <<" * "<< i <<" = "<< table<<endl;
}

cout<<endl; 

cout<<"TABLE OF "<<n2<<endl;
for(int j = 1; j <=10; j++){
    table = n2 * j;
    cout<< n2 <<" * "<< j <<" = "<< table<<endl;
}

cout<<endl; 

cout<<"TABLE OF "<<n3<<endl;
for(int k = 1; k <=10; k++){
    table = n3 * k;
    cout<< n3 <<" * "<< k <<" = "<< table<<endl;
}
cout<<endl; 
}