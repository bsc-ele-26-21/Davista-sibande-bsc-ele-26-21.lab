#include "Area.h"
#include <cmath>

namespace shapes {
    float Area::calculateSquareArea(const Square& square) {
        return square.getSide() * square.getSide();
    }

    float Area::calculateTriangleArea(const Triangle& triangle) {
        return 0.5f * triangle.getBase() * triangle.getHeight();
    }

    float Area::calculateCircleArea(const Circle& circle) {
        return M_PI * circle.getRadius() * circle.getRadius();
    }
}