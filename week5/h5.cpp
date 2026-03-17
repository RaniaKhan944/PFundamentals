#include <iostream>
using namespace std;
main(){
    int sum = 0;
    int i = 1;

    while(i>=1 && i<=100){
        sum = sum + i;
        i = i + 1;
    }
    cout<<sum<<endl;
}