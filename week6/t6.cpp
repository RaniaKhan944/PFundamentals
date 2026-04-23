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

    int largest = arr[0];
    for(int j = 1; j < n; j++){
        if(arr[j] > largest){
            largest = arr[j];
        }
    }

    cout<<"largest number is: "<<largest;

    return 0;}

