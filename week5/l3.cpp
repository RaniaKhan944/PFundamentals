#include <iostream>
using namespace std;
main(){
    int a,b,hcf;
    hcf = 1;
    cout<<"ENTER FIRST NUM: ";
    cin>>a;
    cout<<"ENTER SECOND NUM: ";
    cin>>b;

    int smallerno;
    if(a>b){
        smallerno = b;
    }
    if(b>a){
        smallerno = a;
    }

    int i = smallerno;
    while (i>=1){

        if( a % i == 0 && b % i ==0){
            hcf = i;
            break;
        }

        i = i-1;
    }

    int lcm;
    lcm = (a * b)/hcf;

    cout<<"HCF OF "<<a<<" AND "<<b<<" IS "<<hcf<<endl;
    cout<<"LCM OF "<<a<<" AND "<<b<<" IS "<<lcm;
}