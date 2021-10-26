// SimpleUserProfile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string firstName, lastName, favorateMeal, favorateMovie;
    cout << "Enter your first name: " << endl;
    cin >> firstName;
    cout << "Enter your last name: " << endl;
    cin >> lastName;
    cout << "Enter your favorate meal: " << endl;
    cin >> favorateMeal;
    cout << "Enter your favorate movie: " << endl;
    cin >> favorateMovie;
    cout << "\n";
    cout << firstName << endl;
    cout << lastName << endl;
    cout << favorateMeal << endl;
    cout << favorateMovie << endl;

    return 0;
}
