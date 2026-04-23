#include <iostream>
using namespace std;
int main(){
    int n =0;
    cout<<"ENTER ARRAY SIZE: ";
    cin>>n;

    int arr[n];
    cout<<"ENTER "<<n<<" ELEMENTS: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int evencount =0, oddcount =0, totalcount= 0;
    bool special = false;
    for(int idx =0; idx < n; idx++ ){
        if(idx % 2 == 0){
            if(arr[idx]%2 == 0){
                special = true;
                evencount = evencount +1;
            }
        }
        if(idx % 2 != 0){
            if(arr[idx]%2 != 0){
                special = true;
                oddcount = oddcount + 1;
            }
        }
    }

    totalcount = oddcount + evencount;
    if(totalcount == n){
        cout<<"SPECIAL ARRAY!";
    }
    else{
        cout<<"NOT SPECIAL ARRAY!";
    }

    return 0;}