#include <iostream>
using namespace std;
main(){

int temp1,temp2,diff;
cout<<"CITY 1 TEMP: ";
cin>>temp1;

cout<<"CITY 2 TEMP: ";
cin>>temp2;

diff = temp1 - temp2;

if(diff >= 10){;
cout<<"DIFFERENCE IS TOO BIG";
cout<<endl;
cout<<"PROGRAM ENDS.";
}
else{
    cout<<"Program Ends";
}

}