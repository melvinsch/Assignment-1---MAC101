#include <iostream>

using namespace std;

int main()
{
    string gender, super, food, tvshow;
    cout << "Male or Female?" << endl;
    cin >> gender;
    if(gender == "Male"){
        cout << "Superhero or Supervillain?" << endl;
        cin >> super;
        if(super == "Superhero"){
            cout << "Steak or Sushi?" << endl;
            cin >> food;
            if(food == "Steak"){
                cout << "You should get a flat top";
            }
            else{
                cout << "You should get a pompadour";
            }
        }
        else{
            cout << "You should get a mohawk";
        }
    }
    else if(gender == "Female"){
        cout << "Superhero or Supervillain?" << endl;
        cin >> super;
        if(super == "Superhero"){
            cout << "Anime or Sitcom?" << endl;
            cin >> tvshow;
            if(tvshow == "Anime"){
                cout << "You should go with bangs";
            }
            else{
                cout << "You should get a bob";
            }
        }
        else{
            cout << "You should get a mohawk";
        }
    }
    return 0;
}
