#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "ENTER NUMBER OF ELEMENTS: ";
    cin >> num;

    int arr[num];

    cout << "ENTER " << num << " ELEMENTS: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < num; i++)
    { 
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "LARGEST NUM: " << largest << endl;
    cout << "SMALLEST NUM: " << smallest << endl;

    return 0;
}