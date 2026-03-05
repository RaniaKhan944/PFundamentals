#include <iostream>
using namespace std;
main(){
string actual_password,attempt;
actual_password = "P@ss123";

cout<<"ENTER PASSWORD: ";
cin>> attempt;

if(attempt == actual_password){
    cout<<"YOU CRACKED THE CODE!";
}
else{
    cout<<"try again!";
}
}