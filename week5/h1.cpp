#include <iostream>
using namespace std;
main(){
    char letter;
    
    cout<<"ENTER CHOICE: ";
    cin>>letter;

    while(letter != 'n' && letter !='N'){
        cout<<"I AM HAPPY"<<endl;
        cout<<"ENTER CHOICE: ";
        cin>>letter;
    }
}