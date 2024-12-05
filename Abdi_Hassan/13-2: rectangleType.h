#ifndef H_rectangleType
#define H_rectangleType

#include <iostream> 
using namespace std;

class rectangleType {
    friend rectangleType operator+(const rectangleType&, const rectangleType&);
    friend rectangleType operator-(const rectangleType&, const rectangleType&);
    friend rectangleType operator*(const rectangleType&, const rectangleType&);
    friend bool operator==(const rectangleType&, const rectangleType&);
    friend bool operator!=(const rectangleType&, const rectangleType&);
    friend bool operator<=(const rectangleType&, const rectangleType&);
    friend bool operator<(const rectangleType&, const rectangleType&);
    friend bool operator>=(const rectangleType&, const rectangleType&);
    friend bool operator>(const rectangleType&, const rectangleType&);
    friend ostream& operator<<(ostream&, const rectangleType&);
    friend istream& operator>>(istream&, rectangleType&);

public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;

    rectangleType();
    rectangleType(double l, double w);

protected:
    double length;
    double width;
};

#endif
