#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dyInt = new int;
    cout << "Enter a value for the dynamically allocated integer: ";
    cin >> *dyInt;

    // Dynamically allocate a string
    string* dynStr = new string;
    cout << "Enter a value for the dynamically allocated string: ";
    getline(cin >> ws, *dynStr);

    // Output the dynamically allocated variables
    cout << "Dynamically allocated integer: " << *dyInt << endl;
    cout << "Dynamically allocated string: " << *dynStr << endl;

    // Clean up the dynamically allocated memory
    delete dyInt;
    delete dynStr;

    return 0;
}