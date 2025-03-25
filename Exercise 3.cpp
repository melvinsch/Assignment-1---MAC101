#include <iostream>

using namespace std;

int main(){
    int capacity = 0, people = 0;
    cout << "Enter the maximum room capacity: ";
    cin >> capacity;
    cout << "Enter the number of people that will be attending: ";
    cin >> people;
    if(people <= capacity){
        cout << "The meeting can legally take place." << endl;
        cout << "The number of additional people that can attend the meeting is: " << capacity - people;
    }
    else{
        cout << "The meeting cannot be held due to fire regulations." << endl;
        cout << "In order to meet these regulations, " << people - capacity << " people must be excluded.";
    }
    return 0;
}
