#include <iostream>
using namespace std;
main(){
    int salary;
    cout<<"enter advance salary: ";
    cin>>salary;

    if(salary>=50000){
        cout<<"You can afford it!";
    }
    else{
        float months;
        months = 50000/salary;
        cout<<"months required: "<<months;
    }
}