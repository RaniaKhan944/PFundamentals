#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"ENTER STRING WORD: ";
    cin >> str;

    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    for(int i = count - 1; i >=0; i-- ){
        cout<<str[i];
    }
    return 0;
}