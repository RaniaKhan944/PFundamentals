#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"ENTER  ELEMENTS NUMBERS for the first array: ";
    cin>> n1;
    cout<<"ENTER NUMBER OF ELEMENTS FOR THE SECOND ARRAY: ";
    cin>>n2;

    int arr1[n1];
    cout<<"ENTER "<<n1<<" NUMBERS FOR 1RST ARRAY, 1 PER LINE: "<<endl;
    for(int i =0; i < n1; i++){
        cin>>arr1[i];
    }
    int arr2[n2];
    cout<<"ENTER "<<n2<<" NUMBERS FOR 2ND ARRAY, 1 PER LINE: "<<endl;
    for(int j =0; j < n2; j++){
        cin>>arr2[j];
    }

    int arr3[100];
    arr3[0] = arr1[0];
    for(int z = 0; z < n2;z++){
        arr3[z + 1] = arr2[z];
    } 
    arr3[n2 + 1] = arr1[1];

    for(int a = 0; a < n2 + 2; a++){
        cout<<arr3[a]<<" , ";
    }


    return 0;}