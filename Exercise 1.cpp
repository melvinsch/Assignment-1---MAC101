#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, total = 0;
    cout << "Please enter three angles of a triangle: ";
    cin >> a >> b >> c;
    total = a + b + c;
    if (total != 180)
    cout << "Invalid angles, try again.";
    else if (a == b && b == c)
        cout << "This is an equilateral triangle.";
    else if (a == 90 || b == 90 || c == 90)
        cout << "This is a right triangle.";
    else if (a == b || b == c || a == c)
        cout << "This is an isosceles triangle.";
    else
        cout << "This is a scalene triangle.";

    return 0;
}
