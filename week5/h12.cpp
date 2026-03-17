#include <iostream>
using namespace std;
main(){
    int inheritance = 0, livetillyear= 0;
    cout<<"enter inheritance: $";
    cin>>inheritance;
    cout<<"live till year: ";
    cin>>livetillyear;

    int yearofbirth= 1800 - 18;
    int evenspent= 0,oddspent = 0;

    for(int i=1800; i<=livetillyear; i++){
        if( i % 2 == 0){
            evenspent =12000 + evenspent;
        }
        else{
            oddspent = (12000) + (50*(i - yearofbirth)) + oddspent;
        }
    }
    int totalspent = evenspent + oddspent;
    int remain= inheritance - totalspent;
    int  need= totalspent - inheritance;

    if(inheritance >= totalspent){
        cout<<"yes he will live a carefree life and have "<<remain<<" dollars left."<<endl;
    }
    else{
        cout<<"he will need "<<need<<" dollars to survive"<<endl;
    }
    
}