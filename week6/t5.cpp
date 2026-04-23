#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER OF ELEMENTS ABOVE 0: ";
    cin>> n;

    int arr[n];
    cout<<"ENTER "<<n<<" NUMBERS, 1 PER LINE: "<<endl;
    for(int i =0; i < n; i++){
        cin>>arr[i];
    }
   for (int idx = 0; idx < n; idx++){
    for(int j = 0; j < idx; j++){
        if(arr[idx]==arr[j]){
            cout<<"ALREADY ENTERED "<<arr[j]<<endl;
            cin>>arr[j];
            j = -1;
        }
    } 
   }
   cout<<"UNIQUE NUMBERS: ";
   for (int z = 0; z<n; z++){
    cout<<arr[z]<<" ";
   }

    return 0;
}