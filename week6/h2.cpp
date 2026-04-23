#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER NUMBER OF ELEMENTS: ";
    cin>>num;

    int arr[num];
    cout<<"ENTER "<<num<<" ELEMENTS: "<<endl;
    for(int i = 0; i < num; i++){
        cin>>arr[i];
    }

    int evencount = 0;
    for(int i = 0; i < num; i++){
        if(arr[i]%2 == 0){
            evencount++;
        }
    }

    cout<<"EVEN NUMBERS ARE: "<<evencount;
    
    
    
    
    return 0;}