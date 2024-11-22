#include "boxType.h"
#include <cassert>

// Constructors
boxType::boxType() : height(0.0) {}
boxType::boxType(double l, double w, double h) : rectangleType(l, w), height(h >= 0 ? h : 0) {}

void boxType::setDimension(double l, double w, double h) {
    rectangleType::setDimension(l, w);
    height = (h >= 0) ? h : 0;
}

double boxType::getHeight() const {
    return height;
}

double boxType::area() const {
    return 2 * (getLength() * getWidth() + getLength() * height + getWidth() * height);
}

double boxType::volume() const {
    return rectangleType::area() * height;
}

// Friend function implementations
boxType operator+(const boxType& b1, const boxType& b2) {
    return boxType(b1.getLength() + b2.getLength(),
                   b1.getWidth() + b2.getWidth(),
                   b1.height + b2.height);
}

boxType operator-(const boxType& b1, const boxType& b2) {
    assert(b1.getLength() >= b2.getLength() && b1.getWidth() >= b2.getWidth() && b1.height >= b2.height);
    return boxType(b1.getLength() - b2.getLength(),
                   b1.getWidth() - b2.getWidth(),
                   b1.height - b2.height);
}

boxType operator*(const boxType& b1, const boxType& b2) {
    return boxType(b1.getLength() * b2.getLength(),
                   b1.getWidth() * b2.getWidth(),
                   b1.height * b2.height);
}

bool operator==(const boxType& b1, const boxType& b2) {
    return b1.volume() == b2.volume();
}

bool operator!=(const boxType& b1, const boxType& b2) {
    return !(b1 == b2);
}

boxType& operator++(boxType& b) {  // Pre-increment
    ++b.length;
    ++b.width;
    ++b.height;
    return b;
}

boxType operator++(boxType& b, int) {  // Post-increment
    boxType temp = b;
    ++b;
    return temp;
}

boxType& operator--(boxType& b) {  // Pre-decrement
    assert(b.length > 0 && b.width > 0 && b.height > 0);
    --b.length;
    --b.width;
    --b.height;
    return b;
}

boxType operator--(boxType& b, int) {  // Post-decrement
    boxType temp = b;
    --b;
    return temp;
}

std::ostream& operator<<(std::ostream& os, const boxType& b) {
    os << "Length = " << b.getLength() << "; Width = " << b.getWidth() << "; Height = " << b.height;
    return os;
}

std::istream& operator>>(std::istream& is, boxType& b) {
    is >> b.length >> b.width >> b.height;
    return is;
}
