#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2 , 3 , 4 , 5};
    int *ptr = arr;     // points to arr[0] value which is 1

    for(int i =0; i <5; i++){
        cout<<"ELEMENT "<<i<<": "<<*(ptr + i)<<endl;
    }

    
    
    return 0;}