#include <iostream>
using namespace std;
main(){
float valmb;
cout <<"ENTER SIZE IN MBs: ";
cin>> valmb;

float valb;
valb= valmb* 1024 *1024*8;

cout<<valmb<<" MBs IS EQUAL TO "<<valb<<" Bits";

}