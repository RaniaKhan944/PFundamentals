#include <iostream>
#include <cmath>

using namespace std;
int main(){
float distance = 0, angle = 0; //in degrees
cout<<"ENTER DISTANCE(IN FEET): ";
cin>> distance;
cout<<"ENTER ANGLE OF ELEVATION (DEGREES): ";
cin>>angle;

angle = angle /57.2958;

float height = distance * tan(angle);
cout<<"HEIGHT OF TREE IS: "<<height<<" FEET";

    

return 0;    
}