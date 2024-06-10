#include <iostream>
#include <string>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace shapes;

int main() {
    while (true) {
        string choose;
        cout << "Select an option:\n"
                  << "1. Calculate the area of a square\n"
                  << "2. Calculate the area of a triangle\n"
                  << "3. Calculate the area of a circle\n"
                  << "4. Quit\n"
                  << "Enter your choose: ";
        getline(cin, choose);

        if (choose == "1") {
            Square square;
            float side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            square.setSide(side);