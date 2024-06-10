#include <iostream>
using namespace std;

int main() {
    // Get the dimensions of the 2D array from the user
    int rows, columnz;
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;
    while (rows < 1 || rows > 3) {
        cout << "Invalid number of rows. Please enter a number between 1 and 3: ";
        cin >> rows;
    }
    cout << "Enter the number of columns (maximum 3): ";
    cin >> columnz;
    while (columnz < 1 || columnz > 3) {
        cout << "Invalid number of columns. Please enter a number between 1 and 3: ";
        cin >> columnz;
    }

    // Dynamically allocate the 2D array of doubles
    double** dynArr = new double*[rows];
    for (int x = 0; x < rows; x++) {
        dynArr[x] = new double[columnz];
    }

    // Assign values to the array elements
    for (int x = 0; x < rows; x++) {
        for (int j = 0; j < columnz; j++) {
            cout << "Enter a value for row " << x + 1 << ", column " << j + 1 << ": ";
            cin >> dynArr[x][j];
        }
    }

    // Output the values of the array
    cout << "The values of the 2D array are:" << endl;
    for (int x = 0; x < rows; x++) {
        for (int j = 0; j < columnz; j++) {
            cout << dynArr[x][j] << " ";
        }
        cout << endl;
    }

    // Clean up the dynamically allocated memory
    for (int x = 0; x < rows; x++) {
        delete[] dynArr[x];
    }
    delete[] dynArr;

    return 0;
}