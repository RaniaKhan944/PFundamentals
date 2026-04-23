#include <iostream>
using namespace std;
int main(){
    int n =0;
    cout<<"ENTER NUMBER OF CHORDS: ";
    cin>>n;

    char arr[n];
    cout<<"ENTER "<<n<<" CHORDS: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool is7 = false;
    string jazz[n];
    int newidx =0;

    for(int idx =0; arr[idx] != '\0'; idx++){
        bool is7 = false;
        for(int i =0; i <n ; i++){
            if(arr[idx] != '7'){
                jazz[newidx] = arr[n] + "7";
            }
        }
    }


cout<<"JAZZ RESULT: "<<jazz;

return 0;