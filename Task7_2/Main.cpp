#include <iostream>
#include "Rectangle2.h"

int main() {
    Rectangle rect1;
    float length, width;
    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    cout << "Enter the width of the first rectangle: ";
    cin >> width;
    rect1.setLength(length);
    rect1.setWidth(width);
    cout << "The area of the first rectangle is: " << rect1.getArea() << endl;

    Rectangle rect2(10.0f, 5.0f);
    cout << "The area of the second rectangle is: " << rect2.getArea() << endl;

    return 0;
}