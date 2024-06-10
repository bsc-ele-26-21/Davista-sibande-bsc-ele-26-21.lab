#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0.0f;
    width = 0.0f;
}

Rectangle::Rectangle(float len, float wid) {
    length = len;
    width = wid;
}

Rectangle::~Rectangle() {
    // Do nothing
}

void Rectangle::setLength(float len) {
    length = len;
}

void Rectangle::setWidth(float wid) {
    width = wid;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::getArea() const {
    return length * width;
}