#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName;

    cout << "Input First Name: ";
    getline(cin, firstName);

    cout << "Input Last Name: ";
    getline(cin, lastName);

    cout << "Name in reverse is: " << lastName << " " << firstName << endl;

    return 0;
}