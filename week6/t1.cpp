#include <iostream>
using namespace std;
int main(){
    string word;
    cout<<"ENTER WORD: ";
    cin>>word;
     
    for(int idx = 0; word[idx]!= 0; idx ++){
        cout<<word[idx]<<" found at position "<<idx<<endl;

    }
    
    
    
    return 0;}