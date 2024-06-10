#include "Square.h"

namespace shapes {
    Square::Square() {
        side = 0.0f;
    }

    Square::Square(float s) {
        side = s;
    }

    Square::~Square() {
        // Do nothing
    }

    void Square::setSide(float s) {
        side = s;
    }

    float Square::getSide() const {
        return side;
    }
}