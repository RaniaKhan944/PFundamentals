#include <iostream>
using namespace std;

int main(){
    int y = 20;
    int &ref = y; //address of y

    cout<<"Original value of y: "<<y<<endl;
    ref = 30; //changing value permanently now;
    cout<<"Modified value of y: "<<y<<endl;

return 0;
}