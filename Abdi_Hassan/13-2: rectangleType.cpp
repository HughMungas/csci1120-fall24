#include <iostream>
#include <cassert>
#include "rectangleType.h"

using namespace std;

void rectangleType::setDimension(double l, double w) {
    length = (l >= 0) ? l : 0;
    width = (w >= 0) ? w : 0;
}

double rectangleType::getLength() const { return length; }
double rectangleType::getWidth() const { return width; }
double rectangleType::area() const { return length * width; }
double rectangleType::perimeter() const { return 2 * (length + width); }

rectangleType::rectangleType(double l, double w) { setDimension(l, w); }
rectangleType::rectangleType() : length(0), width(0) {}

// Nonmember operator overloads
rectangleType operator+(const rectangleType& r1, const rectangleType& r2) {
    return rectangleType(r1.length + r2.length, r1.width + r2.width);
}

rectangleType operator-(const rectangleType& r1, const rectangleType& r2) {
    assert(r1.length >= r2.length && r1.width >= r2.width);
    return rectangleType(r1.length - r2.length, r1.width - r2.width);
}

rectangleType operator*(const rectangleType& r1, const rectangleType& r2) {
    return rectangleType(r1.length * r2.length, r1.width * r2.width);
}

bool operator==(const rectangleType& r1, const rectangleType& r2) {
    return r1.area() == r2.area();
}

bool operator!=(const rectangleType& r1, const rectangleType& r2) {
    return !(r1 == r2);
}

bool operator<=(const rectangleType& r1, const rectangleType& r2) {
    return r1.area() <= r2.area();
}

bool operator<(const rectangleType& r1, const rectangleType& r2) {
    return r1.area() < r2.area();
}

bool operator>=(const rectangleType& r1, const rectangleType& r2) {
    return r1.area() >= r2.area();
}

bool operator>(const rectangleType& r1, const rectangleType& r2) {
    return r1.area() > r2.area();
}

ostream& operator<<(ostream& os, const rectangleType& rectangle) {
    os << "Length = " << rectangle.length << "; Width = " << rectangle.width;
    return os;
}

istream& operator>>(istream& is, rectangleType& rectangle) {
    is >> rectangle.length >> rectangle.width;
    return is;
}
