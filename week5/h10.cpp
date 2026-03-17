#include <iostream>
using namespace std;
main (){
    int n = 0;
    cout<<"ENTER TOTAL NUMBERS: ";
    cin>>n;

    int p1count = 0;
    int p2count = 0;
    int p3count = 0;
    int p4count = 0;
    int p5count = 0;

    int num = 0;

    for(int i =1; i<=n; i++){
        cout<<"ENTER NUM: ";
        cin>>num;
    

    

    if((num) >= 1 && (num<200)){
        p1count = p1count + 1;
    }
    else if((num>=200) && (num<=399)){
        p2count = p2count + 1;
    }
    else if((num>=400) && (num<=599)){
        p3count = p3count +1;
    }
    else if((num>=600) && (num<=799)){
        p4count = p4count + 1;
    }
    else if ((num>=800) && (num<=1000)){
    p5count = p5count + 1;
    }
    else{ cout<<"RANGE INVALID"<<endl;}
   }

    float p1,p2,p3,p4,p5;
    p1 = (p1count*100.0)/n;
    p2 = (p2count*100.0)/n;
    p3 = (p3count*100.0)/n;
    p4 = (p4count*100.0)/n;
    p5 = (p5count*100.0)/n;

    cout<<p1<<"%\n";
    cout<<p2<<"%\n";
    cout<<p3<<"%\n";
    cout<<p4<<"%\n";
    cout<<p5<<"%\n";

}