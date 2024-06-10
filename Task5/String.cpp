#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm> 

using namespace std;
void Reverse(string& str) {
    reverse(str.begin(), str.end());
}

void CapitalizeSecondLetter(string& str) {
    double capitalizeNext = true;
    for (char& c : str) {
        if (isalpha(c)) {
            if (capitalizeNext) {
                c = toupper(c);
                capitalizeNext = false;
            }
            else {
                capitalizeNext = true;
            }
        }
        else {
            capitalizeNext = true; 
        }
    }
}

void iss(string basicString) {

}

int main() {

    ifstream inputFile("File data.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    string fileData;
    string line;
    while (getline(inputFile, line)) {
        fileData += line + "\n"; 
    }

    // Close the file
    inputFile.close();

    int vowels = 0;
    for (char c : fileData) {
        if (tolower(c) == 'a' || tolower(c) == 'e' ||
            tolower(c) == 'i' || tolower(c) == 'o' ||
            tolower(c) == 'u') {
            ++vowels;
        }
    }

    
    int words = 0;
     istringstream iss(fileData);
   
    while (iss >> line) {
        ++words;
    }


    Reverse(fileData);

    CapitalizeSecondLetter(fileData);

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of words: " << words << endl;
    cout << "Reversed statement with capitalized second letters:\n";
    cout << fileData << endl;

    return 0;
}
