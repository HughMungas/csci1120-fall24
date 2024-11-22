#ifndef boxType_H
#define boxType_H

#include "rectangleType.h"

class boxType : public rectangleType {
    friend std::ostream& operator<<(std::ostream&, const boxType&);
    friend std::istream& operator>>(std::istream&, boxType&);
    friend boxType operator+(const boxType&, const boxType&);
    friend boxType operator-(const boxType&, const boxType&);
    friend boxType operator*(const boxType&, const boxType&);
    friend bool operator==(const boxType&, const boxType&);
    friend bool operator!=(const boxType&, const boxType&);
    friend boxType& operator++(boxType&);         // Pre-increment
    friend boxType operator++(boxType&, int);     // Post-increment
    friend boxType& operator--(boxType&);         // Pre-decrement
    friend boxType operator--(boxType&, int);     // Post-decrement

public:
    void setDimension(double l, double w, double h);
    double getHeight() const;
    double area() const;
    double volume() const;

    boxType();
    boxType(double l, double w, double h);

protected:
    double height;
};

#endif
