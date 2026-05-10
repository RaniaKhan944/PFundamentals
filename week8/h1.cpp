#include <iostream>
#include <cmath>
using namespace std;

float volume(int height, int width, int length);

int main(){
    int h, w, l;
    cout<<"ENTER LENGTH WIDTH AND HEIGHT IN METERS: ";
    cin>> h;
    cin>>w;
    cin>>l;
    string units;
    cout<<"ENTER OUTPUT UNITS: ";
    cin>>units;

    float answer = volume(h,w,l);

    if(units == "centimeters"){
        answer = answer * pow(100,3);
        cout<<answer<<" Cubic "<<units;
    }
    else if(units == "kilometers"){
        answer = answer / pow(1000,3);
        cout<<answer<<" Cubic "<<units;
    }
    else if(units == "millimeters"){
        answer = answer * pow(1000,3);
        cout<<answer<<" Cubic "<<units;
    }

return 0;
}
float volume(int height, int width, int length){
    float volume = (height * length * width)/3;
    return volume;

}