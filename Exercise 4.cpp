#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    float s = 0;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    s = (a+b+c) / 2.0;
    s = sqrt(s*(s - a)*(s - b)*(s - c));
    cout << "The area of the triangle is: " << s;
    return 0;
}
