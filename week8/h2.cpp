#include <iostream>
using namespace std;

float taxCalc(int price, float taxRate);

int main()
{
    cout << "ENTER VEHICLE TYPE CODE: ";
    char type;
    cin >> type;

    cout << "ENTER PRICE: ";
    int price;
    cin >> price;

    if (type == 'M')
    {
        float taxRate = 6.0;
        float tax = taxCalc(price, taxRate);
        int total = price + tax;
        cout << "TOTAL PRICE OF TYPE " << type << " AFTER TAXES IS " << total;
    }
    else if (type == 'E')
    {
        float taxRate = 8.0;
        float tax = taxCalc(price, taxRate);
        int total = price + tax;
        cout << "TOTAL PRICE OF TYPE " << type << " AFTER TAXES IS " << total;
    }
    else if (type == 'S')
    {
        float taxRate = 10.0;
        float tax = taxCalc(price, taxRate);
        int total = price + tax;
        cout << "TOTAL PRICE OF TYPE " << type << " AFTER TAXES IS " << total;
    }
    else if (type == 'V')
    {
        float taxRate = 12.0;
        float tax = taxCalc(price, taxRate);
        int total = price + tax;
        cout << "TOTAL PRICE OF TYPE " << type << " AFTER TAXES IS " << total;
    }
    else if (type == '7')
    {
        float taxRate = 15.0;
        float tax = taxCalc(price, taxRate);
        int total = price + tax;
        cout << "TOTAL PRICE OF TYPE " << type << " AFTER TAXES IS " << total;
    }
    return 0;
}

float taxCalc(int price, float taxRate)
{
    float taxAmount = price * (taxRate / 100);
    return taxAmount;
    
}