//This program demonstrate basic C++ input and output

#include <iostream> //We need this preprocessor directive 
using namespace std; // Which namespace to use

int main() {
    //We must define variables before using it
    string firstname;
    int userAge;
    double favouriteNum;
    char lastNameInitial;

    //Always display a prompt before using cin
    cout << "Enter your first name: ";
    cin >> firstname;

    cout << "Enter your age: ";
    cin >> userAge;

    cout << "Enter your favourite number: ";
    cin >> favouriteNum;

    cout << "Enter your last name initial: ";
    cin >> lastNameInitial;

    //Display a blank line for spacing
    cout << "\n--- Your Profile Summary ---\n";

    //Display the stored values from the variables
    cout << "Name: \t\t" << firstname << endl;
    cout << "Age: \t\t" << userAge << endl;
    cout << "Favourite #: \t" << favouriteNum << endl;
    cout << "Initial: \t" << lastNameInitial << endl;

    //Send 0 back to OS to indicate success
    return 0;
}