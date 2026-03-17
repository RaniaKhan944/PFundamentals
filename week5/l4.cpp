#include <iostream>
using namespace std;
main(){
    int rows,columns;
    cout<<"enter number of rows: ";
    cin>> rows;

    for (int i =1; i <=rows; i++){
        for(columns = 1; columns<=i; columns ++){
            cout<<"*";
        }
        cout<<endl;
    }
       
}