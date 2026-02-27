#include <iostream>
using namespace std;
main(){

float vegprice;
cout<<"ENTER VEGETABLE PRICE PER KG (IN COINS): ";
cin>>vegprice;

float fruitprice;
cout<<"ENTER FRUIT PRICE PER KG (IN COINS): ";
cin>>fruitprice;

int totalveg;
cout<<"ENTER TOTAL KGS OF VEGETABLES: ";
cin>>totalveg;

int totalfruit;
cout<<"ENTER TOTAL KGS OF FRUITS: ";
cin>>totalfruit;

float totalearn;
totalearn= (vegprice*totalveg) +(fruitprice*totalfruit);

float rupees;
rupees = totalearn/1.94;
cout<<"TOTAL EARNED IN RUPEES: "<<rupees;


}