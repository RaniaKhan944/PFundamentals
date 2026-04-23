#include <iostream>
using namespace std;
int main(){
    char word[100];
    cout<<"ENTER WORD: ";
    cin>>word;

    int idx = 0, count =0;
    while(word[idx] != '\0'){
        count++;
        idx ++;
    }

    for(idx= 0; idx< count; idx ++){
        int asciiCode = word[idx];
        cout<<"ascii code is: "<<asciiCode<<endl;
    }
    for(idx= 0; idx< count; idx ++){
        int asciiCode = word[idx];
        word[idx] = asciiCode + 1;
        cout<<word[idx];
    } 
    
    return 0;}