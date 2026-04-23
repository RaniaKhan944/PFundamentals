#include <iostream>
using namespace std;
int main(){
    char vowels[5]= {'a', 'e', 'i', 'o', 'u'};
    string sentence;
    cout<<"ENTER STRING: ";
    getline(cin,sentence);

    char newsentence[500];
    int newidx = 0;
    bool isvowel = false;

    for(int idx= 0; sentence[idx] != '\0'; idx++){
        isvowel = false;
        for(int i= 0; i< 5; i++){
            if(sentence[idx] == vowels[i]){
                isvowel = true;
            }
        }
        if(isvowel == false){
         newsentence[newidx] = sentence[idx];
         newidx++;
        }
    }
    newsentence[newidx]= '\0';
    cout<<"RESULT: "<<newsentence;
    
    
    return 0;}