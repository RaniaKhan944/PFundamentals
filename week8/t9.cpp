#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a = 0, b = 0, c = 0;
    cout << "ENTER a: ";
    cin >> a;
    cout << "ENTER b: ";
    cin >> b;
    cout << "ENTER c: ";
    cin >> c;

    float determinant = pow(b, 2) - (4 * a * c);

    float root1 = 0, root2 = 0;
    if (determinant == 0)
    {
        root1 = (-b - sqrt(determinant)) / (2 * a);
        cout << "SOLUTION: " << root1 << endl;
    }
    else if (determinant > 0)
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "SOLUTION: " << root1 << " AND " << root2;
    }
    else if (determinant < 0)
    {
        float real = -b / (2 * a);
        float imaginary = (sqrt(-determinant) / (2 * a));
        root1 = real + imaginary;
        root2 = real - imaginary;
        cout << "Complex Solutions: x = " << real << " + " << imaginary << "i";
        cout << " and x = " << real << " - " << imaginary << "i";
    }

    return 0;
}