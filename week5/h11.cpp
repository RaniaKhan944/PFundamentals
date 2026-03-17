#include <iostream>
using namespace std;
main (){
    int age = 0,machineprice = 0,pricepertoy = 0;
    cout<<"LILY'S AGE: ";
    cin>>age;
    cout<<"MACHINE PRICE: ";
    cin>>machineprice;
    cout<<"PRICE PER TOY: "; 
    cin>>pricepertoy;

    int toycount=0, evencount =0; 

    if(age>=1 && age<=77){
        for(int i = 1; i<=age; i++){
            if(i%2 !=0){
                toycount++;
            }
            else{
                evencount++;
            }

        }
    }

    int toyprice=0;
    if(pricepertoy>0 && pricepertoy<=40){
        toyprice = pricepertoy * toycount;
    }

    int evenmoney=0;
    for(int k=1; k<=evencount; k++){
        evenmoney = evenmoney + (k*10);
    }
    evenmoney = evenmoney -evencount;

    int totalmoney= toyprice + evenmoney;
    if(totalmoney>=machineprice){
        cout<<"YES! REMAINING IS: "<<totalmoney - machineprice<<endl;
    }
    else{
        cout<<"NO! REMAINING IS: "<<machineprice - totalmoney<<endl;
    }
}