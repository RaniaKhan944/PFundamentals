#include <iostream>
#include <cmath>

using namespace std;
int main(){
    float num1;
    cout<<"ENTER NUMBER: ";
    cin>>num1;

    cout<<"CUBE ROOT: "<<cbrt(num1);
    cout<<"\nROUNDED UP INTEGER: "<<ceil(num1);
    cout<<"\nROUNDED DOWN INTEGER: "<<floor(num1);
    cout<<"\nCOS OF NUM: "<<cos(num1);
    cout<<"\nSIN OF NUM: "<<sin(num1);
    cout<<"\nTAN OF NUM: "<<tan(num1);

   
return 0;    
}