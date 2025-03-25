#include <iostream>

using namespace std;

int main()
{
    //5 and 12
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    if(num % 5 == 0 && num % 12 == 0)
        cout << "The number is divisible by 5 and 12.";
    else
        cout << "This number is not divisible by 5 and 12.";
    return 0;
}
